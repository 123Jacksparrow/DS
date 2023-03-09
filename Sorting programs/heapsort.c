#include <stdio.h>
 
 void heapify(int arr[],int n,int i)
 {
	int parent=i;
	int lchild=2*i+1;
	int  rchild=2*i+2;
	 
		 if(lchild<n&& arr[lchild]>arr[parent])
		    {
				parent=lchild;
			}
			if(rchild<n&& arr[rchild]>arr[parent])
			{
				parent=rchild;
				
				}
		 if(parent!=i)
		 {
			 int temp=arr[i];
			 arr[i]=arr[parent];
			 arr[parent]=temp;
			 heapify(arr,n,parent);
		}
		  
	 
	 
 }
 void heap(int arr[],int n)
 {
	 for(int i=(n/2)-1;i>-1;i--)
	 {
		 heapify(arr,n,i);
		 }
	 for(int i=n-1;i>-1;i--)
	 {
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp; 
		heapify(arr,i,0);
		 
		 
		 }
	 }
	 
	 int main()
	 {
		 int arr[5]={5,2,4,1,3};
		 heap(arr,5);
		 
		 for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		}
		 
		 
		 }
