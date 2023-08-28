#include<stdio.h>
#include<string.h>

int main(){
	int N,T;
	char s1[10001],s2[10001],z[10001];
	
	scanf("%d",&N);
	for(int i=1;i<=N;i++){ 
		scanf("%d %s %s", &T, &s1, &s2);  
		printf("Case #%d: ",i);
		for(int i=0;i<=T;i++){
			strcpy(z,s1);
			strcpy(s1,s2);
			strcat(s2,z);
		}
		printf("%s", z);
		printf("\n");
	}
}
