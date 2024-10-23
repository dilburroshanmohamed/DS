#include<stdio.h> 
void inputArray(int arr[], int size) 
{ 
	printf("Enter the elements: ");
		for (int i = 0; i < size; i++)
		{
			scanf("%d", &arr[i]); 
		} 
} 
void displayArray(int arr[], int size) 
{ 
	printf("The entered array is: "); 
	for (int i = 0; i < size; i++) 
	{ 
		printf("%d ", arr[i]); 
	} 
	printf("\n"); 
} 
void sortArray(int arr[], int size) 
{ 
	for (int i = 0; i < size - 1; i++) 
	{ 
		for (int j = i + 1; j < size; j++) 
		{ 
			if (arr[i] > arr[j]) 
			{ 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 
	} 
} 
void mergeArrays(int a[], int n, int b[], int m, int c[])
{ 
	int i = 0, j = 0, k = 0; 
	while (i < n && j < m) 
	{ 
		if (a[i] < b[j]) 	
		{
			c[k++] = a[i++]; 
		} 
		else 
		{ 
			c[k++] = b[j++];
		} 
	} 
	while (i < n) { c[k++] = a[i++]; 
	}
		while (j < m) 
		{ 
		c[k++] = b[j++]; 
		} 
	} 
int main() 
{ 
	int a[10], b[10], c[100], n, m;
// First array 
	printf("Size of first array: ");
	scanf("%d", &n);
	inputArray(a, n);
 	displayArray(a, n);
 	sortArray(a, n);
 	printf("Sorted first array is: ");
	displayArray(a, n);
 // Second array 
	printf("Size of second array: ");
 	scanf("%d", &m);
 	inputArray(b, m);
 	displayArray(b, m);
 	sortArray(b, m);
 	printf("Sorted second array is: ");
 	displayArray(b, m);
 // Merging both arrays 
	mergeArrays(a, n, b, m, c);
 	printf("Merged sorted array is: "); 
	displayArray(c, n + m); return 0; }
