// there are 3 major errors
// don't try to change the logic, just the conditions

#include <iostream>
using namespace std;

int main()
{

	// 1. add a semicolon
	int arr[] = {1, 2, 3, 4, 5};
	
	// 2. duplicate declaration of i
	// int i = 0;
	
	cout << "The old array is: " << endl;
	for(int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";	
	}

	// reduce condition by 1 since out of bounds
	for(int i = 0; i < 4; ++i)
	{
		arr[i + 1] += arr[i];
	}

	cout << endl << "The new array is: " << endl;
	for(int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}	
	cout << endl;
}
