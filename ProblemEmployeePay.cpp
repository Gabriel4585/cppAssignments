#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  float hourlyRate = 16.0; //in dollars
  float overtimeHourlyRate = hourlyRate*1.5;  //rate for overtime
  float hoursWorked = 0.0;
  float overtimeHoursWorked = 0.0;
  float grossIncome = 0.0;

  cout << "Enter number of normal hours worked this week: ";
  cin >> hoursWorked;
  cout << "Enter number of overtime hours worked this week: ";
  cin >> overtimeHoursWorked;

  grossIncome = (hoursWorked * hourlyRate) + (overtimeHoursWorked * overtimeHourlyRate);  //adds all the income
  float SSTax = grossIncome * 0.06; //in decimal representation of percentage
  float fedIncomeTax = grossIncome * 0.14;
  float stateIncomeTax = grossIncome * 0.05;
  float medInsurance = 10;
  float netIncome = grossIncome - SSTax - fedIncomeTax - stateIncomeTax - medInsurance;  //subtracts all the expenses

  cout << "Total grossIncome: $" << grossIncome << endl;

  cout << "Social Security tax withheld: $" << SSTax << endl;
  cout << "Federal income tax withheld: $" << fedIncomeTax << endl;
  cout << "State income tax withheld: $" << stateIncomeTax << endl;
  cout << "Amount withheld for medical insurance: $" << medInsurance << endl;

  cout << "Total net 'take home pay': $" << netIncome << endl;

  return 0;
}
