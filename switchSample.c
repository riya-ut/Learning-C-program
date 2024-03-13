#include <stdio.h>
int main(){
int choice;
    printf("1 for apple\n2 for grapes\n3 for banna\n4 for orange");
    scanf("%d", &choice);
switch (choice)
{
case 1: 
    printf("you have selected apple");
    break;
case 2: 
     printf("you have selected grapes");
     break;
 case 3:  
     printf("you have selected banna");
     break;
case 4:
     printf("you have selected orange");
     break;

default:
printf("please select any option from the list");
    break;
}
return 0;
}