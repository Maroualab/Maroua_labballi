#include <stdio.h>

int n;
int montant_vente[200];
int total_des_ventes;
int choix;
int sum=0;
int i;



int main(){
 printf("Combien de produits ont été vendus aujourd'hui ? ");
 scanf("%d",&n);
 for(int i=0 ; i<n ; i++){
    printf("Entrez le montant de la vente du produit : ");
    scanf("%d",&montant_vente[i]);
 }

 printf("\nQue souhaitez vous faire ?\n");
 printf("1. Calculer le total des ventes\n");
 printf("2. Trouver la vente la plus élevée et la plus basse\n");
 printf("3. Afficher les ventes supérieurs à une moyenne\n");
 printf("4. Compter le nombre de ventes supérieures à 100\n");
 printf("5. Compter le nombre de ventes inférieurs à 100\n");
 printf("6. Quitter\n");
 printf("Entrez votre choix : ");
 scanf("%d",&choix);

 do{
switch(choix){
    case 1:
//        int sum=0;
        for(int i=0;i<n;i++)
            {
            sum+= montant_vente[i];
            }
    printf("le total des ventes est : %d euros",sum);
        break;
    case 2 :

        for (int i=1; i< n ;i++){
            int Max=montant_vente[0];
            if (montant_vente[i] > Max)
            Max = montant_vente[i];
            printf("la vente la plus haute est : %d ",Max);}

         for (int i=1; i> n ;i++){
        int  Min=montant_vente[0];
            if (montant_vente[i] <Min)
            Min = montant_vente[i];
        printf("la vente la plus basse est : %d ",Min);}

        break;
    case 6:
        printf("au revoir ! ");
    return 0;
    default:
        printf("erreur");
    return 0;
return 0;
}
}
while ( choix =!6);
}
