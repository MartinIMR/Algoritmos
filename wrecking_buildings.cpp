#include <iostream>
#include "stack.cpp"

using namespace std;

void reckoningMaximum(int [],int);

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
 reckoningMaximum(rectangleAreas,solicitedAreas);
 return 0;
}

void reckoningMaximum(int areas[],int n)
{
 Stack * stack = new Stack();
 int maxima = 0;
 for(int i=0;i<n+1;i++)
 {
    if(areas[i]<areas[i+1])
    {
	cout << "Area en "<< i+1 <<" es mayor que la en "<<i<<endl;
	(*stack).push(i+1);
    }else if(areas[i]>areas[i+1])
    {
	cout << "Area en "<< i+1 <<" es menor que la en "<<i<<endl;
	int top;
	do{
	   top = (*stack).pop();
	   cout << "Tope tiene "<<top<<endl;
	   int base = (i+1) - top;
	   int height = areas[top];
	   int area = base * height;
	   cout << "Base y altura son "<<base<<" "<<height<<" area es "<<area<<endl;
	   if(maxima < area)
	   {
	     maxima = area;
	   }
	}while(areas[top]>areas[i+1]);

	if((*stack).isEmpty())
	{
	  cout << "Pila vacia llenando con ultimo tope "<<top<<endl;
	  (*stack).push(top);
	}
    }
 }
 cout << "Maximum area is:"<<maxima<<endl;

}
