void menuPharmacie(){
    int num;
    int n, codeP, qontP;
    char nomP;
    float prixP;

    do{
        printf("veuiller choisi un nombe dans ce menu :\n\n");
        printf("\t\t1. Ajouter un Produit \n");
        printf("\t\t2. Lister un Produit \n");
        printf("\t\t3. Acheter un Produit \n");
        printf("\t\t4. Rechercher un Produit \n");
        printf("\t\t5. Etat de Stock \n");
        printf("\t\t6. Alimenter de stock \n");
        printf("\t\t7. Supprimer un Produit \n");
        printf("\t\t8. Afficher un Produit \n");
        scanf("%d", &num);
    }while (num >= 8 || num <0);
        switch (num)
        {
            case 1 :

                do{
                printf("\n\t\t1. Ajouter un nouveau produit \n");
                printf("\n\t\t2. Ajouter plusieurs nouveau produit : \n");
                scanf("%d", &n);
                }while(n < 0 || n >= 2);
                    switch(n)
                    {
                    case 1 :
                        printf("entrer le code de produit : ");
                        scanf("%d", &codeP);

                        printf("entrer le nom de produit : ");
                        scanf("%s", &nomP);

                        printf("entrer la quatite de produit : ");
                        scanf("%d", &qontP);

                        printf("entrer le prix de produit : ");
                        scanf("%f", &prixP);
                        break;

                    case 2 :
                        printf("entrer le code de produit : ");
                        scanf("%d", &codeP);

                        printf("entrer le nom de produit : ");
                        scanf("%s", &nomP);

                        printf("entrer la quatite de produit : ");
                        scanf("%d", &qontP);

                        printf("entrer le code de produit : ");
                        scanf("%.2f", &prixP);

                        break;
                    }

                break;

            case 2 :
                printf("\n\t\t1. Lister tous les produits par nom");
                printf("\n\t\t2. Lister tous les produits par prix");
                break;

            case 3 :

                break;

            case 4 :
                printf("\nRechercher les produits Par :  \n\n\t\t1. Code\n\t\t2. Quantite");
                break;

            case 5 :


                 break;

            case 6 :

                break;

            case 7 :
                break;

            case 8 :
                break;
        }

}
