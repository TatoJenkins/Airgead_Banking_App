/* Airgead Banking App
   Created by Brandon Hartman
   Completed on 8 October 2022 */

#include "InputData.h"
#include "Calculations.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;



void Calculations::CalculateForReport(double years, double startingAmount, double recurringDeposit, double annualPercentageRate) {

	numMonths = years * monthsPerYear; // Gets number of months by multiplying years by 12.
	monthStart = startingAmount; // Assigns the amount of funds initially in the account
	monthlyDeposit = recurringDeposit; // Assigns the recurring monthly deposit
	currentMonth = 0; // sets current month to 0
	vector<double>  monthlyBalance; // Vector to compile all of our data into one variable.

	for (int i = 0; i < numMonths; i++) // For every month we will be updating the calculations and placing the results within the vector. 
	{

		monthInterest = (monthStart + monthlyDeposit) * ((annualPercentageRate / 100) / 12); // Calculates monthly interest earned based on annual percentage provided by user
		monthEnd = monthStart + monthlyDeposit + monthInterest; // determines the End of month balance. Starting Balance + Deposited amount + monthly interest earned
		currentMonth += 1; // Adds one to the month

		/* Append data into our vector */
		monthlyBalance.push_back(currentMonth);

		monthlyBalance.push_back(monthStart);

		if (monthlyDeposit != 0) { // If there is no monthly depoit, skip adding this value into the vector. 
			monthlyBalance.push_back(monthlyDeposit);
		}

		monthlyBalance.push_back(monthInterest);

		monthlyBalance.push_back(monthEnd);

		monthStart = monthEnd; // Changes the Monthly Start amount to match End of previous month. 



	}

	/* If / Else statement to determine which format to use. If no deposit, remove "Deposit" Column. */
	if (monthlyDeposit != 0) {
		/* Header */
		cout << endl;
		cout << "  Month   " << "Initial     " << "Deposit     " << "Earned      " << "Ending Balance" << endl;
		cout << string(60, '=');
		cout << endl;


		for (int j = 0; j < monthlyBalance.size(); j++) // Printing our data out to the member. 
		{
			if (j % 5 == 0) { // Sets a new line at the Month column.
				/* Adjust Month column alignment based on mumber of months */
				if (monthlyBalance.at(j) < 10) {
					cout << fixed << setprecision(0) << endl << "   " << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 100) {
					cout << fixed << setprecision(0) << endl << "  " << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 1000) {
					cout << fixed << setprecision(0) << endl << " " << monthlyBalance.at(j) << "      ";
				}
				else {
					cout << fixed << setprecision(0) << endl << monthlyBalance.at(j) << "      ";
				}
			}
			else {
				/* Adjust columns based on number of digits */
				if (monthlyBalance.at(j) < 10) {
					cout << fixed << setprecision(2) << " $" << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 100) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 1000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "     ";
				}
				else if (monthlyBalance.at(j) < 10000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "    ";
				}
				else if (monthlyBalance.at(j) < 100000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "   ";
				}
				else {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "      ";
				}

			}
		}
		/* Closing lines */
		cout << endl;
		cout << endl;
		cout << string(60, '=');
		cout << endl;
		cout << endl;

	}
	else {
		/* Header */
		cout << endl;
		cout << "  Month   " << "Initial     " << "Earned      " << "Ending Balance" << endl;
		cout << string(48, '=');
		cout << endl;

		for (int j = 0; j < monthlyBalance.size(); j++) // iterate through each element of the vector
		{

			if (j % 4 == 0) { // New row for each month
				/* Sets Month column alignment based on number of months */
				if (monthlyBalance.at(j) < 10) {
					cout << fixed << setprecision(0) << endl << "   " << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 100) {
					cout << fixed << setprecision(0) << endl << "  " << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 1000) {
					cout << fixed << setprecision(0) << endl << " " << monthlyBalance.at(j) << "      ";
				}
				else {
					cout << fixed << setprecision(0) << endl << monthlyBalance.at(j) << "      ";
				}
			}
			else {
				/* Sets alignment of remaining columns based on number of digits */
				if (monthlyBalance.at(j) < 10) {
					cout << fixed << setprecision(2) << " $" << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 100) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "      ";
				}
				else if (monthlyBalance.at(j) < 1000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "     ";
				}
				else if (monthlyBalance.at(j) < 10000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "    ";
				}
				else if (monthlyBalance.at(j) < 100000) {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "   ";
				}
				else {
					cout << fixed << setprecision(2) << "$" << monthlyBalance.at(j) << "      ";
				}

			}
		}
		/* Closing lines */
		cout << endl;
		cout << endl;
		cout << string(48, '=');
		cout << endl;
		cout << endl;
	}
}
	

