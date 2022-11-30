
#include <string>
#include <vector>
#include "client.h"

class Magasin
{
public:
    Magasin();
    void addProduct(Produit produit);
    void addClient(Client client);
    void displayStock();
    void displayClients();
    void displayClient(int id);
    void displayClient(std::string firstName, std::string lastName);
    void updateStock(std::string name, unsigned int quantity);
private:
    std::vector<Produit> _produits;
    std::vector<Client> _clients;
};