#include <iostream>
#include <vector>

class Client {
    public:
        Client (std::string id, std::string firstName, std::string lastName, std::vector<int> shoppingCart);
        std::string getId();
        std::string getFirstName();
        std::string getLastName();
        std::vector<int> getShoppingCart();
        bool addItems();
        bool modifyItems();
        void removeItem();
        void cleanShoppingCart();


    private:
        std::string _id; 
        std::string _firstName;
        std::string _lastName; 
        std::vector<int> _shoppingCart;
};