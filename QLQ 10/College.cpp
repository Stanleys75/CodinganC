#include<stdio.h>

int main(){
	int N;
	char nama[101][101];
	char NIM[101][101];
	int umur[101];
	int kodepos[101];
	char tempatlahir[101][101];
	char tanggallahir[101][101];
	char almamaterSMA[101][101];
	int jumlahsaudarakandung[101];
	int tinggibadan[1001];
	int nomorrekening[101];
	
	scanf("%d", &N);
	for(int i=1;i<=N;i++){
		getchar();
		scanf(" %[^\n]", nama[i]); 
		scanf(" %[^\n]", &NIM[i]); 
		scanf("%d", &umur[i]); 
		scanf("%d", &kodepos[i]); 
		scanf(" %[^\n]", tempatlahir[i]); getchar();
		scanf(" %[^\n]", tanggallahir[i]); getchar();
		scanf(" %[^\n]", almamaterSMA[i]); getchar();
		scanf("%d", &jumlahsaudarakandung[i]); 
		scanf("%d", &tinggibadan[i]);
		scanf("%d", &nomorrekening[i]); 
	}
	for(int j=1;j<=N;j++){
		printf("Mahasiswa ke-%d:\n",j);
		printf("Nama: %s\n", nama[j]);
		printf("NIM: %s\n", NIM[j]);
		printf("Umur: %d\n", umur[j]);
		printf("Kode Pos: %d\n", kodepos[j]);
		printf("Tempat Lahir: %s\n", tempatlahir[j]);
		printf("Tanggal Lahir: %s\n", tanggallahir[j]);
		printf("Almamater SMA: %s\n", almamaterSMA[j]);
		printf("Jumlah Saudara Kandung: %d\n", jumlahsaudarakandung[j]);
		printf("Tinggi Badan: %d\n", tinggibadan[j]);
		printf("NOMOR REKENING: %d\n", nomorrekening[j]);
	}
	
}
