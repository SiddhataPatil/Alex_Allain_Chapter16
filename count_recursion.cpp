/*
 ==============================================================================================================================
 Name        : count_recursion.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Count number of times recursive function is called!
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

void count_rec(int no)
{
	cout<<no<<endl;
	if(no>5)
	{
	}

else count_rec(++no);

}
int main()

{
	count_rec(1);
	system ("pause");
	return 0;
}
