#include<stdio.h>

int main(){
	int kasus;
	scanf("%d", &kasus);
	
	int panjang;
	int tambah;
	for(int i = 0; i < kasus; i++){
		scanf("%d %d", &panjang, &tambah);
		
		int angka[panjang];
		for(int j = 0; j < panjang; j++){
			scanf("%d", &angka[j]);
		}
		
		long long int temp;
		int total = 0;
		for(int i = 0; i < panjang; i++){
			for(int j = 0; j < panjang - 1; j++){
				if(angka[j] > angka[j + 1]){
					temp = angka[j];
					angka[j] = angka[j + 1];
					angka[j + 1] = temp;
					total = total + tambah; 
				}
			}
		}
		
		printf("Case #%d: %d\n", i+1, total);
		
		
	}
	
	
	
	
	return 0;
}
