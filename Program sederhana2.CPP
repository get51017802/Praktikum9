
       #include<iostream.h>

       int bil,pangkat;     // variabel global bernama bil dan pangkat
       int perpangkatan();  // prototipe fungsi perpangkatan

       int main()
       {
       	cout<<"Masukan Bilangan Yang Akan Dipangkatkan : ";cin>>bil;
         cout<<"Masukan Pangkat Dari Bilangan Tersebut : ";cin>>pangkat;
         cout<<"Hasilnya Adalah : "<<perpangkatan();
         return (0);
       }
       	int perpangkatan()
         {
         int i, hasil =1; // variabel lokal untuk fungsi perpangkatan
         if (pangkat < 0 )
         hasil=0;  //diasumsikan bila pangkat < 0 adalah 0
         else //pangkat > 0
         {for (i=0; i<pangkat; i++) // jika pangkat=0, maka for
         		 hasil *=bil;			// tidak dilakukan
         }                            // ulangi sampai nilai i=pangkat

          return (hasil);


}
