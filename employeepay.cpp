//An employee is paid at a rate of $16.00 per hour for regular hours worked in a week.

// Any hours over that
//are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
//for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
//$10 per week is withheld for medical insurance.


//Write a program that will read in the number of hours
//worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
//the net take-home pay for the week.

#include <iostream>
using namespace std;

int main(){

//the amount of hours a person wokrs
  double regularHours;
// the overtime hours
  double overTimeHours;

//withholds
  double grossPay;
  double socialSecurity;
  double federalIncome;
  double stateIncome;
  double medicalInsurance;
  int medInsurance;
// total of all the withholds
  double totalWithhold;

// asks how many hours
  cout << "How many regular hours: ";
  cin >> regularHours; // stores into regular hours varible
// asks how many overtime hours
  cout << "How many overtime hours";
  cin >> overTimeHours; //stores into overTimeHours

//calculations for regularHours and overTimeHours
  regularHours = regularHours * 16.00;
  overTimeHours = overTimeHours * 1.5;

//calculates gross pay
  grossPay = regularHours + overTimeHours;

// calculations for the withholds
  socialSecurity = grossPay * .06;
  federalIncome = grossPay * .14;
  stateIncome = grossPay * .05;
  medInsurance = 10;
  totalWithhold = socialSecurity + federalIncome + stateIncome + medInsurance;
//print statments for the withholds
  cout << "Gross pay: " << grossPay << endl << endl;
  cout << "Social security: " << socialSecurity << endl;
  cout << "Federal income: " << federalIncome << endl;
  cout << "State income: " << stateIncome << endl;
// print statment for the total withholds
  cout << "Total withholding amount: " << totalWithhold << endl;
// print for the net pay
  cout << "Net pay: " << grossPay - (socialSecurity + federalIncome + stateIncome + medInsurance) << endl ;


}
