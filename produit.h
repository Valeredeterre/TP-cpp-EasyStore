#include <string>
#include <iostream>

class Produit 
{
public:
    Produit(std::string name, std::string description, float price, int quantity);
    unsigned int getAvaiableQuantity() const;
    void setAvaiableQuantity(unsigned int quantity);
    std::string getName() const;
    std::string getDescription() const;
    float getPrice() const;
    std::string getProduct() const;
    friend std::ostream& operator<<(std::ostream& os, const Produit& produit);


private:
    std::string _name;
    std::string _description;
    unsigned int _avaiableQuantity;
    float _price;
};