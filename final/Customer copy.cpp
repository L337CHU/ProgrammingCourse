/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/12/2018
 * * Description: Project 10.b Customer class implementation
******************************************************************************/

#include "Customer.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Constructor to initialize Customer data members
Customer::Customer(string n, string a, bool pm)
{
    name = n;
    accountID = a;
    premiumMember = pm;

}
//get accountid
string Customer::getAccountID()
{
    return accountID;
}
//get Cart
vector<string> Customer::getCart()
{
    return cart;
}
//whether the customer is a premium member
bool Customer::isPremiumMember()
{
    return premiumMember;
}
//add product to cart
void Customer::addProductToCart(string var)
{
    cart.push_back(var);
}
//empty cart
void Customer::emptyCart()
{
    cart.clear();
}
