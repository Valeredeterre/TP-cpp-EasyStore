#include "client.h"

Client::Client(int id, std::string firstName, std::string lastName, std::vector<int> shoppingCart)
: _id(id), _firstName(firstName), _lastName(lastName)
{
}

int Client::getId(){
    return _id;
}

std::string Client::getFirstName(){
    return _firstName;
}

std::string Client::getLastName(){
    return _lastName;
}



bool Client::addItems(){
    
};

void Client::removeItem(){

};

void Client::cleanShoppingCart(){
    shoppingCart.clear();
};


bool Client::removeItem(std::string name){
    bool itemRemoved = false;

    for (auto it = shoppingCart.begin(); it < shoppingCart.end(); it++){
        if (it->getName() == name){
            it.erase();
            itemRemoved= true;
        }
    }
    return itemRemoved
};
    
bool modifyItems(std::string name, int number){
    
    bool itemsModified = false;

    for (auto it = shoppingCart.begin(); it < shoppingCart.end(); it++){
        while (it->getName() == name){
            if(number > )
        }
    }

    return itemsModified;
}

void Client::getShoppingCart()
{
    std::string shoppingCart;
    for (auto it = _shoppingCart.begin(); it < _shoppingCart.end(); it++)
    {
        std::cout << *it << "\n";
    }
}

std::string Client::getClient()
{
    return _id + " " + _firstName + " " + _lastName;
}