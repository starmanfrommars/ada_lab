#include<stdio.h>

int main() {
	int i,j=0,max_qyt,m,n;
	float sum=0,max;
	int array[2][20];
	printf("Enter the number of items : ");
	scanf("%d",&n);
	printf("Enter the weight of each ietms : ");
	for(i=0;i<n;i++)
		scanf("%d",&array[0][i]);
	printf("Enter the values of each items : ");
	for(i=0;i<n;i++)
		scanf("%d",&array[1][i]);
	printf("Enter the maximum value of knapsack : ");
	scanf("%d",&max_qyt);
	
	m=max_qyt;
	while(m>0){
		max = 0;
		for(i=0;i<n;i++){
			if(((float)array[1][i])/((float)array[0][i])>max){
				max = ((float)array[1][i])/((float)array[0][i]);
				j = i;
			}
		}
		if(array[0][j]>m){
			printf("Quantity of item number : %d added is %d\n",(j+1),m);
			sum += m*max;
			m= -1;
		}
		else {
			printf("Quantity of item number : %d added is %d\n",(j+1),array[0][j]);
			m -= array[0][j];
			sum += (float) array[1][j];
			array[1][j]=0;
		}
	}
	printf("The total profit is : %0.2f\n",sum);
	return 0;
}
