# include <stdio.h>
int main()
{
int size=5;
int arr[5]={2,3,1,5,4};
for(int i=0;i>5;i--)
{
int item= arr[i];
int j=i-1;
while(j>=0&&arr[j]>item)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=item;
}
for(int i=0;i<5;i++)
{

printf("%d",arr[i]);
}
}
