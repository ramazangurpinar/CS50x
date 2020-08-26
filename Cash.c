#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int cents_owed;

    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = cents_owed / 25;
    int quarters_remained = cents_owed % 25 ; 

    int dimes = quarters_remained / 10;
    int dimes_remained = ((cents_owed % 25) % 10);

    int nickels = dimes_remained / 5;
    int nickels_remained = ((cents_owed % 25) % 10);
    
    int pennies = nickels_remained % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
