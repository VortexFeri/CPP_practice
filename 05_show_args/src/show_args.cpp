#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; i++) {
		std::string argAsString(argv[i]);
		std::cout << argAsString << std::endl;
	}
	return 0;
}