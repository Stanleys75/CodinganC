#include<stdio.h>

void quick(int arr[], int kiri, int kanan){
	
	int a= kiri;
	int b = kanan;
	int temp;
	int tengah = arr[(kiri+kanan/2)];
	
	while(a<b){
		while (arr[a]<tengah){
			a++;
		}
		while(arr[b]>tengah){
			b--;
		}
		
		if(a<=b){
			temp = arr[a];
			arr[a]=arr[b];
			arr[b]=temp;
			a++;
			b--;
		}
	}
	if(kiri<b){
		quick (arr,kiri,b);
	if(a<kanan){
		quick (arr,a,kanan);
	}
	}
}

int main(){
	int n,a;
	int arr[100001];
	
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		scanf("%d",&n);
		int jumlah=0;
		int M = 0;
		
		for(int j=0;j<n;j++){
			scanf("%d", &arr[j]);
			
		}
		
		
		quick(arr,0,n);
		for(int j=0;j<n;j++){
			
			if(arr[j]!=jumlah){
				jumlah=arr[j];
				M++;				
			}
		}
		
	
			printf("Case #%d: %d\n",i, M);
	}
	
	
	
}
