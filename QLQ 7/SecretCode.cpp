#include<stdio.h>
#include<string.h>

int main(){
	int x;
	char s[1000];
	int i,j;
	
	scanf("%d", &x);
	for(i=1;i<=x;i++){
		scanf("%s", &s);
		printf("Case %d: ",i);
		
		for(j=strlen(s)-1;j>=0;j--){
			
			
			printf("%d", s[j] % 2);
			
		}
		printf("\n");
	}
	return 0;
}
