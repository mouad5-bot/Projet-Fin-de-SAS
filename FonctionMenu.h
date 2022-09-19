
    void Menu(){
        int num;
        int  n3;
        do{
            printf("veuiller choisi un nombre dans ce menu :\n\n");
            printf("\t\t1. Ajouter un Produit \n");
            printf("\t\t2. Lister un Produit \n");
            printf("\t\t3. Acheter un Produit \n");
            printf("\t\t4. Rechercher un Produit \n");
            printf("\t\t5. Etat de Stock \n");
            printf("\t\t6. Alimenter de stock \n");
            printf("\t\t7. Supprimer un Produit \n");
            printf("\t\t8. Statistique de vente \n");
            scanf("%d", &num);
        }while (num > 8 || num < 0);
            switch (num)
            {
                case 1 : //ajouter un  ou plusieurs  produit

                    choisiQuelAjoue();
                    retourAuMenu();
                    break;

                case 2 :     //  N.B :  chaque produit à un Prix TTC = Prix + 15% du prix
                     ordreOfListe();

                case 3 :   // N.B :Pour chaque produit acheté, vous devez enregistrer le prix TTC et la date d’achat.

                    break;

                case 4 :
                    do{
                    printf("\n\t\tRechercher les produits Par :  \n\n\t\t1. Code\n\t\t2. Quantite\n");
                    scanf("%d", &n3);
                    }while(n3 < 0 || n3 > 3);

                     switch(n3)
                     {
                         case 1 :
                             printf("\n\t\trecherche par code");
                            //il faut maintenent faire un fonction qui fait la recherche par code
                            break;
                         case 2 :
                            printf("\n\t\trecherche par quantite ");
                            //il faut maintenent faire un fonction qui fait la recherche par quantite
                            break;
                     }
                    break;

                case 5 :
                    //permet d’afficher les produits dont la quantité est inférieure à 3.
                    printf("\n\t\ttest");

                    break;

                case 6 ://misea jour les quantites apres avoir recharger le stock
                    printf("\n\t\tfaire la mise a jour de stock");

                    break;

                case 7 : //supprimer les produits
                    printf("\n\t\t Supprimer les produits par: Code");

                    break;

                case 8 : //affichage


                    break;
            }
       }



    void retourAuMenu(){

        int m;
        do {
            printf("\n \t\tPour Retour au menu principal appuyez sur 1\n   \t\tPour Quittez le programme appuyez sur 2\n");
            scanf("%d", &m);
        }while(m > 0  || m < 3);

            switch (m){

                case 1:
                    Menu();
                    break;

                case 2:
                    printf("Vous avez quitter !!");
                    break;
            }
     }


