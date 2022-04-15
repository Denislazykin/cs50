/**
 * Count no. of bottles used in a shower per minute
**/

#include <stdio.h>

int GetLength(int a);

int main(void)
{
    int min;
    
    // get minutes as a positive integer
    printf("minutes: ");
    min = GetInt();
    
    // send value of minutes to GetLength function
    int b = GetLength(min);
    
    printf("bottles: %d\n",b);
    
}

int GetLength(int a)
{
    return a*12;
}