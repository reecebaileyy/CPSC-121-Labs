#include "tuffle.h"

std::string BoardColors(std::string guessing, std::string answers) {
  std::string words = "BBBBB";
  
  for (int i = 0; i < answers.size(); i++) {
    if (answers[i] == guessing[i]) {
      words[i] = 'G';
      answers[i] = '*';
    }
    
  }
  
  for (int i = 0; i < answers.size(); i++) {
    if (answers.find(guessing[i]) != std::string::npos) {
      int index = answers.find(guessing[i]);
      if (words[i] != 'G') {
        words[i] = 'Y';
        answers[index] = '*';
      }
    }
  }
  
  return words;
}

void TuffleGame::DeleteKeyPressed() {
  
  if (game_state_.GetStatus() != "active") {
    return;
  }
  
  ClearError();
  
  std::vector<std::string> guesses = game_state_.GetGuessedWords();
  
  int index = guesses.size() - 1;
  
  std::string guess = guesses.at(index);
  
  if (guesses.size() == 0) {
    return;
  }
  
  guess.pop_back();
  
  guesses.at(index) = guess;
  
  game_state_.SetGuessedWords(guesses);
}

void TuffleGame::LetterKeyPressed(char k) {
  if (game_state_.GetStatus() != "active") {
    return;
  }
  
  ClearError();
  
  std::vector<std::string> guesses = game_state_.GetGuessedWords();
  
  if (guesses.size() == 0) {
    guesses.push_back("");
  }
  
  int index = guesses.size() - 1;
  
  std::string guess = guesses.at(index);
  
  if (guess.size() != 5) {
    guesses.at(index) = guess + k;
    game_state_.SetGuessedWords(guesses);
  }
  
}

void TuffleGame::NewGame() {
  game_state_ = GameState(dictionary_.GetRandomTuffle());
  game_state_.SetStatus("active");
}

void TuffleGame::ClearError() { 
  game_state_.SetErrorMessage(""); 
}


void TuffleGame::EnterKeyPressed() {
  if (game_state_.GetStatus() != "active") {
    return;
  }
  
  ClearError();
  
  std::vector<std::string> guesses = game_state_.GetGuessedWords();
  
  int index = guesses.size() - 1;
  
  std::string guess = guesses.at(index);
  
  bool words = dictionary_.IsValidGuess(guess);
  
  if (not words) {
    game_state_.SetErrorMessage("not a valid word");
    return;
  }
  
  if (guess.size() != 5) {
    game_state_.SetErrorMessage("not a 5 letter word");
    return;
  }
  
  std::vector<std::string> color = game_state_.GetBoardColors();
  
  std::string game_board = BoardColors(guess, game_state_.GetAnswer());
  
  color.push_back(game_board);
  game_state_.SetBoardColors(color);
  if (game_board == "GGGGG") {
    game_state_.SetStatus("win");
  } else if (guesses.size() == 6) {
    game_state_.SetStatus("lose");
  } else {
    guesses.push_back("");
    game_state_.SetGuessedWords(guesses);
  }
}

crow::json::wvalue TuffleGame::GameStateInJson() {
  // The JSON object to return to the Tuffle Frontend.
  crow::json::wvalue game_state_json({});
  game_state_json["answer"] = game_state_.GetAnswer();
  game_state_json["boardColors"] = game_state_.GetBoardColors();
  game_state_json["guessedWords"] = game_state_.GetGuessedWords();
  game_state_json["gameStatus"] = game_state_.GetStatus();
  game_state_json["errorMessage"] = game_state_.GetErrorMessage();
  return game_state_json;
}
