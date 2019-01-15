/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/02/2018
 * * Description: Project 9a. StringList.cpp Linked List class 
*****************************************************************************/

#include "StringList.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * add function. add new element to the end of the list
 * */
void StringList::add(string varString)
{
	if (head == nullptr)
		head = new ListNode (varString);
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr)
			nodePtr = nodePtr->next;
		nodePtr->next = new ListNode(varString);
	}
}
/*
 * returns the position in the list
 */
int StringList::positionOf(string var)
{
	string value = var;
	ListNode *nodePtr = head;
	int count = 0;
	while (nodePtr != nullptr)
	{
		if (nodePtr->value == var)
			return count;
		count++;
		nodePtr = nodePtr->next;
	}
	return -1;
}

/*
 * set position to the value of the node and return true and return false when 
 * position parameter is >= the number of nodes
*/
bool StringList::setNodeVal(int position, string val)
{
	int count = 0;		//accumulator
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		if (count == position)
		{
			nodePtr->value = val;
			return true;
		}
		count++;
		nodePtr = nodePtr->next;
	}
	return false;
}
/*
 * return as vector
 * */
vector <string> StringList::getAsVector()
{
	vector <string> vect;
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		vect.push_back(nodePtr->value);
		nodePtr = nodePtr->next;
	}
	return vect;
}
/*constructor*/
StringList::StringList()
{
	head = nullptr;
}
/*copy constructor*/
StringList::StringList(const StringList &obj)
{
	ListNode *nodePtr = obj.head;
	while (nodePtr != nullptr)
	{
		add(nodePtr->value);
		nodePtr = nodePtr->next;
	}
}
/*destructor*/
StringList::~StringList()
{
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;
	}
}
/***  TESTING TESTING TESTING TESTING TESTING
int main()
{
	StringList list;
	list.add("hello");
	list.add("wah");
	list.display();

	testvector = list.getAsVector();
	for (int i =0; i <testvector.size(); i++)
		cout << testvector[i] << endl;


	return 0;

}
****************************/
