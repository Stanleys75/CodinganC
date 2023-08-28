#include<stdio.h>

int main(){
	int T,N,M,j,k;
	int arr[100001];
	int temp;
	
	scanf("%d", &T);
	for(int i=1;i<=T;i++){
		scanf("%d",&N);
		int jumlah=0;
		M =0;
		
		for(j=0;j<N;j++){
			scanf("%d", &arr[j]);
		}
		
		for(j=0;j<N-1;j++){
			for(k=0;k<N-j-1;k++){
				if(arr[k+1]>arr[k])
				{
					temp = arr[k+1];
					arr[k+1]=arr[k];
					arr[k]=temp;
					
				}
				
			}
		
		
		}
		for(int l=0;l<N;l++){
			while (l<N-1 && arr[l] == arr[l+1]){
				M++;
			}			
			
		}
		
	
			printf("Case #%d: %d\n",i, M);

		
		
	}
	return 0;
}
