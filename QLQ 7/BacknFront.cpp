#include<stdio.h>
#include<string.h>

int main(){
	int x,a,b,c,i,j,k;
	char huruf[101];
	char huruf2[101];
	char huruf3[101];
	
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		scanf(" ");
		scanf("%c", &huruf[i]);
	
	}
	printf("%c",huruf[a]);
	printf("%c",huruf[1]);
	printf("\n");
	
	scanf("%d", &b);
	for(j=1;j<=b;j++){
		scanf(" ");
		scanf("%c", &huruf2[j]);
		
	}
	printf("%c",huruf2[b]);
	printf("%c",huruf2[1]);
	printf("\n");
	
	scanf("%d", &c);
	for(k=1;k<=c;k++){
		scanf(" ");
		scanf("%c", &huruf3[k]);
		
	}
	printf("%c",huruf3[c]);
	printf("%c",huruf3[1]);
	printf("\n");
	
	return 0;
}
