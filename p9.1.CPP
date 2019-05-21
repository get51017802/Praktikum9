#include<iostream.h>
#include<conio.h>

void luas (int &ls, int p,int l)
{ls = p*l;}

main()
{
	int pj,lb,hsl;
   	cout<<"Menghitung Nilai Segitiga  : \n";
      cout<<"=============================\n";
   	cout<<"Masukan Nilai Untuk Panjang : ";cin>>pj;
      cout<<"Masukan Nilai Untuk Lebar : ";cin>>lb;
      luas(hsl,pj,lb);
      cout<<"\nHasil Untuk Luasnya Adalah : "<<hsl;

   getch();
}
