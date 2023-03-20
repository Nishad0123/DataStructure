#include<iostream>
using namespace std;

class Node					//class node is defined which will be used for 1 single node of the list
{
	public:
	int data;				//2 elements are included in the class
	Node *link;
	
	public:
	
	Node()					//constructor inititialises the Node class elements, we can also make a parameterised constrcutor 
	{
		data=0;
		link=NULL;
	}
	Node( int newdata);
	
};

Node::Node(int newdata)
{
	data=newdata;
}

class Linked				//Linked class is created which will have the head node and all other functions that we might need
{
	Node *head;				//this is the 1st node which will have the 1st value
	
	public:
	
	Linked()
	{
		head=NULL;
	}
	
	//Linked(int data1)				//Linked constructor 
	//{
	//	head=NULL;	
	//	head->data=data1;
	//}
	
	void insertLink(int );	//these functions where we are just going to send the integers as data
	void deleteLink(int );	//the head node is globally available, so if new node is created then 
	void printLink();		//it can take a reference of this node
	
	
};

void Linked::insertLink(int data1)
{
	Node *newTemp=NULL;
	
	newTemp=new(nothrow) Node(data1);
	//newTemp->data=data1;
	if(newTemp==NULL)
	{
		cout<<"Memory Allocation failed\n";
		return;
	}
	
	Node *temp=NULL;
	temp=head;

	if(temp==NULL)
	{
		head=newTemp;
		return;
	}
	int count=0;
	while(temp->link!=NULL)
	{
		//cout<<"while chk"<<endl;
		temp=temp->link;
		//count++;
	}

	temp->link=newTemp;	
	//cout<<"-insert complete-"<<newTemp->data<<" and "<<count<<endl;
}

void Linked::deleteLink(int data)
{
	Node *temp=NULL;
	temp=head;
	Node *temp2=NULL;
	cout<<endl;
	if(temp==NULL)
	{
		cout<<"Memory Allocation failed\n";
		return;
	}
	while(temp!=NULL )
	{
		
		if(temp->data==data && temp==head)
		{	
			head=temp->link;
			cout<<"-delete element-"<<temp->data<<endl;
			delete temp;
			temp=NULL;
			return;
		}
		else if(temp->data==data && temp!=head)
		{
			temp2->link=temp->link;
			cout<<"-delete element-"<<temp->data<<endl;
			delete temp;
			temp=NULL;
			return;
			
		}
		//else if(temp->data!=data && temp!=head)
		{
			temp2=temp;
			temp=temp->link;
		}
	}
		
}

void Linked::printLink()
{
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		
		cout<<"The list is Emplty\n";
	}
	while(temp!=NULL)
	{
		cout<<"["<<temp->data<<"]"<<"-> ";
		temp=temp->link;
	}
	return;
}


int main()
{
	Linked llist;
	cout<<"Welcome to Linked List\n";
	
	llist.insertLink(12);
	llist.insertLink(23);
	llist.insertLink(34);
	llist.insertLink(45);
	
	cout<<"the list is:"<<endl;
	llist.printLink();
	
	llist.deleteLink(34);
	
	cout<<"\nthe list again\n";
	llist.printLink();
	cout<<endl;
	
	
	
}