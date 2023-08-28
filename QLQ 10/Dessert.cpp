#include<stdio.h>

int main(){
	long long int N;
	long long int hasil = 1;
	
	scanf("%lld",&N);
	for(int i=1;i<=N;i++){
		hasil *= 2 ;
	}
	
	printf("%lld\n",hasil-1);
}
