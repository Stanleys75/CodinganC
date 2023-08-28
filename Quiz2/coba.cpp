#include<stdio.h>

int binarySearch (int arr[], int low, int high, int x){
	if (low > high){
		return -1;;
	}
	int mid = low + (high - low) / 2;
	if (arr[mid] == x){
		return mid;
	}	
	if (arr[mid] > x){
		return binarySearch (arr, low, mid - 1, x);
	}	
	if (arr[mid] < x){
		return binarySearch (arr, mid + 1, high, x);
	}
	return -1;
}

int main(){
	int T,N,F,j;
	int Arr[1001];
	
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		scanf("%d", &N);
		
		int temp;
		
		for(j=0;j<N;j++){
			scanf("%d", &Arr[j]);
							
		}
		scanf("%d", &F);
	
		
		for(int k=0;k<N;k++){
			for(int l=0;l<N-k-1;l++){
				if(Arr[l] > Arr[l+1]){
					temp = Arr[l];
					Arr[l] = Arr[l+1];
					Arr[l+1] = temp;
				}
			}
		}
		int cari = binarySearch(Arr,0, N-1, F);
		
		
		if(cari == -1 ){
			printf("CASE #%d: -1 -1\n",i+1);
		}else {
			if(cari == N-1){
				printf("CASE #%d: %d %d\n",i+1, Arr[cari-1],F);	
			}else {
				printf("CASE #%d: %d %d\n",i+1, F, Arr[cari+1]);
			}
		}
	
	
	return 0;
	}
}
