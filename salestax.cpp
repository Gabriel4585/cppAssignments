#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){  //taxRate input as percent
  float costWithTax = 0;
  costWithTax = (cost * (taxRate / 100.0)) + cost;
  return costWithTax;
}

int main (int argc, char **argv)
{
  cout << addTax(10,100) << endl;
  return 0;
}
