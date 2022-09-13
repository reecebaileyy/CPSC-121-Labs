double SalaryCalculator(double hourly_wage, double hours_worked) {
    double total_salary_owed;

    if (hours_worked <= 40) {
        total_salary_owed = (hours_worked * hourly_wage);
    }
    else if (hours_worked > 40 && hours_worked <= 65) {
        total_salary_owed = (hourly_wage * 40) + (hours_worked - 40) * (hourly_wage * 1.5);
    }
    else if (hours_worked > 65) {
        total_salary_owed = (hourly_wage * 40) + (hourly_wage * 1.5) * 25 + (hours_worked - 65) * hourly_wage * 2;
    }
return total_salary_owed;
}
