

    void Menu(){
        int num;
        int  n3;
        do{
            printf("veuiller choisi un nombre dans ce menu :\n\n");
            printf("\t\t 1. Ajouter un Produit \n");
            printf("\t\t 2. Lister un Produit \n");
            printf("\t\t 3. Acheter un Produit \n");
            printf("\t\t 4. Rechercher un Produit \n");
            printf("\t\t 5. Etat de Stock \n");
            printf("\t\t 6. Alimenter de stock \n");
            printf("\t\t 7. Supprimer un Produit \n");
            printf("\t\t 8. Statistique de vente \n");
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
                     retourAuMenu();
                     break;

                case 3 :   // N.B :Pour chaque produit acheté, vous devez enregistrer le prix TTC et la date d’achat.
                    acheterProduit();
                    retourAuMenu();
                    break;

                case 4 :
                    rechercherPrduit();
                     retourAuMenu();
                    break;

                case 5 :
                    //afficher les produits dont la quantité est inférieure à 3.
                    etatDuStock();

                    retourAuMenu();
                    break;

                case 6 ://misea jour les quantites apres avoir recharger le stock
                    printf("\n\t\tfaire la mise a jour de stock");
                    AlimenterStock();

                    retourAuMenu();
                    break;

                case 7 : //supprimer les produits
                    printf("\n\t\t Supprimer les produits par: Code");
                    suppProduit();
                    retourAuMenu();
                    break;

                case 8 : //affichage

                    //totalPrixProduit();
                    //moyennePrixProduit();
                    //MaxPrixProduit();
                    //Min PrixProduit();

                    retourAuMenu();
                    break;
            }
       }



    void retourAuMenu(){

        int m;
        do {
            printf("\n \t\tPour Retour au menu principal appuyez sur 1\n   \t\tPour Quittez le programme appuyez sur 2\n");
            scanf("%d", &m);
        }while(m <=1 && m > 3);

            switch (m){

                case 1:
                    Menu();
                    break;

                case 2:
                    printf("Vous asvez quitter !!");
                    break;
                default :
                    break;
            }
     }


