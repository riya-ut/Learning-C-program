#include <stdio.h>

long findFactorial(int);


int main() {

	/* WAP to find the factorial of a number.
	   Example: Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120. */

	// Note: Identify the terminating condition to terminate the recursion.

	int num = 5;
	long factorial = 1;

	while (num > 0) {
		factorial = factorial * num;
		num--;
	}

	printf("Factorial is: %ld\n", factorial);

    //using recursion to find factorial of 5
    long result = findFactorial(5);
    printf("factorial is: %ld\n", result);

	return 0;
}

long findFactorial (int num){

    if (num > 0)
    {
        return num * findFactorial(num-1);
    } else {
        return 1;
    }
    
}

//find