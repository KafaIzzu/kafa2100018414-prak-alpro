#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;
class penginapan{
public:
char kode[5],*nama[5];
int harga[5],lama[5];
long int bayar[5];
void main(){
float total;
int i,j;
penginapan hotel;
cout<<" Studi Kasus 8 "<<endl;
cout<<"=================================================================="<<endl;
cout<<"Masukan jumlah data =";cin>>j;
	for (i=1;i<=j;i++){
cout<<"Data barang ke- :"<<i<<endl;
cout<<"Masukan kode barang :";cin>>kode[i];
if (kode[i]=='A'||kode[i]=='a')
 {nama[i]=="logitech";
 harga[i]=130000; 
 }
else if (kode[i]=='B'||kode[i]=='b')
 {nama[i]=="Microsoft";
 harga[i]=200000;
 }
 else if (kode[i]=='C'||kode[i]=='c')
 {nama[i]=="Apple";
 harga[i]=231000;
 }
 else if (kode[i]=='D'||kode[i]=='d')
 {nama[i]=="Philips";
 harga[i]=190000;
 }
else
 {nama[i]=="Dell";
 harga[i]=141000;
 }
cout<<"Nama Barang :"<<nama[i]<<endl;
cout<<"Harga satuan :"<<harga[i]<<endl;
cout<<"Masukkan jumlah :";cin>>lama[i];
bayar[i]=lama[i]*harga[i];
cout<<"total bayar :"<<bayar[i]<<endl;
cout<<endl;
}

cout<<"=================================================================="<<endl; 
cout<<"Nama \t\t Stok \t Harga satuan"<<endl;
cout<<"=================================================================="<<endl;
for (i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<nama[i];
cout<<setiosflags(ios::right)<<setprecision(2)<<setw(10)<<lama[i];
cout<<setiosflags(ios::right)<<setprecision(8)<<setw(12)<<harga[i];
cout<<endl;
total=total+bayar[i];
}
cout<<"=================================================================="<<endl;
cout<<"total = Rp"<<setprecision(10)<<total<<endl<<endl;
}};


 
