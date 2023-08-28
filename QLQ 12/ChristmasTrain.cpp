#include<stdio.h>

void swap (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int T;
	
	scanf("%d", &T);
	int N,X;
	
	for (int i=0;i<T;i++){
		scanf("%d %d", &N,&X);
		
		int A[1000];
		for(int j=1;j<=N;j++)
		{
			scanf("%d", &A[j]);
		}
		
		int count =0;
		for (int i=1; i<=N-1; i++){
			for (int j=N; j>= i+1;j--){
				if (A[i]> A[j]){
					swap(&A[i],&A[j]);
					count++;
				}
			}
		}
		
//		for(int k=1;k<=N;k++){
//			printf("%d ", A[k]);
//		}
		
		printf("Case #%d: %d", i+1, count*X);
		printf("\n");
	}
	
	
	
	return 0;
}
