#include<iostream>
#include<vector>
#include<stdlib.h>
#include "datamodel.h"

vector<Product> allProducts =
{
    Product (1,"apple", 26),
    Product (3,"mango", 16),
    Product (2,"guava", 36),
    Product (5,"banana", 56),
    Product (4,"strawberry", 29),
    Product (6,"pineapple", 20)
};

Product* chooseProduct()
{
    string productList;
    cout<<endl<<"Available Products: "<<endl;

    for(auto product : allProducts)
    {
        productList.append(product.getDisplayName());
    }
    cout<<productList;

    cout<<"----------------------"<<endl;

    string choice;
    cin>>choice;

    for(int i=0; i < allProducts.size(); i++)
    {
        if(allProducts[i].getShortName() == choice)
        {
            return &allProducts[i];
        }
    }

    cout<<endl<<"Product not found"<<endl;
    return NULL;
}

bool checkout(Cart &cart)
{
    if(cart.isEmpty())
    {
        return false;
    }

    int total = cart.getTotal();
    cout<<"Pay in Cash Rs. "<<total<<endl ;

    int paid;
    cin>>paid;

    if(paid>=total)
    {
        cout<<"Change "<<paid - total<<endl;
        cout<<"Thank you for shopping!"<<endl;
        return true;
    }
    else
    {
        cout<<"Not enough cash!"<<endl;
        return false;
    }
}

int main()
{
    char action;
    Cart cart;

    while(true)
    {
        system("cls");
        cout<<endl;
        cout<<"Select an action:"<<endl;
        cout<<"1. Add item"<<endl;
        cout<<"2. View cart"<<endl;
        cout<<"3. Checkout"<<endl;

        cin>>action;

        if(action == '1')
        {
            //add to cart
            //View all products + choose product + add to the cart
            //system("cls");
            Product* product = chooseProduct();
            if(product != NULL)
            {
                cout<<"Added to the Cart "<<product->getDisplayName();
                cart.addProduct(*product);
            }
        }
        else if(action == '2')
        {
            //view cart
            cout<<"----------------------"<<endl;
            cout<<cart.viewCart();
            cout<<"----------------------"<<endl;
        }
        else if(action == '3')
        {
            //checkout
            cart.viewCart();
            if(checkout(cart))
            {
                break;
            }
        }
        else
        {
            cout<<endl<<"Invalid action. Please select your action again."<<endl;
        }
    }

    return 0;
}
