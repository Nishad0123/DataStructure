#include <iostream>
using namespace std;
#define MAX 10


int stk_arr[MAX];
int topindex=-1;


int ifempty()
{
	if(topindex <=-1)
	{
		cout<<"underflow"<<endl;
		return 1;
	}
	return 0;
}

int iffull()
{
	if(topindex >= MAX-1)
	{
		cout<<"OVERFLOW"<<endl;
		return 1;
	}
	return 0;
}


int push(int ele)
{
	if(iffull())
	{
		cout<<"OVERFLOW"<<endl;
		return 1;
	}
	topindex++;
	stk_arr[topindex]=ele;
	return 0;
}

int pop()
{	
	int val=stk_arr[topindex];
	if(ifempty())
	{
		cout<<"UNDERFLOW"<<endl;
		return 1;
	}
	topindex--;
	return val;
}

void stk_print()
{
	cout<<"Printing Stack"<<endl;
	if(topindex<=-1)
	{
		cout<<"UNDERFLOW"<<endl;
		exit(1);
	}
	for(int i=topindex;i>=0;i--)
	{
	//	cout<<"for loop"<<endl;
		cout<<"|"<<stk_arr[i]<<"|"<<endl;
	}
}

void top_print()
{
	if(topindex<=-1)
	{
		cout<<"UnderFLOW!!!"<<endl;
		exit(1);
	}
	cout<<"|"<<stk_arr[topindex]<<"|"<<endl;
}


int main()
{
//	int topidx=-1;
//	int stk_arr[MAX];
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

