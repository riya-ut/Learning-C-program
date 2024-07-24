#include<stdio.h>
int main ()
{
//if else statement
float retailPrice;
puts ("Enter the retail price:");
scanf ("%f", &retailPrice);

float paybleAmount;

if (retailPrice >=500){
    puts("Eligible for a discount");
    paybleAmount = retailPrice*0.9;
}
else {
    puts ("Not eligible for a discount");
    paybleAmount = retailPrice;
}

printf ("Discount availed: RS %.1f\n", retailPrice - paybleAmount);
printf ("Net payble amount: RS %.1f\n",paybleAmount);

return 0;
}
