#include <stdio.h>
int main()
{
int arr[5]={3,1,5,2,4};
for(int i=0;i<5;i++)
{
for(int j=0;j<5-1;j++)
{
  if(arr[i]>arr[j])
  {
   int temp=arr[j];
   arr[j]=arr[i];
   arr[i]=temp;
  }

}
}

	  for(int j=0;j<5;j++)	
	  {
		    printf("%d\n",arr[j]);
		  }
     


}
