
    addProduct tableGeneral[150];
    int incrementer=0;

    void ajouterProduit(){

            addProduct produit;

            printf("\n");
            printf("\t\t entrer le code de produit : ");
            scanf("%d", &produit.codeProduit);

            printf("\t\ tentrer le nom de produit : ");
            scanf("%s", produit.nomProduit);

            printf("\t\t entrer la quantite de produit : ");
            scanf("%d", &produit.quantiteProduit);

            printf("\t\t entrer le prix de produit : ");
            scanf("%f", &produit.prixProduit);

            tableGeneral[incrementer++] = produit;
    }

    void ajouterPlusieursProduits(){
        int np;
            printf("Combien de produits souhaitez-vous ?");
            scanf("%d", &np);
        while(np--) ajouterProduit();
    }

    void ordreAlphabetiqueCroissant(){

     //my instructions
    }


    void orderDecroissantPrix(){

        addProduct table;
        int i, j, k;

        for (i = 0; i < incrementer; i++)
            {
                for (j = 0; j <= incrementer - i - 1; j++)
                {
                    if (tableGeneral[j].prixProduit < tableGeneral[j + 1].prixProduit)

                    {
                        table = tableGeneral[j];

                        tableGeneral[j] = tableGeneral[j + 1];

                        tableGeneral[j + 1] = table;
                    }
                }
            }
        printf("les produits entrant sont :");
        for (k = 0; k < incrementer; k++){

            printf("le code est : %d ||| ", tableGeneral[k].codeProduit);
            printf("le nom est : %s ||| ", tableGeneral[k].nomProduit);
            printf("le prix est :  %.3f |||", tableGeneral[k].nomProduit);
            printf("le prixTTC est : %.4f ||| ", tableGeneral[k].prixTTC);
        }
     }


    void retourAuMenu(){
        int m;
        do {
        printf("\n \t\tPour Retour au menu principal appuyez sur 1.\n   \t\tPour Quittez le programme appuyez sur 2.\n");
        scanf("%d", &m);
        }while(m != 1 || m != 2);
        switch (m)
        {
        case 1:
            main();
            break;

        default:
            printf("Vous avez quitter !!");
        }
   }


    void Menu(){
        int num;
        int n1, n2, n3;
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

                    do{
                    printf("\n\t\t1. Ajouter un nouveau produit :");
                    printf("\n\t\t2. Ajouter plusieurs nouveau produit : \n");
                    scanf("%d", &n1);
                    }while(n1 < 0 || n1 > 3);
                        switch(n1)
                        {
                        case 1 ://ajouter un seul  produit
                            ajouterProduit();
                            retourAuMenu();
                            break;

                        case 2 : //ajouter plusiers produits
                            ajouterPlusieursProduits();
                            retourAuMenu();
                           break;
                        }
                    retourAuMenu();
                    break;

                case 2 :     //  N.B :  chaque produit à un Prix TTC = Prix + 15% du prix
                     do{
                        printf("\n\t\t1. Lister tous les produits selon l’ordre alphabetique  croissant du nom :");
                        printf("\n\t\t2. Lister tous les produits selon l’ordre  décroissant du prix :\n");
                        scanf("%d", &n2);

                         switch(n2){
                        case 1 :
                             ordreAlphabetiqueCroissant();
                             retourAuMenu();
                            break;
                        case 2 :
                             orderDecroissantPrix();
                             retourAuMenu();
                            break;
                         }
                     }while(n2 < 1 || n2 > 2);

                    retourAuMenu();
                   break;

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






