/*
 ==============================================================================================================================
 Name        : even_odd_factorial.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program to find factorial of number using even factorial recursive function for even no and odd for odd no
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int fact_even(int no);
int fact_odd(int no);

int fact_odd(int no)
{
if(no==1)
return 1;
else return no*fact_even(no-1);
}

int fact_even(int no)
{
	if(no==1)
		return 1;
	else return no*fact_odd(no-1);

}

int main()

{
int result =0;
int no;
cout<<"enter no:"<<endl;
cin>>no;
if (no%2==0)
result=fact_even(no);
else result=fact_odd(no);
cout<<"Result: "<<result<<endl;
	system ("pause");
	return 0;
}
