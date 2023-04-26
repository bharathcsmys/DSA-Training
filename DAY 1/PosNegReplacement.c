#include <stdio.h>  
void swap(int*, int*);  
int main()  
{  
    int n, i, l, r;  
    printf("Enter the size of the Array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    l = 0;  
    r = n - 1;  
    while(l <= r)  
    {  
        if(arr[l] < 0 && arr[r] < 0)  
        {  
            l += 1;  
        }  
        else if(arr[l] > 0 && arr[r] > 0)  
        {  
            r -= 1;  
        }  
        else if(arr[l] > 0 && arr[r] < 0)  
        {  
            swap(&arr[l], &arr[r]);  
            l += 1;  
            r -= 1;  
        }  
        else  
        {  
            l += 1;  
            r -= 1;  
        }  
    }  
    printf("The resultant Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  
void swap(int *a, int *b)  
{  
    *a = *a + *b;  
    *b = *a - *b;  
    *a = *a - *b;  
}  
