#include<stdio.h>
#include<string.h>

int main(){
	int x,y,n[201];
	int i,j,k,G;
	char kata[201];
	int lenght = 0;
	
	
	scanf("%d %d", &x, &y);
	scanf("%s", &kata);
	
	
	lenght = strlen(kata);
	
	for(i=0;i<y;i++){
		scanf("%d", &n[i]);
	}

	for(i=0;i<y;i++){	
		for(k=0;k<lenght;k++){
		
			if(n[i] == k){
				if(kata[k]>= 'a' && kata[k] <= 'z'){
					kata[k] -= 32;
				} else if (kata[k] >= 'A' && kata[k] <= 'Z'){
					kata[k] += 32;
				}
			}
		}
	}
	
		printf("%s\n", kata);
	
	return 0;
}
