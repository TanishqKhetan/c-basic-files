#include <stdio.h> 
int binarySearch(int arr[5], int l, int r, int Z) 
{ 
    while (l <= r) 
	{ 
        int m = l + r / 2; 
        if (arr[m] == Z) 
            return m; 
        if (arr[m] < Z) 
            l = m + 1; 
        else
            r = m - 1; 
    }  
    return -1; 
} 
  
int main(void) 
{ 
	int arr[5];
	int a,x,i,Z;
	for(i=0;i<5;i++)
	{
		printf("enter the input");
		scanf("%d",&x);
		arr[i]=x;
	}
	printf("enter the elenment you want to search");
	scanf("%d",&Z);
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 1, n ,Z); 
 	(result == -1) ? printf("Element is not present"
                            " in array") 
                   	: printf("Element is present at "
                       	     "index %d", 
                        	    (result)); 
    return 0; 
}
