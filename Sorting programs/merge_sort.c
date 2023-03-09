# include <stdio.h>
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k;
	int n1=mid-low+1;
	int n2=high-mid;
	int L[n1],r[n2];
	for(i=0;i<n1;i++)
	{
		L[i]=arr[low+i];
		}
	for(j=0;j<n2;j++)
	{
		r[j]=arr[mid+1+j];
		}
i=j=0;
k=low;
while(i<n1&&j<n2)
{
if(L[i]<=r[j])	
{
	arr[k]=L[i];
	i++;
	k++;
	}	
   else	
  {
	arr[k]=r[j];
	j++;
	k++;
	}		
}

   while(i<n1)
   {
	arr[k]=L[i];
	i++;
	k++;
	
	}
   while(j<n2)
  {
	arr[k]=r[j];
	j++;
	k++;
	
	}	
	
}
void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{  
		int mid=low+(high-low)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
		
		
		}
	
	
	}
	int main()
{
	int arr[5]={5,2,1,3,4};
	mergesort(arr,0,4);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
		}
	
	
	
	}
