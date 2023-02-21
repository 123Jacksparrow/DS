# include <stdio.h>
void quicksort(int arr[],int low,int high)
{ 
 int i,j,pivot,temp;
 if(low<high)
 
 {
	  pivot=low;
	  i=low;
	  j=high;
	 while(i<j){
  while(arr[i]<arr[pivot]&&i<high)
  {
	  i++;
   }
   while(arr[pivot]<arr[j])
   {
	   j--;
	   }
	   if(i<j)
	   {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
      }
   }
temp=arr[j];
arr[j]=arr[pivot];
arr[pivot]=temp;
quicksort(arr,low,j-1);
quicksort(arr,j+1,high);

}

}
int main()
{
	
	quicksort(arr,0,4);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
		}
	
	
	
	}

