
    addProduct tableGeneral[150];
    int incrementer=0;
//-----------------------------ajouter un produit---------------------------------

    void choisiQuelAjoue(){  // c-a-d ajouter un seul produit ou bien plusieurs

        int n1;
        do{
            printf("\n\t\t1. Ajouter un nouveau produit :");
            printf("\n\t\t2. Ajouter plusieurs nouveau produit : \n");
            scanf("%d", &n1);
        }while(n1 < 0 || n1 > 3);
        switch(n1){

            case 1 ://ajouter un seul  produit
                ajouterProduit();

               break;

            case 2 : //ajouter plusiers produits
                ajouterPlusieursProduits();

               break;
            }
    }



    void ajouterProduit(){

            addProduct produit;

            printf("\n");
            printf("\t\t entrer le code de produit : ");
            scanf("%d", &produit.codeProduit);

            printf("\t\t tentrer le nom de produit : ");
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
//------------------------------ Lister produits --------------------------------

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

        printf("les produits entrant sont :\n ");
        for (k = 0; k < incrementer; k++){

            printf("\t le prix est :  %.3f DH \t|||", tableGeneral[k].prixProduit);
            printf("\t le code est :  %d      \t|||", tableGeneral[k].codeProduit);
            printf("\t le nom  est :  %s      \t|||", tableGeneral[k].nomProduit );
            printf("\t le prixTTC est : %.4f DH\n  ", tableGeneral[k].prixTTC    );

            tableGeneral[k].prixTTC = ( tableGeneral[k].prixProduit * 15 )/ 100;  //??elle ne pas foctionne

        }
     }


    void ordreOfListe(){
        int n2;
        do{
            printf("\n\t\t1. Lister tous les produits selon ordre alphabetique  croissant du nom :");
            printf("\n\t\t2. Lister tous les produits selon ordre  decroissant du prix :\n");
            scanf("%d", &n2);
        }while(n2 < 1 || n2 > 2);

        switch(n2){
            case 1 :
                ordreAlphabetiqueCroissant();


                break;
            case 2 :
                 orderDecroissantPrix();

                break;
            default :

                break;
             }
    }

//--------------------------- Acheter produit --------------------------------------

    void acheterProduit(int quantiteProduit, int codeProduit) {
        int a = 0;

         for (int i=0; i<quantiteProduit; i++){
            if(tableGeneral[i].codeProduit = codeProduit)
                a++;
            if( a >= quantiteProduit )
                printf("voila le nomber des prduits de ce code: %d ", a);
         }
    }

//---------------------------- Rechercher les produits -------------------------------
    void rechercherPrduit(){
        int n3;

     do{
        printf("\n\t\tRechercher les produits Par :  \n\n\t\t1. Code\n\t\t2. Quantite\n");
        scanf("%d", &n3);
        }while(n3 < 0 || n3 > 3);

        switch(n3){
          case 1 :
             printf("\n\t\t recherche par code");
            //il faut maintenent faire un fonction qui fait la recherche par code
            recherchParCode();
            break;
          case 2 :
            printf("\n\t\t recherche par quantite ");
            recherchParQuantite();
            //il faut maintenent faire un fonction qui fait la recherche par quantite
            break;
        }
    }

    void recherchParCode(){

    }

    void recherchParQuantite(int quantite){
        int z, q;
        for (int i = 0; i < incrementer; i++)
        {
            if (tableGeneral[i].quantiteProduit == q)
            {
                printf("Le nom de produit est      %s", tableGeneral[i].nomProduit);
                printf("Le prix de produit est     %d", tableGeneral[i].prixProduit);
                printf("La quantite de produit est %f", tableGeneral[i].quantiteProduit);
                printf("Le prixTTC de produit est  %f", tableGeneral[i].prixTTC);
            }else

                z++;
        }
        if (z == incrementer)
            printf("cette quantite ne ce trouve pas dans le stock ? ");
}








