#include<iostream.h>
#include<conio.h>
#include<math.h>

int hitung( int x,int y) // x dan y = parameter input
 {
	int ls;
	ls=x * y;
return(ls);
}
void main()
{
	int pilih;
   int panjang,lebar,alas,tinggi,sisi;
   float luas;
   do
   	{
      	clrscr();
         	cout<<"Pilihlah --------> "<<endl;
            cout<<"1.Luas Persegi Panjang \n";
            cout<<"2.Luas Segitiga \n";
            cout<<"3.Luas Bujur Sangkar\n";
            cout<<"4.SELESAI\n";
            cout<<"Masukan piliahn Anda  : ";cin>>pilih;

            switch(pilih)
            {
            	case 1 : cout<<"Masukan Nilai Panjang : ";cin>>panjang;
               		    cout<<" Masukan Nilai Lebar  : ";cin>>lebar;
                         luas = hitung(panjang,lebar);
                         break;

               case 2 : cout<<"Masukan Nilai Alas : ";cin>>alas;
               		    cout<<" Masukan Nilai Tinggi : ";cin>>tinggi;
                         luas = hitung(alas,tinggi) * 0.5;
                         break;
               case 3 : cout<<"Masukan Nilai Sisi : ";cin>>sisi;
                         luas = hitung(sisi,sisi);
                         break;
               case 4 : cout<<"Terima Kasih.........";
            }

            if (pilih !=4)
            cout<<"Luasnya Adalah : "<<luas;

      getch();
      }
      while (pilih !=4);
      }


