#include "magasin.h"

Magasin::Magasin()
{
}

void Magasin::addProduct(Produit produit)
{
    _produits.push_back(produit);
}

void Magasin::addClient(Client client)
{
    _clients.push_back(client);
}

void Magasin::displayStock()
{
    for (auto it = _produits.begin(); it < _produits.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

void Magasin::displayClients()
{
    for (auto it = _clients.begin(); it < _clients.end(); it++)
    {
        std::cout << it->getClient() << std::endl;
    }
}

void Magasin::displayClient(int id)
{
    for (auto it = _clients.begin(); it < _clients.end(); it++)
    {
        if (it->getId() == id)
        {
            std::cout << it->getClient() << std::endl;
        }
    }
}

void Magasin::displayClient(std::string firstName, std::string lastName)
{
    for (auto it = _clients.begin(); it < _clients.end(); it++)
    {
        if (it->getFirstName() == firstName && it->getLastName() == lastName)
        {
            std::cout << it->getClient() << std::endl;
        }
    }
}

void Magasin::updateStock(std::string name, unsigned int quantity)
{
    for (auto it = _produits.begin(); it < _produits.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setAvaiableQuantity(quantity);
        }
    }
}