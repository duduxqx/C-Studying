#include <stdio.h>
#include "cs50.h"

void main()
{
    int n;
    do
    {
        n = get_int("Height: ");  
    } 
    while (n < 1 || n > 8);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
        printf("#");
        }
    printf("\n");
    }
}