#include "client.h"

Client::Client(int id, std::string firstName, std::string lastName)
: _id(id), _firstName(firstName), _lastName(lastName)
{
}

int Client::getId()
{
    return _id;
}

std::string Client::getFirstName()
{
    return _firstName;
}

std::string Client::getLastName()
{
    return _lastName;
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