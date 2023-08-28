#include<stdio.h>
#include<string.h>

struct Data1{
	char nim[1001];
	char nama[10001];
}; struct Data1 daftar[100001];

long long int N;

void readfile(){
	FILE *read;
	read = fopen("testdata.in","r");
	fscanf(read, "%lld\n", &N);
	for(int i=0;i<N;i++){
		fscanf(read, "%s %[^\n]\n", &daftar[i].nim,&daftar[i].nama);
	}
	
	fclose (read);
}

int main(){
 	readfile();
	
	for(long long int i=0;i<N-1;i++){
		for(long long int j=i+1;j<N;j++){
			if(strcmp(daftar[i].nim,daftar[j].nim)>0){
				struct Data1 temp = daftar[j];
				daftar[j] = daftar[i];
				daftar[i] = temp;
			}
		}
	}
	
	for(int k=0;k<N;k++){
		printf("%s %s\n", daftar[k].nim, daftar[k].nama);
	}
	
}
