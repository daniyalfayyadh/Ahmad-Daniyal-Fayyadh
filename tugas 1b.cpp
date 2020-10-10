/*tugas pemrograman pertama billing warnet*/
/*menghitung lama pemakaian dan biaya yang harus dibayar*/
#include<stdio.h>
#include<conio.h>
main ()
{
	int mpukul,spukul,jam_,menit_,detik_,biaya_;
	printf("\n\n------billing warnet ahmad daniyal fayyadh------");
	printf("\n      NIM=20051397037");
	printf("\n\n");
	
	printf("-----Harap Mengisi Terlebih Dahulu-----\n");
	printf("\n     Mulai Pukul="); scanf("%d",&mpukul);
	printf("     Sampai Pukul="); scanf("%d",&spukul);
	jam_=spukul-mpukul;
	menit_=jam_*60;
	detik_=jam_*3600;
	biaya_=jam_*5000;
	
	printf("\n\n     Lama Pemakaian:");
	printf("\n     lama pemakaian dalam jam=%d",jam_);printf(" jam");
	printf("\n     lama pemakaian dalam menit=%d",menit_);printf(" menit");
	printf("\n     lama pemakaian dalam detik=%d",detik_);printf(" detik");
	printf("\n\n     tagihan yang harus anda bayar =%d",biaya_);printf(" rupiah");
	printf("\n     biaya perjam =5000 rupiah");

	printf("\n\n\n-----terima kasih atas kunjungan anda-----");
	getch();
	return 0;

	
	
	
	
}
