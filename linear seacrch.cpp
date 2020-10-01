#include <stdio.h> 

int search(int arr[], int n, int z) 
{ 
	int i,flag; 
	for (i = 0; i < n; i++)
	{
		if (arr[i] == z)
		{
			flag=1;
			printf("element is present at %d position\n",i+1);
			 			
		}
			
	}
		
	flag=0; 
} 

int main(void) 
{ 
	int arr[5];
	int a,x,i,z;
	for(i=0;i<5;i++)
	{
		printf("enter the input");
		scanf("%d",&x);
		arr[i]=x;
	}
	printf("enter the elenment you want to search");
	scanf("%d",&z);
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = search(arr, n, z); 
	if(result==0)
	{
		printf("elements not found");
	}
	return 0; 
} 

