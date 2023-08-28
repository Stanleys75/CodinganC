#include<stdio.h>

	long long int N,y;
	long long int x[100000];
	
	
void swap (long long int *a, long long int *b){
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void Sort(){
	for(long long int i=0;i<N-1;i++){
		long long int min = i;
		
		for(long long int j=i+1;j<N;j++){
			if(x[j] < x[min]){
				min = j;
			}
		}
		if(min != i){
			swap(&x[min],&x[i]);
		}
	}
	
}

int main(){

	long long int count = 0;
	scanf("%lld", &N);
	
	for (long long int i=0; i<N;i++){
		scanf("%lld", &x[i]);
	}
	
	scanf("%lld", &y);
	Sort();
	for(long long int i=0; i<N; i++)
	{
		if(y >= x[i])
		{
			y -= x[i];
			count++;
		}
		else
		{
			break;
		}
	}
	printf("%lld\n", count);
}

