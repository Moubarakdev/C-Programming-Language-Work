#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, i;

    do{
    printf("Entrer le nombre! \n");
    scanf("%d",&d);}
    while(d<0);
    i=d*d;
    printf("Le carre est %d! \n",i);
}

