#include<stdio.h>

int main(){
    int N;
    char ID[30001][10];
    char Nama[30001][20];
    double Harga[30001];
    int median;
    
    scanf("%d", &N); 
    for(int i=0;i<N;i++){
        scanf("%s\n", &ID[i]);
        scanf("%[^\n]\n", &Nama[i]);
        scanf("%lf", &Harga[i]); 
    }
    median= N/2;

    for(int i=0;i<N;i++){
        if(Harga[i]>=Harga[median]){
        
            printf("%s %s\n", ID[i], Nama[i]);
        
        }
     
    }
    return 0;
}
