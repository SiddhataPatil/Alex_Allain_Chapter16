/*
 ==============================================================================================================================
 Name        : qs2.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a recursive function that takes an array and displays the elements in reverse order
               without starting the index of the array at the end. (In other words, don’t write the equivalent of
               a loop that starts printing at the end of the array.)
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

void disp(int A[], int size)
{
cout<<A[--size]<<endl;
if(size<1)
{
}
else disp(A,size);
}
