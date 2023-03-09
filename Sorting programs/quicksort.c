# include <stdio.h>
//arr is the array used in program
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
//.....end of quicksort function.......................
//.....main function starts.......................
int main()
{    int n;
	printf("Enter The Number Of Elements");
	scanf("%d",n);
	int arr[n];
	printf("Enter The Elements To Sort");
	for(i=0;i<n;i++)
	{
		scanf(%d,arr[i]);
		
		}
	quicksort(arr,0,4);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		
		}
	
}

