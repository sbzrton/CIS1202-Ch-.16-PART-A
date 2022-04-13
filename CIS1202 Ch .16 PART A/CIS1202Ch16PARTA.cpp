
//Sha'Maria Barton
//CIS 1202 K01
// April 12th, 2022

#include <iostream>
#include <cctype>
using namespace std;


//Function prototype 
char character(char, int);



int main() {
	
	//Try/Catch Block
	try {
		auto ch = 'a';
		int pos =  1;
		char asc = ch + pos;

		//Thows exception if char is not a letter of the alphabet

		if (!isalpha(ch)) {
			int except = 0;
			throw(except);
		}
		//Throws exception if character position is out of range
		else if (!isalpha(asc)) {
			int except = 1;
			throw(except);
		}
		//Throwing exception if lowercase letters are being converted to uppercase (vice versa)

		//Testing lowercase
		else {
			if (islower(ch)) {
				if (isupper(asc)) {
					int except = 3;
					throw(except);
				}
				else {
					character(ch, pos);
				}
			}

			//Testing uppercase
			else if (isupper(ch)) {
			
			
				if (islower(asc)) {
					int except = 3;
					throw(except);
				}
				else {
					character(ch, pos);
				}
			}
			
		}
		
	} 
	catch (int e) {

		//Depending on what is thrown, different exceptions will display.
		if (e == 0) {
			cout << "\n Invalid Character!!!!";
		}
		if (e == 1) {
			cout << "\n Invalid Range!!!!!";
		}
		if (e == 3) {
			cout << "\n Invalid. Cannot convert letter to a different case";
		}
	}

	
	
	cin.ignore(INT_MAX);
}


//Function that returns corresponding letter

char character(char start, int offset) {
	
	auto z = start + offset;

	cout << "\n The character is: " << static_cast<char>(z);
	return z;
}