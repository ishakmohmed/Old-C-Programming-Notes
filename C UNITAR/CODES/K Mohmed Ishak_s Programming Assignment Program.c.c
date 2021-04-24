#include <stdio.h>

void FUNCTION_FINAL_TOTAL();
int BEVERAGE, QUANTITY;
char EXTRA_MILK, WANT_MORE_ORDER;
float TOTAL, FINAL_TOTAL;

main()
{

	
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("W E L C O M E   T O   A B C   C H A T   T I M E   B O O T H\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	
	printf("\n\tWe offer 3 types of beverages which are:\n\n");
	printf("\t\t-----------------------\n");
	printf("\t\t1. Espresso (RM 2.10)\n");
	printf("\t\t2. Cappuccino (RM 2.20)\n");
	printf("\t\t3. Latte (RM 2.30)\n");
	printf("\t\t-----------------------\n");
	
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	
	do{
		printf("\n\n\t<<< STEP 1 >>>\n\n");
		printf("\nWhich beverage do you want? Key in '1' for Espresso, '2' for Cappucino, or '3' for Latte\n"); 
		printf("==> ");
		scanf("%d", &BEVERAGE);
		
		printf("\n\n\t<<< STEP 2 >>>\n\n");	 
		 
	if(BEVERAGE == 1){
		
		printf("\nDo you want to add extra milk to your Espresso for an extra RM 0.50 charge?");
		printf("\nPlease key in 'Y' for yes or 'N' for no\n");
		printf("==> ");
		scanf("%s", &EXTRA_MILK);
		
		if(EXTRA_MILK == 'Y'){
			
			printf("\nYour choice is Espresso with extra milk");
			TOTAL = 2.60;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
			}
			
		else{
			
			printf("\nYour choice is Espresso only");
			TOTAL = 2.10;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
			}	
		}
		
	else if(BEVERAGE == 2){
		
		printf("Do you want to add extra milk to your Cappucino for an extra RM 0.50 charge?");
		printf("\nPlease key in 'Y' for yes or 'N' for no\n");
		printf("==> ");
		scanf("%s", &EXTRA_MILK);
		
		if(EXTRA_MILK == 'Y'){
			
			printf("\nYour choice is Cappucino with extra milk");
			TOTAL = 2.70;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
			}
			
		else{
			printf("\nYour choice is Cappucino only");
			TOTAL = 2.20;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
			}	
		}
		
	else if(BEVERAGE == 3){
		
		printf("Do you want to add extra milk to your Latte for an extra RM 0.50 charge?");
		printf("\nPlease key in 'Y' for yes or 'N' for no\n");
		printf("==> ");
		scanf("%s", &EXTRA_MILK);
		
		if(EXTRA_MILK == 'Y'){
			
			printf("\nYour choice is Latte with extra milk");
			TOTAL = 2.80;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
		}
		
		else{
			
			printf("\nYour choice is Latte only");
			TOTAL = 2.30;
			printf("\nThe price for your beverage would be: RM %.2f", TOTAL);
			}
		}
	
	else{
			
		printf("\nUh oh! You did not choose from the provided beverage options. <<< STEP 2 >>> could not be carried out successfully.");
		printf("\nPlease place your order again by closing this window and reopening it");
		return 0;
		}
	
	printf("\n\n\n\t<<< STEP 3 >>>\n\n");
	printf("\nHow many of this beverage do you want?\n");
	printf("==> ");
	scanf("%d", &QUANTITY);
	
	FUNCTION_FINAL_TOTAL();  
	printf("\nThe grand total of your order would be: RM %.2f", FINAL_TOTAL);
	
	printf("\n\n\n\t<<< STEP 4 >>>\n\n");
	printf("\nDo you want to order more?");
	printf(" Don't worry, you can place more orders by keying in 'Y'. If you don't want to order more, please key in 'N'\n");
	printf("==> ");
	scanf("%s", &WANT_MORE_ORDER);
	
			
	}while (WANT_MORE_ORDER == 'Y');  
	
	printf("\n####### Thank you for purchasing from ABC Chat Time booth. Please come again to our booth next time. You have successfully made a purchase for RM %.2f #######\n", FINAL_TOTAL);
	
return 0;
}

void FUNCTION_FINAL_TOTAL()
{
	FINAL_TOTAL = (TOTAL * QUANTITY) + FINAL_TOTAL;
}
