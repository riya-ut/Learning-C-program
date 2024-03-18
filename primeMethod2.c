#include <stdio.h>
int main(){
    int n, i, count=0;
    printf("enter the number:");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not a prime number\n");
        return 0;
    }
    for ( i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
         count++;
        } 
    }
    if (count ==0)
    {
      printf("prime number");
    }
    else
    {printf ("Not a prime number");}
    return 0;
}
    