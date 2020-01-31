
//A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
//of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
//to yield one metric ton of cereal.



#include <iostream>
using namespace std;

int main()

{


  double metTons = 35273.92; //metric ton in ounces
  double packageWeightOunces; // from metirc to ounces
  double packageWeightMetric; // metric weight
  double boxes; //number of boxes


  cout << "Enter ounces of the breakfast cereal"; //onces that will become tons


  packageWeightMetric = packageWeightOunces / metTons; // calculations for metrics to tons
  cout << "Metric tons: "<< packageWeightMetric << endl; //print statment for metric tons

  boxes = metTons / packageWeightOunces; // calculations for boxes
  cout << "You need " << boxes << " boxes to yeild a metric ton of cereal." << endl; // pring statmemnt for how many boxes
  return 0;
}
