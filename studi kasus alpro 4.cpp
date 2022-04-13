#include <iostream>
#include <conio.h>
using namespace std;
class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
	public:
	Hitung();
	void sisa(){jumlah = (a-b-c);}
	private:
	int a,b,c,n;
	int jumlah;
};
	Hitung::Hitung(){
		cout<<"Program menghitung pemasukan dan pengeluaran tiap bulan Andi"<<endl;
		
}
	istream& operator>>(istream& in, Hitung& masukkan){
		
		cout<<"Masukkan jatah uang jajan andi tiap bulan : ";in>>a;
		cout<<"Masukkan jumlah kebutuhan kuliah andi : ";in>>b;
		cout<<"Masukkan kebutuhan jajan andi : ";in>>c;
		return in;
	}
	ostream& operator<<(ostream& out, const Hitung& keluaran){
		out<<"Uang jatah Andi perbulan : "<<keluaran.a<<endl;
		out<<"Kebutuhan kuliah Andi : "<<keluaran.b<<endl;
		out<<"Kebutuhan jajan andi : "<<keluaran.c<<endl;
	return out;
	
	}
	
	main(){
		Hitung x;
		cin>>x;
		x.sisa()
		cout<<x;
		getch();
		return 0;
	}
}
	

