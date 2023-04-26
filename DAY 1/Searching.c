#include <stdio.h>

int main()
{
    int n,i,j,s,x,arr[10];
    
    scanf("%d",&n);
    
    for(j=0;j<=n;j++){
      scanf("%d",&x);
        for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
       }
        scanf("%d",&s);
        
        for(i=0;i<x;i++){
        if(arr[i]==s){
            printf("%d",i);
        }
     }
     if(arr[i]!=s){
         printf("-1");
     }
  }
    
}
