#include <iostream>
#include <vector>
#include "shoppingCartLine.cpp"

class Client {
    public:
        Client (int id, std::string firstName, std::string lastName);
        int getId();
        std::string getFirstName();
        std::string getLastName();
        void getShoppingCart();
        std::string getClient();
        void getShoppingCart();
        bool addItems();
        bool modifyItems();
        void removeItem();
        void cleanShoppingCart();


    private:
        int _id; 
        std::string _firstName;
        std::string _lastName; 
        std::vector<ShoppingCartLine> _shoppingCart;
};