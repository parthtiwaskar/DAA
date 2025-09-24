#include <stdio.h>

void printArray(int arr[],int low,int high)
{
	printf("Pass: ");
	for(int i = low; i <= high; i++)
		{
			printf("%d ", arr[i]);
		}
	printf("\n");
}
void merge(int arr[],int low,int mid, int high,int n )
{
	
	int i = low, j = mid + 1, h = low , temp[50]  ;
	while(h <= mid && j <= high)
		{
			if(arr[h] < arr[j])
			{
				temp[i] = arr[h];
				h++;
			}
			else{
				temp[i] = arr[j];
				j++;
			}
			i++;
		}
	
	while(h <= mid)
		{
			temp[i] = arr[h];
			h++;
			i++;
		}
        while(j <= high)
		{
			temp[i] = arr[j];
			j++;
			i++;
		}

	for(int k = low; k <= high;k++)
		{
			arr[k] = temp[k];
		}

	printArray(arr,low,high);
	
}void mergeSort(int arr[],int low,int high,int n)
{
	if(low < high)
	{
	int mid = (low + high)/2;
	mergeSort(arr,low,mid,n);
	mergeSort(arr,mid+1,high,n);
	merge(arr,low,mid,high,n);
	}
}
int main()
{
	
	int n;
	printf("no of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("elements: ");
	for(int i = 0; i < n; i ++)
		{
			scanf("%d",&arr[i]);
		}
	printf("Given array:\n");
	for(int i = 0; i < n; i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
	mergeSort(arr,0,n-1,n);
	printf("Sorted array:\n");
	for(int i = 0;i < n; i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
	return 0;
}