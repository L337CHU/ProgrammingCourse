//
// Created by Christopher Chu on 3/14/18.
//
#include "Product.hpp"
#include <iostream>
#include <string>
using namespace std;

// Constructor to initialize Product data members
Product::Product(string id,string t,string d, double p, int qa)
{
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}
//getIdCode
string Product::getIdCode()
{
    return idCode;
}
//get title
string Product::getTitle()
{
    return title;
}
//get Description
string Product::getDescription()
{
    return description;
}
//get price
double Product::getPrice()
{
    return price;
}
//get quantity available
int Product::getQuantityAvailable()
{
    return quantityAvailable;
}
//decrease the quantity available by one
void Product::decreaseQuantity()
{
    quantityAvailable -= 1;
}