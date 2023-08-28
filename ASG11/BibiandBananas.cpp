#include<stdio.h>

int main(){
	int T,N,K;
	int arr[100001];
	
	scanf("%d", &T);
	for(int i=1;i<=T;i++){
		scanf("%d %d", &N, &K);
		
		for(int j=1;j<=N;j++){
			scanf("%d", &arr[j]);
			
		}	
		
		int temp = 0;
		for (int k=1;k<=N;k++){
			if (arr[k]==K){
				temp++;
			} else if (arr[k]>K){
				temp++;
			}
		}
		printf("Case #%d: %d\n", i,temp);
	}
	
}
