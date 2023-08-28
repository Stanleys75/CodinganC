#include<stdio.h>

void swap (long long int *a, long long int *b){
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(long long int A[], int N){
	for (long long int i=0; i<N; i++){
			for (long long int j=0; j<= N-i-1;j++){
				if (A[j+1]<A[j]){
					swap(&A[j],&A[j+1]);
				
				}
			}
		}
}

int Max(long long int A[], long long int l,long long int r){
	int Diff = 0;
	
	for(int i=l; i<r; i++){
		int diff = A[i+1] - A[i];
		if(diff > Diff){
			Diff = diff;
		} 
	}
	return Diff;
}
int main(){
	long long int T;
	
	scanf("%lld", &T);
	long long int N;
	
	for (long long int i=0;i<T;i++){
		scanf("%lld", &N); 
		long long int A[N];
		
		for(long long int j=0;j<N;j++)
		{
			scanf("%lld", &A[j]);
		}
		
		sort(A,N);
		int a1 = Max(A,0,N/2 - 1);
		int a2 = Max(A, N/2 , N-1);
		
			
	
		printf("Case #%lld: %lld", i+1, (a1 > a2) ? a1 : a2);
		printf("\n");
	}
	
	
	
	return 0;
}
