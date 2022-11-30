// test git
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

int main(void) { 
	int command = 0;
	do { 
		cout << endl << "*********    TEST GIT    ************";
		cout << endl << "*    0. Quit                        *";
		cout << endl << "*    1. Print hello world           *";
		cout << endl << "*    2. Add two numbers             *";
		cout << endl << "*************************************";
		cout << endl << "Input a command (0, 1, 2): ";
		cin >> command; // get the command
		switch (command) {
			case 0: 
				break;
				
			case 1: {
				cout << endl << "Hello world\n";
				break;
			case 2:
				string a;
				string b;
				cout << endl << "Input a number: ";
				cin >> a;
				cout << endl << "Input a number: ";
				cin >> b;
				int num1 = atoi(a.c_str());
				int num2 = atoi(b.c_str());
				cout << endl << "Answer: " << num1 + num2 << endl;
				break;
			}
			
			default: 
				cout << endl << "Command does not exist!" << endl;
		} // end switch
	} while (command != 0); // '0': stop the program
	
	return 0;
} // end of main
