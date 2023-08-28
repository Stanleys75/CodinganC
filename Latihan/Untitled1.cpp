#include<stdio.h>

int N;
int s[1001];

void sort(){
	for (int i=0;i<N;i++){
		for (int j=0;j<N-i-1;j++){
			if(s[j]>s[j+1]){
				int temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
}


int main(){
	
	int test;
	
	scanf("%d",&test);
	for (int k=0;k<test;k++){
		scanf("%d", &N);
		
		for (int i=0;i<N;i++){
			scanf("%d", &s[i]);
		}	
		sort();
		int min =0;
		int hasil[10001];
		for (int j=0;j<N;j++){
			hasil[j] = s[j+1]-s[j];
			if(hasil[j]>hasil[j+1]){
				hasil[j+1]= hasil[j];
			}
		}
		
		printf("%d",hasil[0]);
	}

}
