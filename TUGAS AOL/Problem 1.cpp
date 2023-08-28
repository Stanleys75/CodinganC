#include<stdio.h>

int main(){
	int N;
	int count = 0;
	
	printf("Ukuran Matriks: ");
	scanf("%d", &N);
	
	int matriks[N][N];
	
	printf("Masukkan element matriks %dx%d: \n",N,N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d", &matriks[i][j]);
		}
	}
	printf("Centroid at %d,%d\n", N/2, N/2);
	int Border = N * N;
	int arrx[N],arry[N];
	
	int flag = 0;
	
	for(int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			if(i == N/2 && j == N/2){
				continue;
			} else if (matriks[i][j] == matriks[N/2][N/2] && ((i - N/2) * (i - N/2) + (j - N/2) * (j - N/2)) < Border){
				count = 0;
				Border = (i - N/2) * (i - N/2) + (j - N/2) * (j - N/2);
				arrx[count] = i; arry[count] = j;
				count++; flag = 1;
			} else if (matriks[i][j] == matriks[N/2][N/2] && ((i - N/2) * (i - N/2) + (j - N/2) * (j - N/2)) == Border){
				arrx[count] = i;
				arry[count] = j;
				count++;
			}
		}
	}
	
	if(flag == 0){
		printf("Nearest same element is at: no neares element\n");
	} else {
		printf("Nearest same element is at: ");
		for (int i=0;i<count;i++){
			if(count == 1){
				printf("%d,%d\n", arrx[i], arry[i]);
			} else if (i==0){
				printf("%d,%d ", arrx[i], arry[i]);
			}else if (count > 2){
				printf(", %d,%d", arrx[i], arry[i]);
			} else if (count-1 == i){
				printf("and %d,%d\n", arrx[i], arry[i]);
			}
		}
	}
	
	return 0;
}
