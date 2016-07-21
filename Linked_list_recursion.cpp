/*
 ==============================================================================================================================
 Name        : Linked_list_recursion.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Program a linked list using recursion
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next_link;
};

void print(node *s)
{
	while(s!=NULL)
	{
		cout<<s->data<<endl;
	s=s->next_link;
	}
}

node* search(node* s,int no)
{
	if(s->data==no)
	{
		return s;
	}
	else return search(s->next_link, no);

}

node* get_new(node* s, int no)
{
node* link= new node;
link->data= no;
link->next_link= s;
s=link;
cin>>no;
if(no!=0)
{
s= get_new(s, no);
}
return s;
}

int main()
{
	node* p = new node;
	node* p1;
	p=NULL;
	p1=get_new(p,1);
	print(p1);
	p1=search(p1,5);
	if(p1->data==5)
	cout<<"Found!!"<<endl;
	else
		cout<<"Not found"<<endl;
	system("pause");
	return 0;
}
