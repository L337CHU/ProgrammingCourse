/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/12/2018
 * * Description: Project 10b Store class implementation
****************************************************************************/

#include "Store.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

//add product to the inventory
void Store::addProduct(Product *p)
{
    inventory.push_back(p);
}
//adds a customer to the members
void Store::addMember(Customer *c)
{
    members.push_back(c);
}
//returns pointer to product with matching ID, return nULL otherwise
Product* Store::getProductFromID(string ID)
{
    for (int i=0; i < inventory.size(); i++)
    {
        if ((inventory[i]->getIdCode()) == ID)
            return inventory[i];
    }
    return NULL;
}
//returns pointer to customer with matching ID, return NULL otherwise
Customer* Store::getMemberFromID(string ID)
{
    for (int i=0; i < members.size(); i++)
    {
        if ((members[i]->getAccountID()) == ID)
            return members[i];
    }
    return NULL;
}
//product Search Products in title or description
vector<string> Store::productSearch(string str)
{
    //set first letter in search str to upper case
    str[0] = toupper(str[0]);
    vector<string>vect; //vector of strings

    for (int i = 0; i < inventory.size(); i++)
    {
        //first letter in titles to uppercase
        string tempTitle = inventory.at(i)->getTitle();
        tempTitle[0] = toupper(tempTitle[0]);

        //first letter in description to upper case
        string tempDescription = inventory.at(i)->getDescription();
        tempDescription[0] = toupper(tempDescription[0]);

        //push searched titled id code into temp vector
        if(tempTitle.find(str) != string::npos)
            vect.push_back(inventory[i]->getIdCode());
        //push searched description id code into temp vector
        if(tempDescription.find(str) != string::npos)
            vect.push_back(inventory[i]->getIdCode());
    }
    //return sorted vect
    sort(vect.begin(), vect.end());
    return vect;
}
string Store::addProductToMemberCart(string pID,string mID)
{
    //initialize pointer object
    Product *product = getProductFromID(pID);
    Customer *member = getMemberFromID(mID);

    //return string if product is not found
    if(product == NULL)
        return "product ID not found";
    //return string if member is not found
    if(member == NULL)
        return "member ID not found";

    //BOTH FOUND and if product is in stock
    if(product != NULL && member != NULL)
    {
        if (product->getQuantityAvailable() > 0)
        {
            member->addProductToCart(pID);
            return "product added to cart";
        }
        else
            return "product out of stock";

    }

}

double Store::checkOutMember(string mID)
{
    //initialize
    Customer *member = getMemberFromID(mID);

    //member id isn't found
    if(member == NULL)
        return -1;
    else                        //member id found
    {
        //initialize members cart
        vector<string> cart = member->getCart();

        //accumulator
        double totalCost =0;

        for (int i=0; i < cart.size(); i++)
        {
            //initialize members.getProduct inventory check
            Product *product = getProductFromID(cart[i]);
	    if(product != NULL)
	    {
		    if(product->getQuantityAvailable() > 0)
		    {
			 totalCost += product->getPrice();
           		 //decrease the quantity by 1
           		 product->decreaseQuantity();
		    }
	    }
        }
        //empty member cart
        member->emptyCart();
        //shipping cost
        if (member->isPremiumMember())
            return totalCost;
        else
        {
            totalCost = (.07 * totalCost) + totalCost;
            return totalCost;
        }


    }


}
