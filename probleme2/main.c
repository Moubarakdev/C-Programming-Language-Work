#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=4;
    float a,b,c,d;
    a=i/j;
    b=1.0*(i/j);
    c=(1.0*i)/j;
    d=1.0*((float)(i/j));
    printf("%f %f %f %f",a,b,c,d);
}
