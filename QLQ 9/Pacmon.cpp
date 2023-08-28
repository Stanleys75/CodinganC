#include<stdio.h>

int count = 0;
char arr[101][101];
int N=0;
int M=0;
int totalx;
int totaly;

void floodfill(int x,int y){
    
    if (arr[x][y]=='*'){
   	    count++;	
	}
    if(arr[x][y] == '#'|| arr[x][y]==' '|| x<0 || y<0 || x>=totalx || y>=totaly){
        return;
    } else {
    	arr[x][y] = '#';
	}
    floodfill(x+1,y);
    floodfill(x-1,y);
    floodfill(x,y+1);
    floodfill(x,y-1);
}
   
int main(){
	int T;
	scanf("%d", &T); getchar();
	
	for ( int i=0;i<T;i++){
		scanf("%d %d",&N, &M); 
		
		int barisx,barisy;
		totalx=N;
		totaly=M;
		
		for (int j=0;j<N;j++){
			for (int k=0;k<M;k++){
			
				scanf("%c", &arr[j][k]);
				if(arr[j][k]=='P'){
					barisx = j;
					barisy = k;
				}
			}
		}
		floodfill(barisx,barisy);
		
		printf("Case #%d: %d\n",i+1, count);
		count = 0;
		totalx = 0;
		totaly = 0;
		N = 0;
		M = 0;
		
		for(int j = 0; j < 255; j++){
            for(int k = 0; k < 255; k++){
                arr[j][k] = ' ';
            }
        }
	}
	return 0;
}
