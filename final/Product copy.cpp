/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/12/2018
 * * Description: Project 10b  Product class implementation
*****************************************************************************/

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
