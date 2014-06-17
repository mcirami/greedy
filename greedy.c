#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float c;
    int count;

// Get user input   
    do
    {
        printf("How much change do I owe: ");
        c = GetFloat();
    }
    while (c < 0);

// Round user input and change to cents

//    float roundf(float c);
    float ceilf(float c);
    int x = c * 100;

// Check how many quarters needed    
    int q = x / 25;
        if (q == 0)
           count = 0;
        else
        {
            count = q;
            x = x - (q * 25);
        }

// Check how many dimes needed 
    int d = x / 10;
        if (d == 0)
           count = count + 0;
        else
        {
            count = count + d;
            x = x - (d * 10);
        }

// Check how many nickels needed        
    int n = x / 5;
        if (n == 0)
            count = count + 0;
        else
        {
            count = count + n;
            x = x - (n * 5);
        }

// Check how many pennies needed      
    int p = x / 1;
        if (p == 0)
            count = count + 0;
        else
            count = count + p;
    
    printf("%i\n", count);
     

}
