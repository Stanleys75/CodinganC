#include<stdio.h>

int main(){
	int T,A,B,C;
	
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		scanf("%d %d %d", &A,&B,&C);
		int Hasil = 0;
		Hasil = A * B / 100;
		if(Hasil >= C){
			printf("Case #%d: %d\n",i , C);
		} else {
			printf("Case #%d: %d\n",i , Hasil);
		}
	}
	
	return 0;
}
