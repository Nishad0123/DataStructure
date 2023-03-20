#include<stdio.h>
#include<string.h>
void swap(char * str1, char * str2)
{
	
	char temp=0,i=0;
	int size1=0,size2=0;
	size1=strlen(str1);
	size2=strlen(str2);
	
	for(i=0;i<5;i++)
	{
			temp=str1[i];
			str1[i]=str2[i];
			str2[i]=temp;
		
	}
	str1[size2]='\0';
	str2[size1]='\0';
}

int main()
{

char new[3][6];
printf("Enter 3 strings \n");
int i=0;
for(i=0;i<3;i++)
{
	scanf("%s",new[i]);
}

printf("Before swap\n");

for(i=0;i<3;i++)
{ 
        printf("%s\n",new[i]);
}
int indx1=0, indx2=0;
printf("Enter 2 indexes to swap\n");
scanf("%d %d",&indx1,&indx2);

swap(new[indx1], new[indx2]);

printf("After swap\n");

for(i=0;i<3;i++)
{ 
        printf("i=%d    %s\n",i,new[i]);
}

return 0;
}

