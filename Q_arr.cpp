#include <iostream>

#define MAX 10
using namespace std;

class queue1
{
	int Qarr[MAX];
	int front1;
	int back1;
	public:

	queue1()
	{
		front1=-1;
		back1=-1;
	}

	bool iffull()
	{
		if(back1>=MAX-1)
		{
			cout<<"OverFlow"<<endl;
			return true;
		}
		return false;
	}

	bool ifempty()
	{
		if(front1>back1 || front1==-1)
		{
			cout<<"UnderFlow"<<endl;
			return true;
		}
		return false;
	}

	void enqueue(int ele)
	{
		if(iffull())
		{
			cout<<"OverFlow"<<endl;
		}
		back1++;
		Qarr[back1]=ele;

		if(front1==-1)
		{
			front1++;
		}
	}

	void dequeue()
	{
		if(ifempty())
		{
			cout<<"UnderFlow"<<endl;
			
		}
		cout<<"The Poped element is: |"<<Qarr[front1]<<"|"<<endl;
		front1++;
//		return Qarr[front1-1];
	}

	void top_print()
	{
		if(ifempty())
		{
			cout<<"UnderFlow"<<endl;
		}
		cout<<"Top"<<Qarr[front1];	
	}

	void bottom_print()
	{
		
	}

	void Qprint()
	{
		if(ifempty())
		{
			cout<<"UnderoFlow"<<endl;
		}
		int i=0;
		for(i=front1;i<back1;i++)
		{
			cout<<"|"<<Qarr[i]<<"|"<<endl;
		}
	}
};

int main()
{
	queue1 obj1;
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
			obj1.enqueue(data);
		}
		else if(choise==2)
		{
			obj1.dequeue();
//			int pval=dequeue();
//			cout<<"The Poped element is: |"<<pval<<"|"<<endl;
		}
		else if(choise==3)
		{
			obj1.Qprint();
		}
		else if(choise==4)
		{
			obj1.top_print();
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
