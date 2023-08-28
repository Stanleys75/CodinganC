#include<stdio.h>

int main(){
	int N,k;
	char Code[10001][10];
	char Day[1001][20];
	int Time[1001];
	
	scanf("%d",&N);
	getchar();
	for(int i=1;i<=N;i++){
		scanf("%s", &Code[i]);
		getchar();
		scanf("%s", &Day[i]);
		getchar();
		scanf("%d", &Time[i]);
		
	}
	
	scanf("%d", &k);
	getchar();
	int x[k];
	
	for(int i=1;i<=k;i++){
		scanf("%d",&x[i]) ;
		getchar();
		
		printf("Query #%d:\n", i);
		printf("Code: %s\n", Code[x[i]]);
		printf("Day: %s\n", Day[x[i]]);
		if(Time[x[i]] < 10){
			printf("Time: 0%d:00\n", Time[x[i]]);
		} else {
			printf("Time: %d:00\n", Time[x[i]]);
		}
	}
	return 0;
}
