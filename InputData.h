/* Airgead Banking App
   Created by Brandon Hartman
   Completed on 8 October 2022 */

#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <vector>

class InputData 
{
private:
	/* declare variables for user input */
	double initInvestment;
	double monthlyDeposit;
	double annualInterestRate;
	double numYears;
	char menuSelection = 'r';

public:

	/* Setters and Getters for variables */
	void SetInitInvestment(double initInvestment);
	
	double GetInitInvestment(); 
	
	void SetMonthlyDeposit(double monthlyDeposit);

	double GetMonthlyDeposit();

	void SetAnnualInterest(double annualInterestRate);

	double GetAnnualInterest();

	void SetNumberOfYears(double years);

	double GetNumberOfYears();

	void PromptUser();
};

#endif