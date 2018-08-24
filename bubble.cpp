#include <iostream>

using namespace std;

void bubble(int* array,int n)
{
  bool terminate = false;
  for(int i=0; i<n ;i++)
  {
    if(terminate)
    {
	break;
    }
    terminate = true;
    for(int j=0; j < n-1 ;j++ )
    {
	
	if(array[j+1] < array[j])
	{
	  int temp = array[j];
	  array[j] = array[j+1];
	  array[j+1] = temp; 
	  terminate = false;
	}
		
    }

  }
}

int main()
{
 int n;
 cin >> n;
 int* numbers;
 numbers = new int[n];
 for(int i=0;i < n;i++)
 {
  cin >> numbers[i];
 }
 bubble(numbers,n);
 for(int i=0;i < n;i++)
 {
  cout << numbers[i]<<" ";
 }
 cout << endl;
 delete []numbers;
 return 0;
}
