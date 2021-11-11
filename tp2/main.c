#include <stdio.h>
#include <stdlib.h>

int main()
{
    double total, remise, prixfinal;
    int nbresacderiz;
    long prixunitaire;

    printf("Saisir le prix unitaire du riz: ");
    scanf("%d",&prixunitaire);
    printf("Saisir le nombre de sacs de riz: ");
    scanf("%d",&nbresacderiz);
    total = nbresacderiz*prixunitaire;
    printf("\nLe montant total est de: %0.f Fr \n\n", total);
    if (total>=250000){
        remise=total*10/100;
        printf("Vous beneficiez de 10 pour cent de reduction! La remise est de: %0.f Fr \n\n",remise);
        prixfinal=total-remise;
        printf("Le prix a payer est de: %0.f Fr \n\n",prixfinal);
    }else{
        remise=total*5/100;
        printf("Vous beneficiez de 5 pour cent de reduction! La remise est de: %0.f Fr \n\n",remise);
        prixfinal=total-remise;
        printf("Le prix a payer est de: %0.f Fr \n\n",prixfinal);
    }
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/
