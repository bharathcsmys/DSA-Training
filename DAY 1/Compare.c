#include <stdio.h>

int compare(const void *aa, const void *bb)
{
    int n1=*(int*)aa;
    int n2=*(int*)bb;
    
    return n1-n2;
}
 
int main(){
    int a[] ={1,7,4,5,3};
    qsort(a,5,sizeof(int),compare);
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
        
    }
    return 0;
}


