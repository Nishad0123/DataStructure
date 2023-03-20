#include<stdio.h>
#include<stdlib.h>

typedef struct note
{
	int num1;
	struct note * nptr;
}task;

int main()
{
	task var1,var2,var3,var4;		//Linked list

	task str_arr[4];			//array of structures
	task *newptr;				//ptr only capable of holding 8 bytes
	newptr=calloc(1,sizeof(task));
	printf("Enter num1\n");
	scanf("%d",&(newptr->num1));
	printf("print newptr %d  size %ld\n",newptr->num1,sizeof(newptr));

	printf("Before self referencing ptrs\n");
	printf("for self ref struct ptr sizeof var1=%ld\n",((char *)&var2)-((char *)&var1));

	printf("for self ref struct ptr addr1=%p addr2=%p \n",&var1,(&(var1)+16));
	printf("for self ref struct ptr addr1=%p addr2=%p \n",&var1,&var2);


	var1.nptr=&var2;
	var2.nptr=&var3;
	var3.nptr=&var4;


	printf("After self referencing  ptrs\n");

	printf("for self ref struct ptr addr1=%p addr2=%p \n",&var1,(&(var1)+16));
	printf("for self ref struct ptr addr1=%p addr2=%p \n",&var1,&var2);


	
	
	printf("Before self referencing Array of structs\n");
	printf("for array of structs sizeof st_arr=%ld\n",((char *)&str_arr[2])-((char *)&str_arr[1]));

	printf("for array of structs  addr1=%p  addr2=%p\n",&str_arr[1],(str_arr+2));
	printf("for array of structs  addr1=%p  addr2=%p\n",(str_arr+1),&str_arr[2]);

	for(int i=0;(i+1)<4;i++)
	{
		str_arr[i].nptr=&str_arr[i+1];
	}


	printf("After self referencing Array of structs\n");

	printf("for array of structs  addr1=%p  addr2=%p\n",&str_arr[1],(str_arr+2));
	printf("for array of structs  addr1=%p  addr2=%p\n",(str_arr+1),&str_arr[2]);


	return 0;
}
