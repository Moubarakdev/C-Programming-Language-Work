#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    do{
            printf("Entrez un nombre en 1 et 10 : \n");
            scanf("%f",&N);
    }
    while (N<1 || N>10);

}
