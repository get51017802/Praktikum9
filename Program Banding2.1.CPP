#include<iostream.h>
#include<conio.h>

void tukarAB(int a, int b)

{
	int temp;
   temp = a;
   a = b;
   b = temp;
   	cout<<"Dalam Fungsi Tukar AB \n";
      cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;
       // fungsi bertipe void tidak mengembalikan nilai

      }
   int main()
   {
   	int a,b;
      cout<<"Masukan Nilai a   : ";cin>>a;
       cout<<"Masukan Nilai b   : ";cin>>b;
       cout<<"\n nilai a dan b sebelum masuk  fungsi tukarAB  : \n";
       cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;

       // a dan b di kirim ke fungsi tukarAB
       tukarAB(a,b);
       cout<<"\n ilai a dan b sesudah masuk  fungsi tukarAB  : \n";
       cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;
      getch();
   	return (0);
}


