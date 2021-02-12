// 4 errors

#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 10;

// 1. parameter must be taking in an array
void printArr(int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[SIZE];	

	// 2. should not be printing with no items inside array
	cout << "Print array before" << endl;
	// printArr(arr);
	
	// 3. goes out of bounds with size
	for(int i = 0; i < SIZE; ++i)
	{
		arr[i] = i - 1; 
	}

	// 4. does not pass in the correct # of parameters
	cout << "Print array after" << endl;
	printArr(arr, SIZE);	
		

}
