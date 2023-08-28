#include<stdio.h>

long long int rumus(long long int angka){
	return (angka*(angka+1)*(2*angka+1))/6;
}

long long int how ( long long int l, long long int r, unsigned long long int number){
	long long int sign = -1;
	
	while (l<=r){
		long long int mid = (l+r)/2;
		if (rumus(mid)>=number){
			sign = mid;
			r = mid-1;
		} else {
			l = mid + 1;
		}
	}
	return sign;
}

int main(){
	long long int N,M;
	scanf("%lld", &N);
	
	for(long long int i=0;i<N;i++){
		scanf("%lld", &M);
		printf("Case #%lld: %lld\n", i+1, how(1,20000000,M));

	}
	
}
