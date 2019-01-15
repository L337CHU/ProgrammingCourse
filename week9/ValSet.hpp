/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/28/2018
 * * Description: Project 8b. Template class called ValSet, a math set of value
*******************************************************************************/

#ifndef VALSET_HPP
#define VALSET_HPP
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class ValSet
{
	T *ptr;		
	int arraySize;
	int numValues;
public:
	ValSet();						//default
	ValSet(const ValSet <T> &obj);				//copy
	ValSet <T>& operator= (const ValSet <T> &right);	//overload
	~ValSet();						//destructor
	int size();		//returns # of values 
	bool isEmpty();		//returns true if ValSet has no values		
	bool contains(T);	//true if value in ValSet, otherwise false
	void add(T);		//add value to Valset
	void remove(T);		//remove value
	vector<T> getAsVector();//return vector that contains all values
	ValSet<T> operator+ (ValSet <T> &right);	//overloaded +
	ValSet<T> operator* (ValSet <T> &right);	//overloaded *
	ValSet<T> operator/ (ValSet <T> &right);	//overloaded /
};
#endif
template <class T>			//default
ValSet<T>::ValSet()
{
	ptr = new T[10];
	arraySize = 10;
	numValues = 0;
}
template <class T>			//copy
ValSet<T>::ValSet(const ValSet<T> &obj)
{
	numValues = obj.numValues;
	arraySize = obj.arraySize;
	ptr = new T[arraySize];
	for (int i=0; i < arraySize; i++)
		ptr[i] = obj.ptr[i];
}
template <class T>			//overload
ValSet<T>& ValSet<T>::operator=(const ValSet<T> &right)
{
	arraySize = right.arraySize;
	ptr = new T[arraySize];
	for (int i=0; i < arraySize; i++)
		ptr[i] = right.ptr[i];
	return *this;
}
template <class T>			//destructor
ValSet<T>::~ValSet<T>()
{
	delete [] ptr;
}
template <class T>			//return numberofValues
int ValSet<T>::size()
{
	return numValues;
}
template <class T>			//return true if ValSet has no values
bool ValSet<T>::isEmpty()
{
	if (numValues == 0)
		return true;
	else
		return false;
}
template<class T>			//true if value in ValSet, else false
bool ValSet<T>::contains(T val)
{
	for (int i=0; i < numValues; i++)
	{
		if(val == ptr[i])
			return true;
	}
	return false;
}
template<class T>			//add value to ValSet
void ValSet<T>::add(T val)
{
	if (!contains(val))
	{
		if (numValues < arraySize)
		{
			ptr[numValues] = val;
			numValues++;
		}
		else
		{
			T *tempPtr = new T[2 * arraySize];
			for (int i=0; i < arraySize; i++)
				tempPtr[i] = ptr[i];
			delete [] ptr;
			ptr = new T[2 * arraySize];
			for (int i=0; i < arraySize; i++)
				ptr [i] = tempPtr[i];
			ptr[numValues] = val;
			numValues++;
		}
	}
}
template <class T>			//remove value
void ValSet<T>::remove(T val)
{
	if(contains(val))
	{
		for (int i=0; i < arraySize; i++)
			if (ptr [i] == val)
			{
				int index = i;
				for (int s = index; s <arraySize; s++)
					ptr[s] = ptr[s+1];
			}
		numValues--;
	}
}
template <class T>			//return vector that contains all value
vector<T> ValSet<T>::getAsVector()
{
	vector <T> vect;
	for (int i=0; i < numValues; i++)
		vect.push_back(ptr[i]);
	return vect;
}
template <class T>			//overloaded +
ValSet <T> ValSet<T>::operator+(ValSet <T> &right)
{
	ValSet<T> myUnion;
	for (int i=0; i < arraySize; i++)
		myUnion.add(this->ptr[i]);
	for (int i=0; i < right.arraySize; i++)
		myUnion.add(right.ptr[i]);
	return myUnion;
}
template <class T>			//overloaded *
ValSet <T> ValSet<T>::operator*(ValSet <T> &right)
{
	ValSet<T> myInter;
	for (int i=0; i < numValues; i++)
	{
		if (contains(right.ptr[i]))
			myInter.add(right.ptr[i]);
	}
	return myInter;
}
template <class T>			//overloaded /
ValSet<T> ValSet<T>::operator/(ValSet <T> &right)
{
	ValSet<T> symDiff;
	for (int i=0; i < numValues; i++)
	{
		if (!contains(right.ptr[i]))
		{
			symDiff.add(right.ptr[i]);
			if (contains(ptr[i]))
				symDiff.add(this->ptr[i]);
		}
	}
	return symDiff;
}



