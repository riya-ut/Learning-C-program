#include <stdio.h>

void sum(int, int);     //Function declaration or function prototype


int main() {

	/* Objective: WAP to...... */
	puts("My program starts... ");

	sum(2,3);      //function call

	puts("...some dummy code...");
	puts("More code...");

	/* Find the sum of 10 and 90. */
	sum(10,90);

	puts("My program continues with a few more functionalities.... ");

	/* Find the sum of 11 and 21. */
	
	sum(11, 21);
    sum (7,9);
	return 0;
}

void sum(int num1, int num2){             //function definition
    int s = num1 + num2;                    //function body
    printf("sum is: %d\n", s);              //function body

}                                        //function definition