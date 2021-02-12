// 3 major errors
// 1 style error

#include <iostream>
#include <vector>
using namespace std;

int size = 5;

int main()
{
	int intArr1[] = {1, 2, 3, 4, 5};
	int intArr2[] = {5, 4, 3, 2, 1};

	cout << "Compare integer array" << endl;
	for(int i = 0; i < size; ++i)
	{
		if(intArr1 < intArr2)
		{
			cout << intArr1[i] << " is less than " << intArr2[i] << endl;
		}
		
		else
		{
			cout << intArr2[i] << " is greater than " << intArr2[i] << endl;
		}	
	} 

	cout << endl;
}
