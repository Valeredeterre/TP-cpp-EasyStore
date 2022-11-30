#include "produit.h"

Produit::Produit(std::string name, std::string description, float price, int quantity)
    : _name(name), _description(description), _price(price), _avaiableQuantity(quantity)
{
}

unsigned int Produit::getAvaiableQuantity() const
{
    return _avaiableQuantity;
}

void Produit::setAvaiableQuantity(unsigned int quantity)
{
    _avaiableQuantity = quantity;
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
    return _price;
}

std::ostream& operator<<(std::ostream& os, const Produit& produit)
{
    os << produit.getName() << " " << produit.getDescription() << " " << produit.getPrice() << " " << produit.getAvaiableQuantity() << "\n";
    return os;
}

std::string Produit::getProduct() const
{
	return _name + " " + _description + " " + std::to_string(_price) + " " + std::to_string(_avaiableQuantity);
}

