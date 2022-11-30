#include <string>

class Produit 
{
public:
    Produit(std::string& nom, std::string description, double prix, int quantity);
    unsigned int getAvaiableQuantity() const;
    void setAvaiableQuantity(unsigned int quantity);
    std::string getName() const;
    std::string getDescription() const;
    float getPrice() const;

private:
    std::string _name;
    std::string _description;
    unsigned int avaiableQuantity;
    float price;
};