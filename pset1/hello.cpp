#include <iostream>
#include <stdio.h>

int hello(void)
{
        // ask user for input
        printf("Give me on integer: ");
        int x = get_int("");
        printf("Give me another integer: ");
        int y = get_int("");

        // do the math
        printf("The sum of %i and %i is %i!\n", x, y, x + y);
}