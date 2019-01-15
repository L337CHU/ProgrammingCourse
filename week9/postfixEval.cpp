/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 03/03/2018
 * * Description:Project 9b. postfixEval function
****************************************************************************/

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;

double postfixEval(char postExp[]);	//function prototypes
double solveEq(char op, double var1, double var2);

double postfixEval(char postExp[])
{

	double value;
	stack <double> stack;

	char *token;
	token = strtok(postExp," ");  //seperate token with space

	while (token !=NULL)
	{

		if (isdigit(token[0])) //if digit push in stack
		{
			atof(token);
			stack.push(atof(token));
		}
		else
		{
			double var1 = stack.top();
			stack.pop();
			double var2 = stack.top();
			stack.pop();
			value = solveEq(*token, var1, var2);
			stack.push(value);

		}

		token = strtok(NULL," ");

	}
	return value;
}
// solveEq function. Solve with correct operator
double solveEq(char op, double var1, double var2)
{
	if (op == '+')
		return (var2 + var1);
	else if (op == '-')
		return (var2 - var1);
	else if (op == '*')
		return (var2 * var1);
	else				//Assuming / is the only one left
		return (var2 / var1);

}
/*
int main()
{
	char input[] = {"25 12 7 - 2 * /"};

	cout <<postfixEval(input) << endl;

	return 0;

}
	*/
