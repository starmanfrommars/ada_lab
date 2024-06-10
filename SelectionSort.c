#include<stdio.h>
#include<stdlib.h>

int A[20],n=0,min,temp,i,k;

void selectionSort() {
	int temp;
	for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                temp = A[j];
                A[j] = A[min];
                A[min] = temp;
            }
        }
    }
   }

void main() {  
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(k=0;k<n;k++){
        scanf("%d ",&A[k]);
    }
    
    selectionSort();
    
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

