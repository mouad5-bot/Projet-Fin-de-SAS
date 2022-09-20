
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
             }
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


//--------------------------- Acheter produit ----------------------------------------

void acheterProduit() {

}













