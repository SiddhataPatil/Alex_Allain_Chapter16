/*
 ==============================================================================================================================
 Name        : factorial_no_recursion.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Find factorial of a number by NOT using recursion
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int factorial(int no)
{

int temp=no;
while(no>1)
{
	no--;
	temp=temp*no;
}
return temp;
}

int main()

{
	int result=0;
	result=factorial(7);
	cout<<result<<endl;
	system ("pause");
	return 0;
}
