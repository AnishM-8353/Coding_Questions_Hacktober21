#include<stdio.h>
int main()
{
  unsigned long int arr[5],min,max,sum,temp;
  int i;
  for(i=0;i<5;i++)
  {
    scanf("%lu",&arr[i]);
  }
  min=arr[0];
  max=arr[0];
  
  for(i=0;i<5;i++)
  {
    sum=sum+arr[i];
    
    if(arr[i]>max)
     max=arr[i];
    
    if(arr[i]<min)
     {min=arr[i]; 
     }
  } 
   temp=min;
   min=sum-max;
   max=sum-temp;
   printf("%lu %lu",min,max);
   return 0;
}

