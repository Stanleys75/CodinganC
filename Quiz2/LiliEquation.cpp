#include<stdio.h>

int T(int M,int N){
	
	if(M>=0 && N==0){
		return 1;
	} else if(M==0 && N>=0){
		return 1;
	} else if(M>0 && N>0){
		return T(M-1,N-1) + T(M-1,N) + T(M,N-1);
	}
}





int main(){
	int M,N;
	
	scanf("%d %d,", &M, &N);
	int hasilnya = T(M,N);
	
	printf("%d\n", hasilnya);
	
	return 0;
}
