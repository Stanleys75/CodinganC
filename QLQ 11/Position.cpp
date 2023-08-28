#include<stdio.h>

int posisi(int angka[], int a, int l, int r) {
     if (r >= l){
         int mid = l + (r - l) / 2;
        if(angka[mid] == a){
              if(angka[mid - 1] == a){
                   return posisi(angka, a, l, mid-1);
                       if(angka[mid - 1] != a){
                        return posisi(angka, a, l, mid + 1);
                    }else if(angka[mid-1] != a && angka[mid] == a){
                         return mid;
                    }            
               }
               
                   return mid+1;
          }if (angka[mid] > a){
               return posisi(angka, a, l, mid - 1);
          }if(angka[mid] <a ){
              return posisi(angka, a, mid + 1, r);
          }
     }
       return -1;
}


int main(){
	int N,M;
	
	scanf("%d %d", &N,&M);
	
	int Arr[N+10];
	for(int i=0;i<N;i++){
		scanf("%d", &Arr[i]);
	}
	
	int letak;
	for(int j=0;j<M;j++){
		scanf("%d", &letak);
		printf("%d\n", posisi(Arr, letak,0,N-1));
	}
	


	
	return 0;
}
