/*
 ==============================================================================================================================
 Name        : palindrome_of_nos.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Print out 123456789987654321 using recursion
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

void num(int no)
{
	cout<<no;
  if(no<9)
  {
	  num(no+1);
  }
 cout<<no;
}

int main()

{
	num(1);
	system ("pause");
	return 0;
}
