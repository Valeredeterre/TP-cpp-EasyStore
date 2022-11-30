#include "produit.h"

Produit::Produit(std::string& nom, std::string description, double prix, int quantity)
    : _name(nom), _description(description), price(prix), avaiableQuantity(quantity)
{
}

unsigned int Produit::getAvaiableQuantity() const
{
    return avaiableQuantity;
}

void Produit::setAvaiableQuantity(unsigned int quantity)
{
    avaiableQuantity = quantity;
}

std::string Produit::getName() const
{
    return _name;
}

std::string Produit::getDescription() const
{
    return _description;
}

float Produit::getPrice() const
{
    return price;
}

