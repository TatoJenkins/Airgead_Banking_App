/* Airgead Banking App
   Created by Brandon Hartman
   Completed on 8 October 2022 */

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include "InputData.h"
#include <vector>

class Calculations

{
private:
	/* Declares calculation variables */
	double annualInterest;
	double monthInterest;
	double monthStart;
	double monthlyDeposit;
	double monthEnd;
	int numMonths;
	int monthsPerYear = 12;
	double currentMonth;
	


public:
	/* function to calculate data and format it into an easy to read report */
	void CalculateForReport(double years, double startingAmount, double recurringDeposit, double annualPercentageRate); 
};

#endif
