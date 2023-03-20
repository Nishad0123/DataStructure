#include<iostream>
using namespace std;

int main()
{
	int row=2,col=3,i=0,j=0;
	int** arr= new int*[row];
	for(i=0;i<row;i++)
	{
		arr[i]=new int[col];
	}
	cout<<"Enter elements"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>(arr[i][j]);
		}
	}
	cout<<"elements are:"<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<*(*(arr+i)+j)<<"	"<<endl;
		}
		cout<<endl;
	}
}
