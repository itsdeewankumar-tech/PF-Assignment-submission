#include <stdio.h>
int main(){
	// Eligible for a driving license or not
	int age;
	char eyesight_exam;
	char written_exam;
	char driving_test;
	char medical_certificate;
	printf("Some Questions are asked from you for driving License\nEnter the Age:   ");
	scanf(" %d",&age);
	if(age>=18){
		printf("\nEligible and Ready for Next Question   ");
      printf("\nHave you Passed the Eyesight Exam (P,F): ");
      scanf(" %c", &eyesight_exam);
	if(eyesight_exam=='P'){
		printf("\nMove to next Question");
		printf("\nWhat is your written test result(P,F):  ");
		scanf(" %c", &written_exam);
       if(written_exam=='P'){
		printf("\nMove to next Question");
		printf("\nWhat is you driving test result (P,F):  ");
		scanf(" %c",&driving_test);
        if(driving_test=='P'){
	  
		if( age<60){
		printf("\nYou are eligible");
	}
	else {printf("go for next Question");
	printf("\nDo you have medical certificate(Y,N):  ");
	scanf(" %c",&medical_certificate);
	if(medical_certificate=='Y'|| medical_certificate=='y'){
	printf ("You are eligible");
	}
	else{
		printf("You are not eligible");
	}}}}
    else
	{
	printf("Ineligible for Driving license");}}

	else 
	{
     printf("You need eye glasses");
	}}
	else {printf("You are not eligible");
	}
	return 0;
    }

