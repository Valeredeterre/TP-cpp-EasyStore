#include <string>
#include "produit.h"

class ShoppingCartLine{
    public:
        ShoppingCartLine(Produit produit, int amount)
        : _produit(produit), _amount(amount)
        {  
        }
        
    private:
        Produit _produit;
        int _amount;
};