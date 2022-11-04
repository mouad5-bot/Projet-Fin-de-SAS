typedef struct{

        int codeProduit;
        int quantiteProduit;
        float prixProduit, prixTTC;
        char nomProduit[30];

}addProduct;


typedef struct{
        int codeProduit;
        int quantiteProduit;
        float prixTTC;
        struct tm *date; // structur predefinie sur time.h
}acheterP;

