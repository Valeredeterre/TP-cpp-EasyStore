#include "Client.h"

Client::Client(std::string id, std::string firstName, std::string lastName, std::vector<int> shoppingCart): _id(id), _firstName(firstName), _lastName(lastName), _vector<int>(vector<int>){
}

std::string Client::getId(){
    return _id;
}

std::string Client::getFirstName(){
    return _firstName;
}

std::string Client::getLastName(){
    return _lastName;
}

std::vector<int> Client::getShoppingCart(){
    return _shoppingCart;
}

