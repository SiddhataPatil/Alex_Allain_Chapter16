/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a recursive algorithm to remove elements from a linked list. Write a recursive algorithm to
               add elements into a linked list.
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

void insert( node* s, int no)
{
	node* link=new node;
	node* temp_link;
if(s==NULL)
{

}
	if((s->data)>(no) &&(s->next_link->data)<(no))
	{
		temp_link=s->next_link;
		s->next_link=link;
		link->data=no;
		link->next_link=temp_link;
	}
	else insert(s->next_link, no);
}

void remove(node* s, int no)
{

	if(s->data==no)
	{
		s->data=s->next_link->data;
		s->next_link=s->next_link->next_link;
	}
	else remove(s->next_link, no);
}


int main()
{
	node* p = new node;
	node* p1;
	p=NULL;
	p1=get_new(p,1);
	cout<<"Original linked list"<<endl;
	print(p1);
	cout<<"Inserted Linked list"<<endl;
	insert(p1,5);
	print(p1);
	cout<<"Removed Linked List"<<endl;
	remove(p1,5);
	print(p1);
	system("pause");
	return 0;
}
