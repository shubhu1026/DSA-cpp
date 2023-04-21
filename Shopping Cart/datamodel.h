#include<string>
using namespace std;

class Item;

class Product
{
    int id;
    string name;
    int price;

public:
    Product(int u_id, string name, int price)
    {
        this->name = name;
        this->price = price;
        id = u_id;
    }

    string getDisplayName()
    {
        return name + " : Rs " + to_string(price) + "\n";
    }

    friend class Item;
};

class Item
{
    const Product product;
    int quantity;

public:
    Item(Product p, int q): product(p), quantity(q){}

    int getItemPrice()
    {
        return quantity * product.price;
    }

    string getItemInfo()
    {
        return product.name + " x " + to_string(quantity) + " : Rs. " + to_string(quantity  * product.price);
    }
};

class Cart
{

};
