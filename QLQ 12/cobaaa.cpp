#include<stdio.h>
#include<string.h>

struct Mahasiswa{
	char nama[101];
	int nilai[101];
};

struct Mahasiswa Data[101];
int N;
char temp[101];
char tempp[101];

void SortNama(){
    
    for(int i=0;i<N;i++){
    	
      for(int j=1;j<N-1;j++){
      	
        if(strcmp(Data[i].nama,Data[j].nama) > 0){
         	
            struct Mahasiswa tempp = Data[i];
				Data[i] = Data[j];
				Data[j] = tempp;
        } 
      }
    }
}

void SortNilai(){
    
    for(int i=0;i<N;i++){
    	
      for(int j=i+1;j<N;j++){
      	
        if(Data[i].nilai < Data[j].nilai){
           struct Mahasiswa temp = Data[i];
          				 	Data[i] = Data[j];
          					Data[j] = temp;
        } 
      }
    }
}

int main(){
	
	int T;
	scanf("%d",&T);
	

	for (int i=0;i<T;i++){
		scanf("%d", &N);
		for(int j=0;j<N;j++){
			scanf("%[^#]#%s", &Data[j].nama, &Data[j].nilai);
		}
		
		SortNama();
		SortNilai();
		
		printf("Case #%d:", i+1);
		for (int k=0;k<N;k++){
			
			if(k==N-1){
				printf("%s - %s\n", Data[k].nama, Data[k].nilai);
			} else {
				printf("%s - %s", Data[k].nama, Data[k].nilai);
			}
			
		}
		
	}	
}
