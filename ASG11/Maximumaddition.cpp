#include<stdio.h>

int main(){
	long long int T,N,M;
	long long int arr[100001];
	
	scanf("%lld", &T);
	for(int i=0; i<T;i++){
		scanf("%lld %lld",&N,&M);
		
		for (int j=0;j<N;j++){
			scanf("%lld", &arr[j]);
		}	
		
		long long int count = 0;
		
		for (int k=0;k<N;k++){
			long long int hasil = 0;
			long long int temp = 0;
				
			for (int l=k; l<N; l++){
				if(hasil + arr[l] <= M){
					hasil += arr[l];
					temp++;
				} else {
					break;
				}
				
			}
			if(count < temp){
				count = temp;
			}
		
		}
		if(count == 0){
			printf("Case #%d: -1\n", i+1);
		} else {
			printf("Case #%d: %lld\n", i+1, count);	
		}
	
	}
	
}
