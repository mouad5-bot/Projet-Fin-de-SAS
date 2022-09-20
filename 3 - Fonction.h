
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
            printf("\t le code est : %d    \t|||", tableGeneral[k].codeProduit);
            printf("\t le nom est : %s     \t|||", tableGeneral[k].nomProduit);
            printf("\t le prixTTC est : %.4f DH\n" , tableGeneral[k].prixTTC);
            tableGeneral[k].prixTTC = ( tableGeneral[k].prixProduit * 15 )/ 100;
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
void rechercherPrduit()
{
    int b, code, quan;
    printf("Pour rechercher des  produits par code, appuyer sur 1 \n  Pour rechercher des produits par quantite, appuyez sur 2 \n");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
        printf("Entrez le code produit :\n");
        scanf("  %d", &code);


        break;
    case 2:
        printf("Entrez la quantite de produit :\n");
        scanf("  %d", &quan);


    default:
        break;
    }
}














