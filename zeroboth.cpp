#include <iostream>

using namespace std;

//sets both variables given as inputs to zero
//recieves variables as refrence making this possible
void ZeroBoth(int& firstNumber, int& secondNumber){
  firstNumber = 0;
  secondNumber = 0;
}

int main (int argc, char **argv)
{
  int num1 = -7;
  int num2 = 900;
  ZeroBoth(num1,num2);  //no matter what num1 and num2 are they will be changed to 0
  cout << "num1 = " << num1 << " num2 = " << num2 << endl;
  return 0;
}
