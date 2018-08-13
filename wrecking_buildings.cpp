#include <iostream>
#include "stack.hpp"

using namespace std;

int main()
{
 
 int solicitedAreas;
 cout << "Please introduce the number of areas you want to save " << endl;
 cin >> solicitedAreas;
 cout << "We're reserving your areas!"<<endl;
 int* rectangleAreas= new int[solicitedAreas+2];
 if(rectangleAreas == NULL)
 {
  cout << "The memory couldn't be reserved"<<endl;
  return -1;
 }
 cout << "Memory reserved successfully\nNow introduce the each area"<<endl;
 rectangleAreas[0] = 0;
 rectangleAreas[solicitedAreas+1] = 0;
 for(int i=1,area;i<solicitedAreas+1;i++){
  cout<< "Introduce area number "<<i<<":";
  cin >> area;
  rectangleAreas[i] = area;
 }
 Stack * stack = new Stack();
 if((*stack).isEmpty())
 {
  cout << "The stack is empty" <<endl;
 }else{
  cout << "The stack is not empty" <<endl;
 }
 cout << "Put a value for the stack"<<endl; 
 int value;
 cin >> value;
 cout << "Pushing the value "<<endl;
 (*stack).push(value);
 if((*stack).isEmpty())
 {
  cout << "The stack is empty" <<endl;
 }else{
  cout << "The stack is not empty" <<endl;
 }
 cout << "The top has:"<< (*stack).top()<<endl;
 
 return 0;
}

