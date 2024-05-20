#include<stdio.h>
#include<stdlib.h>


void main() {
    int A[] = {3,5,7,8,6,5,1,2},n=8,min,temp;
    
    for(int i=0;i<n-2;i++){
        min = i;
        for(int j=i+1;j<n-1;j++){
            if(A[j]<A[min]){
                temp = A[j];
                A[j] = A[min];
                A[min] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}