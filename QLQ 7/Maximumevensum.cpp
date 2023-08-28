#include<stdio.h>

int main(){
	long long int a,x,i;
    long long int arr[100001];
	long long int sum = 0;
	long long int sum2 = 0;
	long long int sum3 = 0;
	long long int temp = 0;
	long long int lenghtmin=100001;
	
	scanf("%lld", &x);
	for(i=1;i<=x;i++){
		scanf("%lld", &arr[i]);
		
		if(arr[i] % 2 == 0 ){
			sum += arr[i];
		} 
			if (arr[i] % 2 != 0){
				sum2 += arr[i];
				if(lenghtmin>arr[i]){
					lenghtmin = arr[i];
				}	
					if(sum2%2 == 0){
						sum3 = sum2;
					} else if (sum2%2 != 0){
						sum3 = sum2 - lenghtmin;
					}
				
			}	
		
	}
	temp = sum + sum3;
	printf("%lld\n", temp);
	

	return 0;
}
