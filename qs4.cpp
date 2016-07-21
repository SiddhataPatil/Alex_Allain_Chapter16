/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a recursive function that takes a sorted array and a target element and finds that element
               in the array (returning the index, or -1 if the element isn’t in the array). How fast can you make
               this search? Can you do better than looking having to look at every element?
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int find(int A[],int size,int no)
{
	if(A[--size]==no)
	{
		return size;
	}
	if(size<0)
	{
		return -1;
	}
	else return find(A, size, no);

}


int main()
{
	int A[4]={1,2,3,4};
	int index=0;
	index=find(A,4,2);
	cout<<"Element found at index: "<<index<<endl;
	system("pause");
	return 0;
}
