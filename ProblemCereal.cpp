#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  double userInputWeight = 0;

  cout << "Enter weight of cereal box in ounces: ";
  cin >> userInputWeight; //in ounces

  double userInputInTons = userInputWeight/35273.92;
  cout << "Weight of cereal in metric tons: " << userInputInTons << endl;
  double cerealBoxesNeeded = 1/userInputInTons;
  cout << "Number of boxes needed to weigh a metric ton: " << cerealBoxesNeeded << endl;
  return 0;
}
