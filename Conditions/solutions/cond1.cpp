/*
 * Major Errors: 5
 * Style Errors: 2
 * 
 * Objective: 
 * - Take in user's input, and count number of lowercase letters, uppercase letters, digits, and punctuation
 * - Ignores whitespace
 *
 */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

	// style error 1: 
	// declare all variables first
	string user_input;	
	int punct_count = 0;
	int lower_count = 0;
	int upper_count = 0;
	int digit_count = 0;

	cout << "Welcome to Richard's Character Counter!" << endl;
	cout << "=======================================" << endl;
	cout << "Enter a string: " << endl;
	cout << "> ";

	getline(cin, user_input);	


	// style error 2: unneccessary condition
	// major error 1: no increment on for loop
	for(int i = 0; i < user_input.size(); ++i)
	{
		// major error 2: incorrect use of || statements 
		if(user_input[i] == ' ' || user_input[i] == '\t' || user_input[i] == '\n' || user_input[i] == '\b')
		{
			cout << "Index " << i << " is whitespace" << endl;
		}

		// major error 3: can use == comparison or no need for comparison operator
		// major error 4: forgot to increment counters
		else if(ispunct(user_input[i]))
		{
			cout << "Index " << i << " is punctuation: " << user_input[i] << endl;
			++punct_count;
		}

		else if(islower(user_input[i]))
		{
			cout << "Index " << i << " is uppercase: " << user_input[i] << endl;
			++lower_count;
		}

		else if(isupper(user_input[i]))
		{
			cout << "Index " << i << " is lowercase: " << user_input[i] << endl;
			++upper_count;
		}

		// major error 5: must specify condition for digits
		else if(isdigit(user_input[i]))
		{
			cout << "Index " << i << " is digit: " << user_input[i] << endl;	
			++digit_count;
		}

	} 

	cout << endl << endl << "The total counts are: " << endl;
	cout << "================" << endl;
	cout << "Punctuation Count: " << punct_count << endl;
	cout << "Lowercase Count: " << lower_count << endl;
	cout << "Uppercase Count: " << upper_count << endl;
	cout << "Digit Count: " << digit_count << endl;
}
