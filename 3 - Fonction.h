
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

            printf("\t\t entrer le nom de produit : ");
            scanf("%s", produit.nomProduit);

            printf("\t\t entrer la quantite de produit : ");
            scanf("%d", &produit.quantiteProduit);

            printf("\t\t entrer le prix de produit : ");
            scanf("%f", &produit.prixProduit);
            produit.prixTTC = produit.prixProduit + produit.prixProduit * 0.15 ;

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

      int i , j, k ;
      addProduct table[1];
      for (i = 0 ; i< incrementer-1 ; i++)
        {
            for(j=i+1 ; j<incrementer ;j++)
            {
                if(strcmp(tableGeneral[i].nomProduit, tableGeneral[j].nomProduit)> 0)
                {
                    table[i]=tableGeneral[i] ;
                    tableGeneral[i]=tableGeneral[j];
                    tableGeneral[j] = table[i];
                }
            }
        }
         printf("les produits entrant sont :\n\n ");
        for (k = 0; k < incrementer; k++){

            printf("\t le nom  est :  %s      \t|||", tableGeneral[k].nomProduit );
            printf("\t le prix est :  %.3f DH \t|||", tableGeneral[k].prixProduit);
            printf("\t le code est :  %d      \t|||", tableGeneral[k].codeProduit);
            printf("\t le prixTTC est : %.4f DH\n  ", tableGeneral[k].prixTTC    );
        }
 }


    void orderDecroissantPrix(){

        addProduct table[1];
        int i , j, k ;

          for (i = 0 ; i< incrementer-1 ; i++) //
            {
            for(j=i+1 ; j<incrementer ;j++)
                {
               if(tableGeneral[i].prixProduit < tableGeneral[j].prixProduit){

                        table[i]=tableGeneral[i] ;
                        tableGeneral[i] = tableGeneral[j];
                        tableGeneral[j] = table[i];
                    }
                }
            }


    printf("les produits entrant sont :\n\n ");
    for (k = 0; k < incrementer; k++){
        tableGeneral[k].prixTTC = tableGeneral[k].prixProduit +(tableGeneral[k].prixProduit*0.15 );
        printf("\t le prix est :  %.3f DH \t|||", tableGeneral[k].prixProduit);
        printf("\t le code est :  %d      \t|||", tableGeneral[k].codeProduit);
        printf("\t le nom  est :  %s      \t|||", tableGeneral[k].nomProduit );
        printf("\t le prixTTC est : %.4f DH\n  ", tableGeneral[k].prixTTC    );
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

//-------------------------------- Acheter produit --------------------------------------
    void acheterProduit(){

    }


//------------------------------- Rechercher les produits -------------------------------
    void rechercherPrduit(){
        int n3;

     do{
        printf("\n\t\tRechercher les produits Par :  \n\n\t\t1. Code\n\t\t2. Quantite\n");
        scanf("%d", &n3);
        }while(n3 < 0 || n3 > 3);

        switch(n3){
          case 1 :
             printf("\n\t\t recherche par code");
             recherchParCode();
            break;
          case 2 :
            printf("\n\t\t recherche par quantite ");
            recherchParQuantite();
            break;
        }
    }

    void recherchParCode(){
        int code;

        printf("donner le code  a rechrcher : ");
        scanf("%d", &code);

        for (int i = 0; i < incrementer; i++){
            if (tableGeneral[i].quantiteProduit == code){
                printf("\nLe nom de produit est    :%s\n", tableGeneral[i].nomProduit);
                printf("Le prix de produit est     :%f\n", tableGeneral[i].prixProduit);
                printf("La quantite de produit est :%d\n", tableGeneral[i].quantiteProduit);
                printf("Le prixTTC de produit est  :%f\n", tableGeneral[i].prixTTC);
            }
        }

    }

    void recherchParQuantite(){
        int q;

        printf("donner la quantite  a rechrcher : ");
        scanf("%d", &q);

        for (int i = 0; i < incrementer; i++){
            if (tableGeneral[i].quantiteProduit == q){
                printf("\nLe nom de produit est    %s\n", tableGeneral[i].nomProduit);
                printf("Le prix de produit est     %f\n", tableGeneral[i].prixProduit);
                printf("La quantite de produit est %d\n", tableGeneral[i].quantiteProduit);
                printf("Le prixTTC de produit est  %f\n", tableGeneral[i].prixTTC);
            }
        }
}

//------------------------   Etat du stack -------------------------------------------

  void etatDuStock(){
      printf("les produit");

  }

//------------------------   Alimenter le stock:  ------------------------------------
  void AlimenterStock(){

  }

//---------------------------- Supprimer les produits --------------------------------

   void suppProduit(){

    }

//---------------------------- affichage ---------------------------------------------


