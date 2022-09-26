#include <vector>
#include "calculate_avg.h"


double CalculateAverage(const std::vector<double> &student_grades) {
  if (student_grades.size() > 0) {
    double grades_sum = 0;
    double average_grades = 0;
    for (int i = 0; i < student_grades.size(); i++) {
      grades_sum += student_grades.at(i);
    }
    average_grades = (grades_sum / student_grades.size());
    return average_grades;
  }
  return 0.0;
}
