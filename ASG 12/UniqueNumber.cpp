#include<stdio.h>
	
int main(){
	int n;
	int countt;
	scanf("%d", &n);
	
	int arr[100001];
	
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	int p = 0;
	for(int j=0;j<n;j++){
		if(arr[j]>p){
			p= arr[j];
		}
	}
	
	int y[p];
	for(int k=0;k<p;k++){
		y[k] = 0;
	}
	
	for(int l=0;l<n;l++){
		y[arr[l]]++;
	}
	countt = 1;
	for (int m=0;m<p;m++){
		if(y[m]>0){
			countt++;
		}	
	}

	printf("%d\n",countt);
	
	return 0;
}
