
    addProduct TableGeneral[150];
    int incrementation=0;


    void ajouterProduit()
    {       addProduct produit;
            printf("entrer le code de produit : ");
            scanf("%d", &produit.codeProduit);

            printf("entrer le nom de produit : ");
            scanf("%s", produit.nomProduit);

            printf("entrer la qualite de produit : ");
            scanf("%d", &produit.quantiteProduit);

            printf("entrer le prix de produit : ");
            scanf("%f", &produit.prixProduit);
            TableGeneral[incrementation++] = produit;
    }
    void ajouterPlusieursProduits()
    {
        int np;
        printf("Combien de produits souhaitez-vous ?");
        scanf("%d", &np);
        while(np--) ajouterProduit();
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
        }while (num > 8 || num <0);
            switch (num)
            {
                case 1 :

                    do{
                    printf("\n\t\t1. Ajouter un nouveau produit :");
                    printf("\n\t\t2. Ajouter plusieurs nouveau produit : \n");
                    scanf("%d", &n1);
                    }while(n1 < 0 || n1 > 3);
                        switch(n1)
                        {
                        case 1 ://ajouuter un seul  produit
                            ajouterProduit();
                            break;

                        case 2 : //ajouter plusiers produits
                            ajouterPlusieursProduits();
                            break;
                        }

                    break;

                case 2 :     //  N.B :� chaque produit � un Prix TTC = Prix + 15% du prix
                     do{
                        printf("\n\t\t1. Lister tous les produits selon l�ordre alphabetique� croissant du nom :");
                        printf("\n\t\t2. Lister tous les produits selon l�ordre� d�croissant du prix :\n");
                        scanf("%d", &n2);

                         switch(n2){
                        case 1 :
                            printf("\n\t\ttest1");
                            //il faut crier un fonction Lister tous les produits
                            //selon l�ordre alphabetique� croissant du nom
                            break;
                        case 2 :
                              printf("\n\t\ttest2");
                            //il faut crier un fonction pour lister tous les produits selon l�ordre� d�croissant du prix.
                            break;
                         }
                     }while(n2 < 1 || n2 > 2);
                    break;

                case 3 :   // N.B :Pour chaque produit achet�, vous devez enregistrer le prix TTC et la date d�achat.



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
                    //permet d�afficher les produits dont la quantit� est inf�rieure � 3.
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





