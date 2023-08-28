#include<stdio.h>

int main(){
	unsigned int x,z;
	unsigned int y;
	unsigned int i,j;
	
	scanf("%u", &x);
	for(i=1;i<=x;i++){
		
		z = 0; int zz = 0;
		scanf("%u", &y);
		for (j=1;j*j<=y;j++){
		
			if((y % j)==0 && j*j!=y){
				z++;
			} else if(j*j == y){
				zz++;
			} else {
				z += 0;
				zz+= 0;
			}
		}		
		printf("Case #%u: %u\n",i, z*2 + zz);
	}
	return 0;
}
