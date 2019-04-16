#include <iostream.h>
#include <conio.h>

main() {
	int a,b,mod;
   float hasil;
   cout<<"contoh penggunaan / dn %\n\n";
   cout<<"masukkan angka pertama (a)= ";cin>>a;
   cout<<"masukkan angka kedua   (b)= ";cin>>b;
   hasil=a/b;
   mod=a%b;
   cout<<"\nHasil pembagian			= "<<hasil;
   cout<<"\nSisa hasil bagi			= "<<mod;
   getch(); }