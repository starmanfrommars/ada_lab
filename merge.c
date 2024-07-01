#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int merge(int L[],int n1,int R[],int n2,int A[],int n){
	int i=0,j=0,k=0;
	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		A[k] = L[i];
		i++; k++;
	}
	while(j<n2){
		A[k] = R[j];
		j++; k++;
	}
}

void mergeSort(int A[],int n){
	if(n>1){
		int mid = floor(n/2);
		int n1 = mid;
		int n2 = n-mid;
		int L[mid],R[mid];
		printf("\n\nn1 = %d\n\n",n1);
		printf("\n\nn2 = %d\n\n",n2);
		int i=0,j=0;
		printf("\n\nleft array : ");
		while(i<mid){
			L[i]=A[i];
			printf("%d ",L[i]);
			i++;
		}
		printf("\n\nright array : ");
		while(i<n){
			R[j]=A[i];
			printf("%d ",R[j]);
			i++; j++;
		}
		
		mergeSort(L,mid);
		mergeSort(R,mid);
		
		merge(L,n1,R,n2,A,n);
	}
}

void main() {
	int *A,n,k,i;
	
		printf("Enter the number of elements : ");
    scanf("%d",&n);
    
    A = (int*)malloc(n*sizeof(int));

    
    
    printf("The array elements are : ");
    for(k=0;k<n;k++){
        A[k] = rand()%1000;
 		printf("%d ",A[k]);
    }
    printf("\n\n\n");
    
    clock_t start = clock();
    mergeSort(A,n);
    clock_t end = clock();
    
    double duration = (((double)(end-start))/CLOCKS_PER_SEC * 1000000000);
    
    printf("\n\nTime for sorting is : %0.2f nano seconds\n\n\n",duration);
    
    printf("The sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    printf("\n\n");

}
