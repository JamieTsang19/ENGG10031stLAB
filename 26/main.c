#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);      //%d Formats text to data then &k stores this data
                        //Complete y line below
    y = ((x+2)/(x-1));
    printf("y: %f\n", y);
    return 0;
}
