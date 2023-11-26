
#ifdef hi
Leap Year:
If a year is divisible by 4, 100 and 400 then it is a leap year.
If a year is divisible by 4 but not divisible by 100 then it is a leap year

Not a Leap Year:
If a year is not divisible by 4 then it is not a leap year


If a year is divisible by 4 and 100 but not divisible by 400 then it is not a leap year

#endif

#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
    	//Nested if else
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);

    return 0;
}

