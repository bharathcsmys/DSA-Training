#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,arr[10];
    int n,temp;
    int a=1;
    int b=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array before sorting:");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
        
    }
    printf("\nThe array after sorting:");
    
    for(i=0;i<n;i++){
        printf( "%d ",arr[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",a);
        }
        else{
            printf("%d ",b);
        }
    }

}
