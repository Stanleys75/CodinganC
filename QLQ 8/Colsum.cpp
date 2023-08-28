#include<stdio.h>

int main(){
	int N;
	int arr[501][501];
	int a,b;
	int jumlah =0;
	
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d", &a);
		
		
		for(int j=1;j<=a;j++){
			for (int k=1;k<=a;k++){
				scanf("%d", &arr[j][k]);
			}
		}
		printf("Case #%d:",i);
		
		for (int k=1;k<=a;k++){
			jumlah = 0;
			for(int j=1;j<=a;j++){
				jumlah += arr[j][k];
				
			}
			printf(" %d", jumlah );
		}
		printf("\n");
		
		
		
	}
	
	
	return 0;
}
