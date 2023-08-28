#include <stdio.h>

int main() {
    long long int a[100000], number, i, j;
    int T;
    
    scanf("%d", &T);
    for(int Test=1;Test<=T;Test++){
    	scanf("%lld", &number);
    	printf("Case #%d: ", Test);
    	
    	for(i=0; number>0; i++){
      	 	a[i] = number % 2;
      		number = number / 2;
   		}
    
   		for(j =i-1;j>= 0; j--)  {
        	printf("%lld", a[j]);
    	}
    	
    	printf("\n");
	}
   

    return 0;
}
