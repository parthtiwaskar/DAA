#include <stdio.h>
void printArray(int arr[],int low,int high)
{
	printf("Pass: ");
	for(int i = low; i <= high;i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
}
int partition(int arr[],int low,int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for(int j = low; j < high; j++)
		{
			if(arr[j] <= pivot)
			{
				i++;
				int temp =  arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		int temp = arr[i+1];
		arr[i+1] = arr[high]; 
		arr[high] = temp;

		//printArray(arr,low,high);
		return(i+1);
}
void quickSort(int arr[],int low,int high)
{
if(low < high)
		{
		int pi = partition(arr,low,high);
		printArray(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}

}
int main()
{
int n;
printf("number of elements: ");
scanf("%d",&n);
int arr[n];
printf("elements: ");
for(int i = 0; i < n ; i++)
{
scanf("%d",&arr[i]);
}
printf("Original array: ");
	for(int i = 0; i < n; i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
//printArray(arr,0,n);
quickSort(arr,0,n-1);
printf("Sorted array: ");
for(int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;

}