#include<stdio.h>

long long int N,M;
long long int arr[100001];
long long int arr2[100001];

//void swap (long long int *a, long long int *b){
//	long long temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void sort(){
//	for (int i=1;i<N;i++){
//		long long int temp = arr[i];
//		long long int j = i-1;
//		while (arr[j] > temp && j>= 0){
//			arr[j+1]=arr[j];
//			j--;
//		}
//		arr[j+1] = temp;
//	}
//}

int main(){
		
	scanf("%lld %lld", &N,&M);
	for(int i=0;i<N;i++){
		scanf("%lld", &arr[i]);
	}
	
	for(int j=0;j<M;j++){
		scanf("%lld", &arr2[j]);
	}
	
	int temp =0;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(arr2[i]==arr[j]){
				arr[j] = 0;
			}	
		}	
	}
//	sort();
	if(arr[N-1] == 0){
		printf("Maximum number is -1\n");
	} else {
		printf("Maximum number is %lld\n", arr[N-1]);
	}

}
