//ask Mdm. Paridah   1- \t from line 24     2- why rPeriod is not int    3- why tlRepayment isnt from line 29?   4- whats going on from line 41?  5- line 13 to 22 why theres no \n????
#include <stdio.h>

main()
{
	float pPrice, dPayment, iRate, rPeriod, lAmount, tInterest, tlRepayment, mRepayment, aPayment, Balance;
	int Month; 
	
		printf("CALCULATOR FOR CAR LOAN\n");
		
		printf("=======================\n");
		
		printf("Enter purchase price\t\t      >> ");
			scanf("%f", &pPrice);
		printf("Enter down payment\t\t      >> ");
			scanf("%f", &dPayment);
		printf("Enter interest rate (in percentage)   >> ");
			scanf("%f", &iRate);
		printf("Enter repayment period (in years)     >> ");
			scanf("%f", &rPeriod);	
			
		printf("==============================================="); 
	
		printf("\nPurchase Price\t     : RM    %.2f", pPrice);	
		printf("\nDown Payment\t     : RM    %.2f", dPayment);	
		printf("\nInterest Rate\t     : %.2f", iRate);	
		printf("\nRepayment period     : %.f years", rPeriod);	

			lAmount = pPrice - dPayment;
			tInterest = ((lAmount * (4.2/100)) * rPeriod);
			mRepayment = (lAmount + tInterest) / (rPeriod * 12);

		printf("\n----------------------------------------------");
		printf("\nLoan Amount\t     : RM    %.2f", lAmount);
		printf("\nTotal Interest\t     : RM    %.2f", tInterest);
		printf("\nTotal Loan Repayment : RM    %.2f", lAmount + tInterest);
		printf("\nMonthly Repayment    : RM    %.2f", mRepayment);
		
		printf("\n==============================================\n");
		
		printf("TABLE OF REPAYMENT\n");
		printf("Month\tPayment\t\tAccumulated Payment\t\tBalance\n");
			for(Month=1; Month<= (rPeriod*12); Month++)
			printf("%d\t%.2f\t\t\t%.2f\t\t\t%.2f\n", Month, mRepayment, aPayment= aPayment+ mRepayment, Balance = ((lAmount + tInterest) - aPayment));
			
}
