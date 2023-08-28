#include <stdio.h>

struct familyDetail{
    char ayah[100];
    char ibu[100];
    char jumlahsaudara[101];
};
struct student{
    char Code[100];
    char Name[100];
    char Gender[100];
    struct familyDetail family;
};
struct lecturer{
    char lCode[100];
    char lName[100];
    char lGender[100];
    int nStudent;
    struct student students[100];
};

int main(){
  int T;
  scanf("%d",&T);
  struct lecturer l[T];
  for(int n = 0; n < T;n++){
    scanf(" %[^\n]", l[n].lCode);
    scanf(" %[^\n]", l[n].lName);
    scanf(" %[^\n]", &l[n].lGender);
    scanf(" %d", &l[n].nStudent);
    
    for(int i = 0; i < l[n].nStudent; i++){
      scanf(" %[^\n]", &l[n].students[i].Code);
      scanf(" %[^\n]", &l[n].students[i].Name);
      scanf(" %[^\n]", &l[n].students[i].Gender);
      scanf(" %[^\n]", &l[n].students[i].family.ayah);
      scanf(" %[^\n]", &l[n].students[i].family.ibu);
      scanf(" %s", &l[n].students[i].family.jumlahsaudara);
    }
  }
  int th;
    scanf(" %d", &th);
    printf("Kode Dosen: %s\n", l[th-1].lCode);
    printf("Nama Dosen: %s\n", l[th-1].lName);
    printf("Gender Dosen: %s\n", l[th-1].lGender);
    printf("Jumlah Mahasiswa: %d\n", l[th-1].nStudent);
    
    for(int i = 0; i < l[th-1].nStudent; i++){
      printf("Kode Mahasiswa: %s\n", l[th-1].students[i].Code);
      printf("Nama Mahasiswa: %s\n", l[th-1].students[i].Name);
      printf("Gender Mahasiswa: %s\n", l[th-1].students[i].Gender);
      printf("Nama Ayah: %s\n", l[th-1].students[i].family.ayah);
      printf("Nama Ibu: %s\n", l[th-1].students[i].family.ibu);
      printf("Jumlah Saudara Kandung: %s\n", l[th-1].students[i].family.jumlahsaudara);
    }
  return 0;
}
