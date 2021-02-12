
// there are 4 errors
// don't try to change the logic, just the conditions

#include <iostream>
using namespace std;

int main()
{

	int arr[] = {1, 2, 3, 4, 5}
	int i = 0;
	
	cout << "The old array is: " << endl;
	for(int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";	
	}

	for(int i = 0; i < 5; ++i)
	{
		arr[i + 1] += arr[i];
	}

	cout << endl << "The new array is: " << endl;
	for(int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}	
}
