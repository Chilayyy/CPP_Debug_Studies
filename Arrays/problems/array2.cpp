// 4 errors

#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 10;

void printArr(int arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[SIZE];	

	cout << "Print array before" << endl;
	printArr(arr);
	
	for(int i = 0; i <= SIZE; ++i)
	{
		arr[i] = i - 1; 
	}

	cout << "Print array after" << endl;
	printArr(arr);	
		

}
