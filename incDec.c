#include<stdio.h>
int main ()
{// Increment and Decrement Operator
// Associativity: Left to Right

// Postfix: First assign the value and then increment/decrement
// Prefix: First increment/decrement and then use the value

int age = 10;


//newAge = 10
//age = age + 1        // age = 11



printf ("%d\n", age++);  // age = 10
// age = 10
printf ("%d\n", age);    //age = 11
// age = 11
printf ("%d\n", ++age);    //age = 12
// age = 12
printf ("%d\n", age++ + ++age);    //age = 26
// age = 14
printf ("%d\n", age); // age = 14
return 0;
}