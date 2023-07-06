#pragma once

#include <string>
#include <vector>

#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState {
 public:
  GameState(const std::string& answer) { answer_ = answer; }

  std::string GetAnswer() const { return answer_; }
  void SetAnswer(std::string answer) { answer_ = answer; }

  std::vector<std::string> GetBoardColors() const { return board_colors_; }
  void SetBoardColors(std::vector<std::string> board) { board_colors_ = board; }

  std::vector<std::string> GetGuessedWords() const { return guessed_answers_; }
  void SetGuessedWords(std::vector<std::string> guesses) {
    guessed_answers_ = guesses;
  }

  std::string GetStatus() const { return status_; }
  void SetStatus(std::string status) { status_ = status; }

  std::string GetErrorMessage() const { return error_message_; }
  void SetErrorMessage(std::string error) { error_message_ = error; }

 private:
  std::string answer_;
  std::vector<std::string> board_colors_;
  std::vector<std::string> guessed_answers_;
  std::string status_;
  std::string error_message_;
};

#endif  // GAMESTATE_H