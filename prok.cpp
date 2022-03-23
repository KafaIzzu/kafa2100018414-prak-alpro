#include<iostream>
using namespace std;
main(){
	int pesanan, jumlah, total, harga, ttl;
	
	cout<<"Pilihan Menu"<<endl;
	cout<<"1. Ayam Goreng"<<endl;
	cout<<"2. Ayam Bakar"<<endl;
	cout<<"Masukkan Pesanan = ";cin>>pesanan;
	cout<<"Jumlah Pesanan = ";cin>>jumlah;
	cout<<endl;
	
	if (pesanan==1){
	 cout<<"Anda telah membeli Ayam Goreng"<<endl;
	 cout<<"Harga satuan 17.000"<<endl;
	 cout<<"Berjumlah "<<jumlah<<endl;
	 harga = 17000;
	 total = harga * jumlah;
	 cout<<"Total Pesanan Anda = Rp "<<total<<endl;}
	 
	else
	if (pesanan==2){
	 cout<<"Anda telah membeli Ayam Bakar"<<endl;
	 cout<<"Harga satuan 21.000"<<endl;
	 cout<<"Berjumlah "<<jumlah<<endl;
	 harga = 21000;
	 total = harga * jumlah;
	 cout<<"Total Pesanan Anda = Rp "<<total<<endl;}
	
	if (total >= 45000){
		cout<<"Selamat Anda telah mendapat diskon 10%"<<endl;
		ttl = total * 0.1;
		cout<<endl;
	
		cout<<"=============================="<<endl;
		cout<<"==== STRUK PEMBAYARAN ===="<<endl;
		cout<<"=============================="<<endl;
		cout<<"Pilihan pesanan "<<"\t"<<"Jumlah pesanan "<<endl;
		cout<<"\t"<<pesanan<<"\t\t\t"<<jumlah<<endl;
		cout<<"Jumlah bayar (sebelum diskon) = Rp "<<total<<endl;
		cout<<"Total bayar = Rp "<<total - ttl<<endl;
		cout<<"Selamat Datang Kembali!"<<endl;}
		
	else if (total <= 45000){
		cout<<"Maaf, Anda tidak mendapat diskon karena belum memenuhi maksimal pembelian"<<endl;
		cout<<"Selamat Datang Kembali!"<<endl;}
		
	}
