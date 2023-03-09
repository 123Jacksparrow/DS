#include <stdio.h>
int main()
{
	int arr[5]={5,1,4,2,3};
	int n=5;
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			}
		if(min!=i)
		{
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
			
			}
		
		
		}
	
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		}
	
	
	
	
	}
