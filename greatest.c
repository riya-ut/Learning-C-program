#include<stdio.h>
int main (){
    int num1, num2;
    printf("enter 2 number:");
    scanf("%d%d", &num1,&num2);
    if (num1>num2)
    {
        printf("the greatest number is%d", num1);
    }
    else {printf("the greatest number is%d", num2);}
    
}