#include <stdio.h>
#include <math.h>

void main()

{
  int arr[10]={1,2,3,4,5,6,7,8,9,10},i,n=10,j,c;
     
 
     printf("The prime numbers are\n");
     for(i=1;i<n;i++)
     {
           c=0;
           for(j=2;j<arr[i];j++)
           {
                 if(arr[i]%j==0)
                 {
                       c=2;
                       break;
                 }
           }
           if(c==0)
           {
                 printf("%d ",arr[i]);
           }
     }

}
