#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main() {
	int a,b,mod;
	float bagi;
   cout<<"\n\tContoh penggunan / dan %\n\n";
   cout<<"\tMasukkan angka pertama (a)= ";cin>>a;
   cout<<"\tMasukkan angka kedua	  (b)= ";cin>>b;
   bagi=float(a)/b;
   mod=a%b;
   cout<<"\n\tHasil Pembagian			= "<<setiosflags(ios::fixed)<<setprecision(3)<<bagi;
   cout<<"\n\tSisa hasil bagi 		="<<mod;
   getch();}