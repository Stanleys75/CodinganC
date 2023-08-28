#include<stdio.h>

int main(){
	long long int N,j,k;
	long long int arr[100001];
	long long int temp,sum;
	
	scanf("%lld", &N);
	for (int i=1;i<=N;i++){
		scanf("%lld", &arr[i]);
		sum = 0;
		
	}
	for(int i=1;i<=N;i++){
		if(arr[i]>0){
			sum += arr[i];
		}
		
	}
		printf("%lld\n", sum);
	return 0;
}
