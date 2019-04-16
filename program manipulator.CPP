#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

int nilai1;
float nilai2;
char nama[20];
double gaji;

void main()
 {
 	cout<<"Masukkan nilai bulat :  "; cin>>nilai1;
   cout<<"Tampilan nilai yang anda masukkan "<<endl;
   cout<<"menggunakan setw(8)  :"<<setw(8)<<nilai1<<endl;
   cout<<"menggunakan setw(-8) : "<<setw(-8)<<nilai1<<endl;
   cout<<"Menggunakan setw(8) dan setfill('*') : ";
   cout<<setfill('*')<<setw(8)<<nilai1<<endl;
   cout<<setfill ('  ');
   getch();
   clrscr;
   cout<<"masukkan nilai pecahan : ";
   cin>>nilai2;
   cout<<"tampilan nilai yang anda masukkan"<<endl;
   cout<<"menggunakan setiosflags(ios::fixed): "<<setiosflags(ios::fixed)<<nilai2<<endl;
   cout<<"menggunakan setiosflags(ios::scientific) : "<<setiosflags(ios::scientific)<<nilai2<<endl;
   cout<<resetiosflags(ios::scientific);
   cout<<"menggunakan setprecision(4) : ";
   cout<<setprecision(4)<<nilai2<<endl;
   getch();
   clrscr();
   cout<<"masukkan nama anda : ";
   cin>>nama;
   cout<<"masukkan uang saku anda perbulan :  ";
   cin>>gaji;
   cout<<"tampilan data yang anda masukkan "<<endl;
   cout<<"menggunakan setiosflags(ios::left) dan setiosflags(ios::right) : ";
   cout<<endl;
   cout<<setiosflags(ios::left)<<setw(25)<<"N A M A";
   cout<<setiosflags(ios::right)<<setw(10)<<"UANG SAKU"<<endl;
   cout<<setiosflags(ios::left)<<setw(25)<<nama;
   cout<<setiosflags(ios::right)<<setw(10)<<gaji;
   getch();
 }

