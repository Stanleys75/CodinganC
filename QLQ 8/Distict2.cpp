#include <stdio.h>

int main(){
	int n,T;
	int p,count;
	
	
	scanf("%d", &T);
	
	for (int tc=1; tc<=T; tc++){
		scanf("%d", &n);
		int x[n];
		for(int i=0; i<n; i++){
			scanf("%d", &x[i]);
		}
		
		p=0;
		for (int j=0; j<n; j++){
			if(x[j]>p){
				p=x[j];
			}
		}
		
		int  y[p];
		for (int k=0; k<p; k++){
			y[k]=0;
		}
		
		for (int l=0; l<n; l++){
			y[x[l]]++;
		}
		
		count=1;
		for (int m=0; m<p; m++){
			if(y[m]>0){
				count++;
			}
		}
		printf ("Case #%d: %d\n", tc, count);
	}
	return 0;	
}
