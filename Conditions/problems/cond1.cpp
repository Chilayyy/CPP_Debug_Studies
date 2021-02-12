/*
 * Major Errors: 3
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
	cout << "Welcome to Richard's Character Counter!" << endl;
	cout << "=======================================" << endl;
	cout << "Enter a string: " << endl;
	cout << "> ";

	string user_input;	
	getline(cin, user_input);	

	int punct_count = 0;
	int lower_count = 0;
	int upper_count = 0;
	int digit_count = 0;

	for(int i = 0; i <= user_input.size() - 1)
	{
		if(user_input[i] == ' ' || '\t' || '\n' || '\b')
		{
			cout << "Index " << i << " is whitespace" << endl;
		}

		else if(ispunct(user_input[i]) = true)
		{
			cout << "Index " << i << " is punctuation: " << user_input[i] << endl;
		}

		else if(islower(user_input[i]) = true)
		{
			cout << "Index " << i << " is uppercase: " << user_input[i] << endl;
		}

		else if(isupper(user_input[i]) = true)
		{
			cout << "Index " << i << " is lowercase: " << user_input[i] << endl;
		}

		else
		{
			cout << "Index " << i << " is digit: " << user_input[i] << endl;	
		}

	} 

	cout << endl << endl << "The total counts are: " << endl;
	cout << "=====================" << endl;
	cout << "Punctuation Count: " << punct_count << endl;
	cout << "Lowercase Count: " << lower_count << endl;
	cout << "Uppercase Count: " << upper_count << endl;
	cout << "Digit Count: " << digit_count << endl;
}
