//It is difficult to make a budget that spans several years, because prices are not stable. If your company
//needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
//now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
//expected cost of an item in a specified number of years.

//The program asks for the cost of the item, the
//number of years from now that the item will be purchased, and the rate of inflation. The program then
//outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
//per- centage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
//as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)


#include <iostream>
using namespace std;


int main(){

  double costItem;
  int years;
  double inflationRate;
  double fracRate;
  int i;

  cout << "What is the cost of the item?";
  cin >> costItem;
  cout << "How many years from now will the item be purchased";
  cin >> years;
  cout << "What is the rate of inflation";
  cin >> inflationRate;


  fracRate = inflationRate / 100;

  for (i = 0; i < years; i++){
    costItem = costItem * fracRate;

  }


  cout << "In " << years << " the cost of this item will be " << costItem;

  return 0;

  }
