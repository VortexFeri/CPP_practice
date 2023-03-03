#include <stdio.h>

#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("%d: EVEN\n", number);
	}
	else
	{
		printf("%d: ODD\n", number);
	}
}
bool isNumber(std::string s) {
	for (char c : s) {
		// If argument is NaN display that
		if (!isdigit(c)) return false;
	}
	return true;
}

int main(int argc, char* argv[])
{

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//		

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
		return 0;
	}
	
	// Display if each argument is odd or even
	for (int i = 1; i < argc; i++) {
		std::string argAsString(argv[i]);
		if (isNumber(argAsString)) {
			printOddOrEven(stoi(argAsString));
		}
		else 
		// If argument is NaN display that
			std::cout << argAsString << ": Not a Number!\n";
		}

	return 0;
}