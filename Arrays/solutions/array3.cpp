// 3 major errors
// 1 style error

#include <iostream>
#include <vector>
using namespace std;

// 1. for global constants you should make const & caps (style error)
// note: you need to change size everywhere to SIZE
const int SIZE = 5;

int main()
{
	int intArr1[] = {1, 2, 3, 4, 5};
	int intArr2[] = {5, 4, 3, 2, 1};

	cout << "Compare integer array" << endl;
	for(int i = 0; i < SIZE; ++i)
	{
		// 2. only comparing array, not item at index (major error)
		if(intArr1[i] < intArr2[i])
		{
			cout << intArr1[i] << " is less than " << intArr2[i] << endl;
		}

		// 3. there is no comparison for equals (major error)
		else if(intArr1[i] == intArr2[i])
		{
			cout << intArr1[i] << " is equal to " << intArr2[i] << endl;
		}

		// 4. comparing same array twice (major error)
		else
		{
			cout << intArr1[i] << " is greater than " << intArr2[i] << endl;
		}	
	} 

	cout << endl;
}
