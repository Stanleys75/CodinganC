#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int tc;
	scanf("%d",&tc);
	int X,Y;
	
	for(int i=0;i<tc;i++){
		scanf("%d %d",&X,&Y);
		int A[1000];
		for(int j=1;j<=X;j++){
			scanf("%d",&A[j]);
		}
		
		int count=0;
		for(int i=1;i<=X-1;i++){
			for(int j=X;j>= i+1;j--){
				if(A[i]>A[j]){
					swap(&A[i],&A[j]);
					count++;
				}
			}
		}
//			for(int k=1;k<=X;k++){
//				printf("%d ",A[k]);
//			}
			printf("Case #%d: %d", i+1, count*Y);
			printf("\n");
	}
}
