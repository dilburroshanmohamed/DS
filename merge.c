#include<stdio.h>
int main()
{
	int a[10],b[10],c[100],n,m,i,j,temp,k=0,Index;

//first array//
	printf("size of first array   ");
  		scanf("%d",&n);
	printf("enter the element ");
  
	for(i=0;i<=n-1;i++)
		{
 			scanf("%d",&a[i]);
		}

//display array// 
	printf("the entered array is :  ");
	for(i=0;i<=n-1;i++)
		{
		printf("%d  " , a[i]);
		}
	printf("\n ");

//sorting//
   	
	for (i = 0; i < n - 1; i++)
		{
		for (j = i + 1; j < n; j++)
			{
			if (a[i] > a[j])
				{
				temp = a[i]; 
				a[i] = a[j]; 
				a[j] = temp; 
				}
			}
		}

//display sorted array //
	printf("Sorted array is: "); 
	for (i = 0; i < n; i++) 
		{ 
		printf("%d ", a[i]); 
		}
	printf("\n");

//second array//
	printf("size of  second array   ");
  		scanf("%d",&m);
	printf("enter the element ");
  
	for(j=0;j<=m-1;j++)
		{
 		scanf("%d",&b[j]);
		}


//display array 2//
	printf("the entered array is :  ");
	for(j=0;j<=m-1;j++)
		{
		printf("%d  " , b[j]);
		}
	printf("\n ");

//sorting//
   	
	for (i = 0; i < m - 1; i++)
		{
		for (j = i + 1; j < m; j++)
			{
			if (b[i] > b[j])
				{
				temp = b[i]; 
				b[i] = b[j]; 
				b[j] = temp; 
				}
			}
		}

//display sorted array //
	printf("Sorted array is: "); 
	for (j = 0; j < m; j++) 
		{ 
		printf("%d ", b[j]); 
		}
	printf("\n");


//merge both array// 
	i = 0, j=0, Index,k;
	while (i < n && j < m)
 		{ 
		if (a[i] < b[j]) 
		{
 		c[k++] = a[i++]; 
		} 
		else 
		{ 
		c[k++] = b[j++]; 
 		} } 
 	while (i < n) 
		{ 
		c[k++] = a[i++]; 
		} 

	while (j < m) 
		{ 
		c[k++] = b[j++]; 
		} 

	printf("Merged sorted array is: ");
 		for (i = 0; i < k; i++) 
			{ 
			printf("%d ", c[i]); 
			}
		 printf("\n");
 	return 0;

}


