#include<stdio.h>
int main(){
int num1, num2, choice, result;
printf ("Enter 2 numbers:");
scanf("%d%d", &num1,&num2);
printf("1 for addition\n2 for Subtraction\n 3 for Multiplication\n 4 for Division\nEnter your choice");
scanf("%d", &choice);
if (choice==1)
{
    result = num1 + num2;
    printf ("Result=%d", result);

}else if (choice==2)
{
    result = num1 - num2;
    printf ("Result=%d", result);
}
else if (choice==3)
{
     result = num1 * num2;
     printf ("Result=%d", result);
}
else if (choice ==4)
{
   result = num1 / num2;
   printf ("Result=%d", result);
}
else printf("you didnt choose any number according to the choice");
return 0;
}


