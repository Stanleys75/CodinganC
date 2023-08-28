#include<stdio.h>

int main(){
	long int N,A,B;
	
	scanf("%ld", &N);
	for(int i=1;i<=N;i++){
		scanf("%ld %ld", &A, &B);
		
		for(int j=1;j<=10000;j++){
		
		if(A!=B){
			if (A==1){
				A = 1;
			}else if(A % 2 == 0){
				A = A/2;
			}else if (A % 2== 1) {
				A = A * 3 + 1;
			}
		}
		}
		
		if (A==B){
			printf("Case #%d: YES\n",i);
		} else if(A==1 && A!=B){
			printf("Case #%d: NO\n",i);
		} else if (A!=B){
			printf("Case #%d: NO\n",i);
		}
		
	}
}
