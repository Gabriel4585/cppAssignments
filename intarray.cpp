#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int numIndex = 0;
  int currentNumber = 1;
  int userNums[10];

  for(int i=0; i<10; ++i){
    userNums[i] = -1;
  }

  while(numIndex < 10 && currentNumber > 0){
    currentNumber = 0;
    cout << "Enter non negative number:" << endl;
    cin >> currentNumber;
    if(currentNumber > 0){
      userNums[numIndex] = currentNumber;
      ++numIndex;
    }

  }

  if(numIndex > 0){
    cout << "Here are your number(s): ";

    for(int i=0; i< numIndex; ++i){
      cout << userNums[i] << " ";
    }
  } else{
    cout << "You entered no valid numbers";
  }

  cout << endl;
  return 0;
}
