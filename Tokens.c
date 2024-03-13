#include <stdio.h>

int main() {
    char name[] = "pizza"; // No need to specify the size if you are initializing with a string
    printf("%s\n", name);

    char size = 'M';
    printf("%c\n", size); // Use %c for a single character

    int PersonItServes = 2; 
    printf("%d\n", PersonItServes);

    float RetailPrice = 384.68; 
    printf("%.2f\n", RetailPrice);

    printf("Yay! You have ordered a %s of size %c that serves %d. \nPlease pay RS. %.2f to the delivery person.\n", name, size, PersonItServes, RetailPrice);

    return 0;
}
