#include <iostream>

using namespace std;

void ZeroBoth(int& firstNumber, int& secondNumber){
  firstNumber = 0;
  secondNumber = 0;
}

int main (int argc, char **argv)
{
  int num1 = -7;
  int num2 = 900;
  ZeroBoth(num1,num2);
  cout << "num1 = " << num1 << " num2 = " << num2 << endl;
  return 0;
}
