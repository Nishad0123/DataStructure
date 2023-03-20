#include <iostream>
using namespace std;
#define MAX 10




typedef struct box
{
	int data;
	struct box *link;
}node;
node *top_node;




int ifempty()
{
	if(top_node==NULL)
	{
		cout<<"underflow"<<endl;
		return 1;
	}
	return 0;
}


int push(int ele)
{
	node *term;
	term= new(nothrow) node;
//	if(iffull(term))
//	{
//		cout<<"OVERFLOW"<<endl;
//		exit(1);
//	}
//	int iffull(term)
//	{
	if(term==NULL)
	{
		cout<<"OVERFLOW"<<endl;
		return 1;
	}
//		return 0;
//	}
	else
	{
		term->data=ele;
		term->link=NULL;
		term->link=top_node;
		top_node=term;
	}
	return 0;
}

int pop()
{
	int val;
	if(ifempty())
	{
		cout<<"UNDERFLOW"<<endl;
		return 1;
	}
	else
	{
		node *temp;
		temp=top_node;
		val=temp->data;
		top_node=top_node->link;
		delete(temp);
		temp=NULL;
		return val;
	}
}



void stk_print()
{
	cout<<"Printing Stack"<<endl;
	if(top_node==NULL)
	{
		cout<<"UNDERFLOW"<<endl;
		exit(1);
	}

	node *temp;
	temp=top_node;
	while(temp)
	{
		cout<<"|"<<temp->data<<"|"<<endl;
		temp=temp->link;
	}
}

void top_print()
{
	if(top_node==NULL)
	{
		cout<<"UnderFLOW!!!"<<endl;
		exit(1);
	}
	cout<<"|"<<top_node->data<<"|"<<endl;
}


int main()
{
//	int topidx=-1;
//	int stk_arr[MAX];


node *temp;
temp=top_node;
int choise=0;
cout<<"Enter the stack "<<endl<<" 1. Push data "<<endl<<" 2. POP data "<<endl<<" 3. Print all Elements "<<endl<<" 4. Print Top Index Element "<<endl<<" 5. Exit "<<endl<<" Please Enter a Choise: "<<endl;
cin>>choise;
cout<<"Choise Entered ="<<choise<<endl;
	while(choise!=0)
	{
		if(choise==1)
		{
			int ele;
			cout<<"Enter element to be Pushed"<<endl;
			cin>>ele;
			push(ele);
		}
		else if(choise==2)
		{

			int pval=pop();
			cout<<"The Poped element is: |"<<pval<<"|"<<endl;
		}
		else if(choise==3)
		{
			stk_print();
		}
		else if(choise==4)
		{
			top_print();
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

