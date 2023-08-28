#include<stdio.h>
#include<string.h>

int main(){
	int N;
	char a[1001];
	int l;
	
	scanf("%d",&N); getchar();
	for(int i=1;i<=N;i++){
		scanf("%[^\n]", &a); getchar();
		l = strlen(a);
		
		printf("Case #%d: ",i);
//		for(int j=0;j<=l;j++){
//			if (a[j]>='A' && a[j]<='Z'){
//				a[j] += 32;
//			}else if (a[j]>='a' && a[j]<='z'){
//				a[j] -= 32;
//			}
//		}
		
		for(int j=l-1;j>=0;j--){
			printf("%c",a[j]);
		}	
		printf("\n");
	}

}
