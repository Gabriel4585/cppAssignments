#include <iostream>
#include<string.h>
using namespace std;

//prompts message then takes in TakeInput
//feet and inches variables taken in as References
void TakeInput(float& feetInput, float& inchInput){
  cout << "Enter in feet then inches: ";
  cin >> feetInput;
  cin >> inchInput;
}

//adds inches in terms of feet to given feet and returns feet
float ToOnlyFeet(float& feet, float& inches){
  float totalFeet = 0;
  totalFeet = feet + (inches / 12.0);
  return totalFeet;
}

//prints out meters and centimeters
//called by ToMetricPrint
void PrintMetersCentimeters(float totalMeters, float totalCentimeters){
  cout << "Your input is equal to: " << totalMeters << "m and " << totalCentimeters << "cm" << endl;
}

void ToMetricPrint(float totalFeet){
  float totalMeters = 0;
  float totalCentimeters = 0;
  totalCentimeters = totalFeet * 30.48; //feet to centimeters
  while(totalCentimeters > 100){
    ++totalMeters;
    totalCentimeters -=100;
  }
  PrintMetersCentimeters(totalMeters,totalCentimeters);
}

int main (int argc, char **argv)
{
  float userFeet = 0.0;
  float userInches = 0.0;
  float totalFeet = 0.0;
  char redo[100] = "default"; //needs to be char array for strcmp() to work

  while((strcmp("exit",redo) != 0) != 0){
    TakeInput(userFeet,userInches); //prompts user to input measurement in feet and inches
    totalFeet = ToOnlyFeet(userFeet,userInches); //sets the float variable totalFeet to the input of feet and inches converted to just feet
    ToMetricPrint(totalFeet); //converts titalFeet into metric centimeters and meters then calls the print function
    cout << "Type exit to end or type yes to convert another measurement: ";
    cin >> redo;
    cout << endl;
  }

  return 0;
}
