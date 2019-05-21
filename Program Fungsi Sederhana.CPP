#include<iostream.h>
#include<conio.h>
#include<math.h>

	int panjang,lebar; //deklarasi variabel global

	void input(); //deklarasi prototipe fungsi

	void luas()
   {
   	int ls; //deklarasi variabel lokal
      ls = panjang * lebar;
      cout<<" Luasnya Adalah : "<<ls;
   }
   	void keliling()
      {
      	int kl; //deklarasi variabel lokal
         kl = (2* panjang) + (2*lebar);
         cout<<"Kelilingnya Adalah : "<<kl;
      }
      void Diagonal()
      {
      	float dg; // deklarasi variavel lokal
         dg = sqrt ((panjang * panjang) + (lebar*lebar));
         cout<<"Diagonalnya Adalah : "<<dg;
      }
      void main()
      {
      int pilih;
       do
       {
       	clrscr();
         cout<<"Pilihlah -------> "<<endl;
         cout<<"1. Luas Persegi Panjang \n";
         cout<<"2. Keliling Persegi Panjang \n";
         cout<<"3. Diagonal Persegi Panjang \n";
         cout<<"4.SELESAI \n";
         cout<<". Masukan Pilihan Anda   : ";cin>>pilih;

         if (pilih  !=4)
         input();       //pemanggilan fungsi input
         switch (pilih)
         {
         case 1 : luas();         //pemanggilan fungsi luas
                  break;
         case 2 : keliling();         //pemanggilan fungsi keliling
                  break;
         case 3 : Diagonal();         //pemanggilan fungsi diagonaal
                  break;
         case 4  : cout<<"Terima Kasih ..!";
         }
         getch();
         }
         while (pilih !=4);
       }
       void input()
       {
       	cout<<"Masukan Nilai Panjang : ";cin>>panjang;
         cout<<"Masukan Nilai Lebar : ";cin>>lebar;
         return;
       }

