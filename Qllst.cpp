#include <iostream>

#define MAX 10
using namespace std;

class node
{
	public:
	int data;
	node *link;
	node()
	{
		data=0;
		link=NULL;
	}
};


class queue1
{
	public:
	node *front;
	node *back;
	
	queue1()
	{
		front=NULL;
		back=NULL;
	}
	
	bool iffull(node *top)
	{
		if(top==NULL)
		{
			cout<<"OverFlow"<<endl;
			return true;
		}
		return false;
	}

	bool ifempty()
	{
		if(front==NULL)
		{
			cout<<"UnderFlow"<<endl;
			return true;
		}
		return false;
	}

	void enqueue(int ele)
	{
		
		node *top;
		top=new(nothrow)(node);
		if(iffull(top))
		{
			cout<<"OverFlow"<<endl;
		}
		else
		{
			top->data=ele;
			top->link=NULL;
		}
		
		if(ifempty())
		{

			front=top;
			back=top;
			return;
		}
		else
		{
	//		node *term;
	//		term=top;
	//		while(term!=NULL)
	//		{
	//			term=term->link;
	//		}
		}	
		back->link=top;
		back=top;
	}

	int dequeue()
	{
		if(ifempty())
		{
			cout<<"UnderFlow"<<endl;
			return 1;
		}
		node * temp;
		temp=front;
		front=front->link;
		int ret=temp->data;
		delete temp;
		return ret;
	}

	void top_print()
	{
		if(ifempty())
		{
			cout<<"UnderFlow"<<endl;
		}
		cout<<"|"<<front->data<<"|"<<endl;
	}

//	void bottom_print()
	//{
		

	//}

	void Qprint()
	{
		if(ifempty())
		{
			cout<<"UnderoFlow"<<endl;
		}
		node *temp;
		temp=front;
		while(temp!=back)
		{
			cout<<"|"<<temp->data<<"|"<<endl;
			temp=temp->link;
		}
		cout<<"|"<<temp->data<<"|"<<endl;
	}
};


int main()
{
	node Qterm;
	queue1 Qobj1;
	int data;
	int choise=0;

cout<<"Enter the stack "<<endl<<" 1. Push data "<<endl<<" 2. POP data "<<endl<<" 3. Print all Elements "<<endl<<" 4. Print Top Index Element "<<endl<<" 5. Exit "<<endl<<" Please Enter a Choise: "<<endl;
cin>>choise;
cout<<"Choise Entered ="<<choise<<endl;
	while(choise!=0)
	{
		if(choise==1)
		{		
			cout<<"Enter element to be Pushed"<<endl;
			cin>>data;
			Qobj1.enqueue(data);
		}
		else if(choise==2)
		{
//		obj1.dequeue();
			int pval=Qobj1.dequeue();
			cout<<"The Poped element is: |"<<pval<<"|"<<endl;
		}
		else if(choise==3)
		{
			Qobj1.Qprint();
		}
		else if(choise==4)
		{
			Qobj1.top_print();
		}
		else if(choise>4 || choise<1)
		{
			exit(1);
		}
	cout<<"Enter New choise"<<endl;
	cin>>choise;
	cout<<"Choise Entered ="<<choise<<endl;
	}
	return 0;
}
