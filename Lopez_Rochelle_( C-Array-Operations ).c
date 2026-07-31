#include <stdio.h>

int main ()
{
    int LA[10]={15,25,35,10,20};
    int item=20, k=1, n=5;
    int i=0, j=n;
    printf("The original array elements are :\n");
    for(i=0;i<n;i++){
        printf("LA[%d]=%d \n",i, LA[i]);
    }
    n=n+1;
    while(j>=k){
        LA[j+1]=LA[j];
        j=j-1;
    }
    LA[k]=item;
    printf("Array after inserting 20 at index 1 :\n");
    for(i=0;i<n;i++){
        printf("LA[%d]=%d\n",i, LA[i]);
    }
    
    item=30;
    k=3;
    j=n;
    n=n+1;
    
    while(j>=k){
        LA[j+1]=LA[j];
        j=j-1;
    }
    LA[k]=item;
    printf("Array after inserting 30 at index 3:\n");
    for(i=0;i<n;i++){
        printf("LA[%d]=%d\n",i,LA[i]);
    }

    k=2;
    j=k;
    
    while (j<n-1){
        LA[j]=LA[j+1];
        j++;
    }
    n--;
    printf("Array after deletion of element at index 2:\n");
    for(i=0;i<n;i++){
        printf("LA[%d]=%d\n",i, LA[i]);
    }
    
    item=25;
    j=0;
    
    printf("Searching for element %d...\n",item);
    
    while (j<n){
        if(LA[j]==item){
            break;
        }
        j++;
    }
    if (j==n)
    printf("Element not found!\n");
    else
    printf("Found element %d at position %d\n",item,j); 


    LA[0]=10;
    
    printf("Array after updating the first element to 10:\n");
    for(i=0;i<n;i++)
    printf("LA[%d]=%d\n",i, LA[i]);
    
    return 0;
}
