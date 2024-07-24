	#include <stdio.h>
    
    int main()
    {
    // Switch Statements
	// 0: 	Very poor
	// 1: 	Poor
	// 2: 	Average
	// 3: 	Good
	// 4,5: Excellent

	int rating;
	puts("How likely you would like to rate our pizza on a scale of five?");
	puts("Reply with a number from 0 to 5, where 0 is least likely and 5 is most likely.");

	puts("Enter your rating: ");
	scanf("%d", &rating);

    switch (rating)
    {
    case 0:
        puts ("you had very poor experiance. we will call you shortl to know what went wrong.");
         break;
    case 1: 
        puts("you had poor experience. we will call you shortly to know what went wromg");
         break;
    case 2:
         puts ("Thank you for your feedback we will call you shortly to know what went wromg");
         break;
    case 3: 
        puts("Thank you for your feedback. We're constantly working to improve pizza quality");
         break;
    case 4: 
    
    case 5: 
        puts ("yay! Thank you for your feedback. We would love to serve you again."); 
        break;
        default:
        puts ("Invalid Keyword");
    }



    }