#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

	double getradius();
	double square(double);
int main()

{

const double phi = 3.14159;
double rad;

	//cout <<fixed<<shovpoint<<setprecions(2);

	cout<<"Program Ini Untuk Menghitung Luas Lingkaran : \n";
   cout<<"==============================================\n";
   rad = getradius();
   cout<<"Luasnya Adalah : "<<phi * square(rad) <<endl;
   getch();
   return 0;
}
	double getradius()
   {
   	double radius;
      cout<<"Masukan Jari - jari Lingkaran : ";cin>>radius;
      return radius;
   }

   	double square(double number)
      {
      	return number * number;
}

