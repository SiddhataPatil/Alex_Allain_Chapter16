/*
 ==============================================================================================================================
 Name        : factorial_recursion.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Print factorial of a number using recursion
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int factorial(int no)
{

if(no==0)
{
	return 1;
}
return no*factorial(no-1);

}

int main()

{
	int result=0;
	result=factorial(7);
	cout<<result<<endl;
	system ("pause");
	return 0;
}
