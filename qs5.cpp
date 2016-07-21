/*
 ==============================================================================================================================
 Name        : qs5.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a recursive algorithm to solve the towers of Hanoi problem.
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

void tower(int no, char start_pole, char dest_pole, char temp_pole)
{
if (no==0)
return;
tower (no-1, start_pole, temp_pole, dest_pole);
cout<<"Move the disk "<<no<<" from "<<start_pole<<" to "<<dest_pole<<endl;
tower (no-1, temp_pole, dest_pole, start_pole);
}

int main()
{
	tower(20, 's', 'd', 't');
	system("pause");
	return 0;
}
