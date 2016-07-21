/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a recursive algorithm to compute the power function pow(x, y) = x^y
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int pow(int x, int y)
{
	int out;
	if(y==0)
		return 1;
	else return out= x*pow(x,--y);
}

int main()
{
	int result=0;
	result=pow(2,4);
	cout<<result<<endl;
	system ("pause");
	return 0;
}
