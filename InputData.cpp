/* Airgead Banking App
   Created by Brandon Hartman
   Completed on 8 October 2022 */

#include "InputData.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;


void InputData::SetInitInvestment(double openingAmount) // sets initial investment
{
	initInvestment = openingAmount;
}

double InputData::GetInitInvestment() // returns initial investment amount
{
	return initInvestment;
}
void InputData::SetMonthlyDeposit(double deposit) // sets monthly deposit amount
{
	monthlyDeposit = deposit;
}

double InputData::GetMonthlyDeposit() // returns monthly deposit amount
{
	return monthlyDeposit;
}
void InputData::SetAnnualInterest(double interestRate) // sets annual interest rate
{
	annualInterestRate = interestRate;
}
double InputData::GetAnnualInterest() // returns annual interest rate
{
	return annualInterestRate;
}
void InputData::SetNumberOfYears(double years) // sets number of years
{
	numYears = years;
}
double InputData::GetNumberOfYears() // returns number of years
{
	return numYears;
}
void InputData::PromptUser() // prompts the user within the console
{
	while (menuSelection == 'r')
	{
		/* sets bools to false, testing for negative input */
		bool initialInvestmentTest = false;
		bool monthlyDepositTest = false;
		bool interestRateTest = false;
		bool numberOfYearsTest = false;

		system("CLS"); // Clears Screen

		/* Prompts for initial investment, user inputs, sets initial investment */
		
		while (initialInvestmentTest == false) { // if user's input is negative, repeat prompt
			cout << "Initial Investment: ";
			cin >> initInvestment;
			if (initInvestment >= 0) {
				SetInitInvestment(initInvestment);
				initialInvestmentTest = true;
			}
			else {
				cout << "Invalid Input. Please submit positive number." << endl;
			}
		}
		
		while (monthlyDepositTest == false) { // if user's input is negative, repeat prompt
			/* Prompts for initial investment, user inputs, sets initial investment */
			cout << "Monthly Deposit: ";
			cin >> monthlyDeposit;
			if (monthlyDeposit >= 0) {
				SetMonthlyDeposit(monthlyDeposit);
				monthlyDepositTest = true;
			}
			else {
				cout << "Invalid input. Please submit positive number." << endl;
			}
		}
		
		while (interestRateTest == false) { // if user's input is negative, repeat prompt
			/* Prompts for initial investment, user inputs, sets initial investment */
			cout << "Interest Rate: ";
			cin >> annualInterestRate;
			if (annualInterestRate >= 0) {
				SetAnnualInterest(annualInterestRate);
				interestRateTest = true;
			}
			else {
				cout << "Invalid input. Please submit positive number." << endl;
			}
			
		}
		
		while (numberOfYearsTest == false) {  // if user's input is negative, repeat prompt
			/* Prompts for initial investment, user inputs, sets initial investment */
			cout << "Number of Years: ";
			cin >> numYears;
			if (numYears >= 0) {
				SetNumberOfYears(numYears);
				numberOfYearsTest = true;
			}
			else {
				cout << "Invalid input. Please submit positive number." << endl;
			}
		}
		

		system("CLS"); // Clears Screen

		/* Shows user the data that they submitted */
		cout << "Initial Investment: $" << initInvestment << endl;
		cout << "Monthly Deposit: $" << monthlyDeposit << endl;
		cout << "Interest Rate: " << annualInterestRate << "%" << endl;
		cout << "Number of Years: " << numYears << endl;

		cout << "Press 'r' to reset. Press any other key to continue. \n" << endl; // if 'r' is entered, resets the Prompt User function
		cin >> menuSelection;
	}

	

}
