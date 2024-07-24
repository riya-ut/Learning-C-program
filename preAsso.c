#include <stdio.h>
int main (){
// Arithmetic Operators: +, -, *, /, and %.
	// Precedence: [*, /, %] > [+, -] 
	// Associativity: Left to Right 

	int result = 3 + 1 - 7 * 5 % 3 / 2; 
	printf("%d", result);
    return 0;
}