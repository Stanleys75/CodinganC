#include<stdio.h>
#include<string.h>

void Sort2(char ab[][201], int a, int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			for(int k=1;k<b-j;k++){
				if(ab[i][k-1] > ab[i][k]){
					char tempp;
					tempp = ab[i][k-1];
					ab[i][k-1]= ab[i][k];
					ab[i][k] = tempp;
				}
				
			}
			
		}
	}	
}

void Sort(char a[][201], int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(strcmp(a[j-1],a[j])<0){
				char temp[201];
				strcmp(temp,a[j-1]);
				strcmp(a[j-1],a[j]);
				strcmp(a[j],temp);
			}
		}
	}	
}


int main(){
	int a,b;
	
	scanf("%d %d",&a, &b); getchar();
	char huruf[201][201];
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%c", &huruf[i][j]);	
		}
		getchar();
	}
	
	Sort2(huruf,a,b);
	Sort(huruf,a);
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%c", huruf[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
