/* Airgead Banking App
   Created by Brandon Hartman
   Completed on 8 October 2022 */

#include <iostream>
#include <string>
#include "InputData.h"
#include "Calculations.h"
#include <iomanip>

using namespace std;
char resetChoice = 'r';

void StartProgram() { // Function to run the program 

	InputData inputData{}; // Create an instance of InputData class
	inputData.PromptUser(); // Call InputData's PromptUser method. Requests info from the user

	system("CLS"); // Clears the screen

	Calculations calculations{}; // Create an instance of Calculations class
	calculations.CalculateForReport(inputData.GetNumberOfYears(), inputData.GetInitInvestment(), inputData.GetMonthlyDeposit(), inputData.GetAnnualInterest()); // Calculates the data based on user input

}

int main()
{
	while (resetChoice == 'r') { //Sets a reset function
		StartProgram();

		cout << "Press 'r' to restart. Press any other key to quit.\n"; // if 'r' is entered, resets the program. if anyting else is entered program exits.
		cin >> resetChoice;
	}

	return 0;
}