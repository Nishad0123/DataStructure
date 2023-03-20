#include <stdio.h>
#define MAX 10


int stk_arr[MAX];
int topindex=-1;


int push(int ele)
{
	if(iffull)
	{
		printf("OVERFLOW\n");
		return 1;
	}
	topindex++;
	stk_arr[topindex]=ele;
	return 0;
}

int pop()
{	
	int val=stk_arr[topindex];
	if(ifempty)
	{
		printf("UNDERFLOW\n");
		return 1;
	}
	topindex--;
	return val;
}

int ifempty()
{
	if(topindex <=-1)
	{
		printf("Underflow\n");
		return 1;
	}
	return 0;
}

int iffull()
{
	if(topindex >= MAX-1)
	{
		printf("Overflow\n");
		return 1;
	}
	return 0;
}

void stk_print()
{
	if(topindex<=-1)
	{
		printf("UnderFLOW!!!\n");
	exit(1;
	}
	for(int i=MAX-1;i=0;i--)
	{
		Printf("|%d|\n",stk_arr[i]);
	}
}


main()
{
//	int topidx=-1;
//	int stk_arr[MAX];
char choise=0;
printf("Enter the stack\n 1. Push data\n 2. POP data\n 3. Print all Elements\n 4. Print Top Index Element\n 5.Exit\n Please Enter a Choise:\n ");
scanf("%d",&choise);

while(choise!=0)
{
	if(choise==1)
	{
		printf("Enter element to be Pushed\n");
		scanf("%d",&ele);
		push(ele);
	}
	if(choise==2)
	{

		int pval=pop();
		printf("The Poped element is:");
	}
	if(choise==3)
	{
		stk_print();
	}
	if(choise==4)
	{

	}
	if(choise==5)
	{

	}
	if(choise>5 || choise<1)
	{
		exit(1);
	}
}

}
