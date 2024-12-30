#include <stdio.h> 
#include <stdlib.h> 

#define NR_MAX_TRIES	3

#define TRUE		1 
#define FALSE		0 

#define SUCCESS		1 
#define FAILURE		0 

#define MILLIMETER	1 
#define CENTIMETER	2
#define METER		3 
#define KILOMETER	4 
#define INCH		5 
#define FOOT		6 
#define YARD		7 
#define MILE		8 
#define EXIT_APP	9 


#define MIN_CHOICE 1 
#define MAX_CHOICE 9 

int main(void)
{
    int from_choice; 
    int to_choice; 
    double input_number = 0.0; 
    int number_of_tries; 
    int choice; 
    int flag = FALSE; 

    while (TRUE) 
    {
        puts("-------------------------------------------------------------"); 
        printf("1:Millimeter(mm)\n2:Centimeter(cm)\n3:Meter(m)\n4:Kilometer(km)\n");
        printf("5:Inch(in)\n6:Foot(ft)\n7:Yard(yd)\n8:Mile(mi)\n9:Exit\n");

        for(number_of_tries = 0; number_of_tries < NR_MAX_TRIES; ++number_of_tries)
        {
            printf("CONVERT FROM:"); 
            scanf_s("%d", &choice); 
            if(choice >= MIN_CHOICE && choice <= MAX_CHOICE)
            {
                flag = TRUE; 
                break; 
            }
            puts("Please enter a valid choice"); 
        }

        if(flag == FALSE)
        {
            puts("Thank you for using application"); 
            _getch(); 
            exit(EXIT_FAILURE); 
        }

        from_choice = choice; 

        if (from_choice == EXIT_APP)
        {
            puts("Thank you for using application"); 
            _getch(); 
            exit(EXIT_SUCCESS); 
        }

        printf("Enter magnitude:"); 
        scanf_s("%lf", &input_number); 

        for(number_of_tries = 0; number_of_tries < NR_MAX_TRIES; ++number_of_tries)
        {
            printf("CONVERT TO:"); 
            scanf_s("%d", &choice); 
            if(choice >= MIN_CHOICE && choice <= MAX_CHOICE)
            {
                flag = TRUE; 
                break; 
            }
            puts("Please enter a valid choice"); 
        }

        if(flag == FALSE)
        {
            puts("Thank you for using application"); 
            _getch(); 
            exit(EXIT_FAILURE); 
        }

        to_choice = choice; 
        printf("from_choice=%d, to_choice=%d\n", from_choice, to_choice); 
        if (to_choice == EXIT_APP)
        {
            puts("Thank you for using application"); 
            _getch(); 
            exit(EXIT_SUCCESS); 
        }
    }
    
    return (0); 

}

/*
    PROCEDURAL PROGRAMMING PARADIGM 
        1) Divide complex procedure (algorithm)
            into smaller, reusable procedures (algorithms) 
        2) Write a complex procedure by combining calls 
            to smaller, resuable procedures 
        
        This allows you to write complex programs in disciplined 
        manner 
*/