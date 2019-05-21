                                 #include<iostream.h>
#include<conio.h>

void tukarAB(int &a, int &b)

{
	int temp;
   temp = a;
   a = b;
   b = temp;
   	cout<<"Dalam Fungsi Tukar AB \n";
      cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;
       // fungsi bertipe void todak mengembalikan nilai8

      }
   int main()
   {
   	int a,b;
      cout<<"Masukan Nilai a   : ";cin>>a;
       cout<<"Masukan Nilai b   : ";cin>>b;
       cout<<"\n nilai a dan b sebelum masuk  fungsi tukarAB  : \n";
       cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;

       // a dan b di kirim ke fungsin tukarAB
       tukarAB(a,b);
       cout<<"\n ilai a dan b sesudah masuk  fungsi tukarAB  : \n";
       cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;
      getch();
   	return (0);
}
