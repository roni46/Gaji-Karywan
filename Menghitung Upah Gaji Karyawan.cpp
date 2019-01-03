#include<stdio.h>
#include<conio.h>
int main()
{

char nama[50];
long upah,jam;
printf("PROGRAM MENGHITUNG UPAH GAJI PER JAM SEORANG PEGAWAI\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
printf("Masukkan Nama Karyawan : ");scanf("%[^\n]",&nama);
printf("Jam Kerja : ");scanf("%i",&jam);
printf("----------------------------------------------\n");
upah=5000*jam;
printf("Nama Karyawan : %s\n",nama);
printf("Upah Kerja :Rp %d ",upah);
getch();
}
