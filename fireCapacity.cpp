#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int maxCapacity = 0;
  int currentAmount = 0;


  cout << "What is the maximum room capacity?: ";
  cin >> maxCapacity;
  cout << "How many people are in the room?: ";
  cin >> currentAmount;

  cout << endl;

  if(maxCapacity >= currentAmount){
    cout << "It is legal to hold this meeting!" << endl;
    cout << (maxCapacity - currentAmount) << " more people may enter the room." << endl;
  }
  else{
    cout << "This meeting breaks fire safty regulations and is illegal!" << endl;
    cout << (currentAmount - maxCapacity) << " people must leave the room immediately in order to meet fire regulations." << endl;
  }
  return 0;
}
