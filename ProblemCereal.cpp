#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  double userInputWeight = 0;

  cout << "Enter weight of cereal box in ounces: ";
  cin >> userInputWeight; //input ounces

  double userInputInTons = userInputWeight/35273.92; //chanes input from ounces to tons then stores it into the variable
  cout << "Weight of cereal in metric tons: " << userInputInTons << endl;
  double cerealBoxesNeeded = 1/userInputInTons; //finds amount of cereal boxes
  cout << "Number of boxes needed to weigh a metric ton: " << cerealBoxesNeeded << endl;
  return 0;
}
