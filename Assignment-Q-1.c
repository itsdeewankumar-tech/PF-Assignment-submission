#include <stdio.h>
int main (){
	int daily_Limit;
	char foreign_Country [50];

	int number_Transaction;
	// First condition
	printf("Enter the Daily amount of Transaction: ");
	scanf("%d",&daily_Limit);
	if(daily_Limit>5000){
		printf("Transaction should be flagged\n ");
	}
	else {
		printf("Transaction is safe");
	}
		// Second condition
		printf("\nEnter the transaction country Name (Like: America, Canada): ");
		scanf("%s",&foreign_Country);
	if(foreign_Country [0]=='P' || foreign_Country[0]=='I')
	{
		printf("Transaction is not suspecious\n");
	}
	else {
		printf("Transaction is suspecious\n");
	}
		// Third condition
		printf("Enter the number of transaction in short period of time: ");
		scanf("%d",&number_Transaction);
		if(number_Transaction>3){
			printf("It is sign of fraud transaction");
		}
	else{
		printf("No fraud transaction");
	}
	
	return 0;
	
}


