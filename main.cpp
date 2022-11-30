#include "magasin.h"

int main()
{
    Magasin m1;
    m1.addProduct(Produit("ps4", "console de jeux sony", 400, 10));
    m1.addProduct(Produit("xbox", "console de jeux microsoft", 400, 10));
    m1.addClient(Client(1, "john", "doe"));

    m1.displayStock();
    m1.updateStock("ps4", 100000);
    m1.displayStock();
    
    m1.displayClient("john", "doe");
    m1.displayClient(1);

    return EXIT_SUCCESS;
}