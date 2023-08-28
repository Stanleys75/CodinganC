#include<stdio.h>
#include<string.h>

int main(){
	int T;
	int a,b,c,d;
	char e[2];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	
		a=0;
		c=0;
		scanf("%d:%d ", &a,&c); 
		scanf("%s", e); getchar();
		
		if(strcmp(e,"pm")){
			if (c<10){
				if(a==12){
					a = a-12;
					printf("Case #%d: 0%d:0%d\n",i+1,a,c);
				}else if(a==10||a==11){
					printf("Case #%d: %d:0%d\n",i+1,a,c);
				}else {
					printf("Case #%d: 0%d:0%d\n",i+1,a,c);
				}
			} else {
				if(a==12){
					a = a-12;
					printf("Case #%d: 0%d:%d\n",i+1,a,c);
				}else if(a==10||a==11){
					printf("Case #%d: %d:%d\n",i+1,a,c);
				}else {
					printf("Case #%d: 0%d:%d\n",i+1,a,c);
				}
			}
			
		}else if (strcmp(e,"am")){
			if(c<10) {
				if(a==12){
					a=12;
					printf("Case #%d: %d:0%d\n",i+1,a,c);
				} else if (a==10||a==11){
					a = a+12;
					printf("Case #%d: %d:0%d\n",i+1,a,c);
				} else{
					a= a+12;
					printf("Case #%d: %d:0%d\n",i+1,a,c);
				}	
			} else {
					if(a==12){
						a=12;
						printf("Case #%d: %d:%d\n",i+1,a,c);
					} else if (a==10||a==11){
						a = a+12;
						printf("Case #%d: %d:%d\n",i+1,a,c);
					} else{
						a= a+12;
						printf("Case #%d: %d:%d\n",i+1,a,c);
					}		
			}
			
		}
	}
	return 0;
}
