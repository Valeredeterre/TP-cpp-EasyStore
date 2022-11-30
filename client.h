#pragma once
#include <iostream>
#include "produit.h"
#include <vector>

class Client {
    public:
        Client (int id, std::string firstName, std::string lastName);
        int getId();
        std::string getFirstName();
        std::string getLastName();
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
        std::vector<Produit> _shoppingCart;
};