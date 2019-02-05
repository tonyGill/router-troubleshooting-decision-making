/*

Algorithm was designed in the following series of steps:
1) Define variable for router fixed as type string
2) Prompt user to reboot computer and connect the router to fix the problem
3) Take user input as a yes or no string to determine whether router has been fixed or not
5) If router fixed end program, if router not fixed proceed to providing user prompt instructing them to check if cables between router and modem plugged properly 
6) If router fixed end program, if router not fixed fixed prompt the user to move router to new location
7) If router fixed end program , if router not fixed prompt the user to buy a new router 

Functions/Formulas

Function in this case was only the main function with variable for routerFixed as string type, user input of yes or no
and decision making conditional statements that provide the user with instructions as prompts


Revision History:
January 30, 2019: First working edition created
February 3, 2019: Final version revised and completed


*/


#include <iostream>
#include <string>
using namespace std;

int main()
{

	//Defines the variable for routerFixed as string type
	string routerFixed;

	//Prompts the first troubleshooting instruction to the user
	cout << "Reboot your computer and try to connect" << endl; 

	// Asks the user if problem was fixed as yes or no response
	cout << "Was the problem fixed or not? Please enter yes or no? " << endl;

	// Takes user input for yes or no response of string type
	cin >> routerFixed;

	// Conditional statement checks if no response was entered by user
	if (routerFixed == "no") {

		// Proceeds to prompt user the second troubleshooting instruction
		cout << "Make sure the cables between the router and modem are + \nplugged in firmly." << endl;

		// Asks the user if problem was fixed as yes or no response
		cout << "Was the problem fixed or not? Please enter yes or no? " << endl;
	}

		// Takes user input for yes or no response of string type
		cin >> routerFixed;


		// Conditional statement checks if no response was entered by user
		if (routerFixed == "no") {

			// Proceeds to prompt user the third troubleshooting instruction
			cout << "Move the router to a new location." << endl;

			// Asks the user if problem was fixed as yes or no response
			cout << "Was the problem fixed or not? Please enter yes or no? " << endl;

			// Takes user input for yes or no response of string type
			cin >> routerFixed;
			
		}

		// Conditional statement checks if no response was entered by user
		if (routerFixed == "no"){

			// Prompt tells the user to get new router, troubleshooting did not work
			cout << "Get a new router" << endl;

	}








    return 0;
}

