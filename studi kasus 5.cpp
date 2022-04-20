#include <iostream>
#include <string>
using namespace std;

class hitung{
	friend ostream& operator<<(ostream&, const hitung&);
	friend istream& operator>>(istream&, hitung&);
	public:
		hitung();
		void itung(){(total-semua);};
		private:
		string nm,pd,makul;
    long int nim;
    int a,mk,sks,semua,jumlah;
    int total;
	int ts;
	int tarif;
    int diskon;};
	
	hitung::hitung(){
	for (a=0; a<mk; a++){
        cout<<" Matkul      : ";cin>>makul;
        cout<<" sks : ";cin>>sks;
        ts+=sks;
        total=tarif*ts;
    	semua=total*0.15;
    } 
	}
	istream& operator>>(istream& in, hitung& masukkan){
    cout<<"----------------------------------------"<<endl;
    cout<<" Nama      : ";in>>nm;
    cout<<" NIM       : ";in>>nim;
    cout<<" Prodi     : ";in>>pd;
    cout<<"----------------------------------------"<<endl;
    cout<<" Input Jumlah matkul : ";in>>mk                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"----------------------------------------"<<endl;
	return in;
	}
    ostream& operator<<(ostream& out, const hitung& keluaran){
	cout<<"----------------------------------------"<<endl;
    cout<<" Total SKS       : ";out<<keluaran.ts<<endl;
    cout<<" Total Tarif SKS Sebelum diskon : ";out<<keluaran.total<<endl;
	cout<<" Total Tarif SKS Setelah diskon : ";out<<keluaran.itung()<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"----------------------------------------"<<endl;
	return out;}
	main(){
		hitung x;
		cin>>x;
		x.itung()
		cout<<x;
		getch();
		return 0;
	}
}


