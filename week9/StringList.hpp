/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/02/2018
 * * Description: Project 9a StringList.hpp. Design a linked list
*****************************************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class StringList
{
	protected:
		struct ListNode
		{
			string value;
			ListNode *next;
			ListNode (string value1, ListNode *next1 = nullptr)
			{
				value = value1;
				next = next1;
			}
		};
		ListNode *head;			//head pointer
	public:
		void add(string);	//add function
		int positionOf(string);	//returns the position in the list
		bool setNodeVal(int position, string val);//set pos 
		vector <string> getAsVector();	//change list to vector
		StringList();			//constructor
		StringList(const StringList &); //copy constructor
		~StringList();			//destructor
		/*void display() const
		{
			ListNode *nodePtr = head;
			while (nodePtr)			TESTING TESTING
			{
				cout <<nodePtr->value << "   ";
				nodePtr = nodePtr->next;
			}
		};*/
};
#endif
