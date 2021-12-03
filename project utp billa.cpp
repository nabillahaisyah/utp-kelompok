#include <iostream>
using namespace std;

/* Kelompok : 9
   kelas : D
   Nama Anggota : 1. Nabillah Aisyah
                  2. Walid Ilham
                  3. Nurul Fadilah
   Tema : Kasir Toko  Pakaian
*/

double jumlah;

double pajak (){
	double x = jumlah;
	return x*0.1;
}
double total(){
	double x = jumlah;
	double y = pajak();
	return x+y; 
}
void header (){
	cout << "======================================================"<<endl;
	cout << "\t\t WELCOME TO CNB STORE \t\t"<<endl;
	cout << "======================================================"<<endl;
}
void closeHeader (){
	cout << "======================================================"<<endl;
	cout << "\t\t THANK YOU \t\t"<<endl;
	cout << " \t\t HAPPY SHOPPING \t\t"<<endl;
	cout << "======================================================"<<endl;
}

int main (){
	
	string nama, namabarang, ya;
	int jumlahtransaksi;
	double harga [10], bayar, kuranguang;
	char kodebarang;
	
	do {
	system("CLS");
	header (); 
	cout <<endl;
	
	cout <<"BERIKUT LIST BARANG YANG DAPAT KAMU BELI"<<endl;
	cout <<"1. T-Shirt All Size\t Rp. 80000"<<endl;
	cout <<"2. Kemeja All Size\t Rp. 120000"<<endl;
	cout <<"3. Crewneck All Size\t Rp. 150000"<<endl;
	cout <<"4. Knit All Size\t Rp. 90000"<<endl;
	cout <<"5. Dress All Size\t Rp. 180000"<<endl;
	cout <<"6. Jacket All Size\t Rp. 200000"<<endl;
	cout <<"7. Cardigan All Size\t Rp. 70000"<<endl;
	
	cout <<endl;
	cout <<"Nama Customer\t\t :";getline (cin, nama);
	cout << "Hi " << nama;
	cout << " Selamat Datang di CNB Store!" <<endl;
	cout <<endl;
	cout <<"Jumlah Transaksi\t :" ; cin >> jumlahtransaksi;
	cout <<endl;
	
	int beli[jumlahtransaksi];
	for (int x=1; x<=jumlahtransaksi; x++){
		    cout << "Barang ke-" << x <<endl; 
			cout << "Kode Barang [1/2/3/4/5/6/7]\t : "; cin >> kodebarang;
		if (kodebarang == '1'){
			cout << "Barang yang anda pilih\t : T-Shirt All Size"<<endl;
			harga[x]=80000;
		} else if (kodebarang == '2'){
			cout << "Barang yang anda pilih\t : Kemeja All Size"<<endl;
			harga[x]=120000;
		} else if (kodebarang == '3'){
			cout << "Barang yang anda pilih\t : Crewneck All Size"<<endl; 
			harga[x]=150000;
		} else if (kodebarang == '4'){
			cout << "Barang yang anda pilih\t : Knit All Size"<<endl; 
			harga[x]=90000;
		} else if (kodebarang == '5'){
			cout << "Barang yang anda pilih\t : Dress All Size"<<endl; 
			harga[x]=180000;
    	}else if (kodebarang  == '6'){
    		cout << "Barang yang anda pilih\t  : Jacket All Size"<<endl;
    		harga[x]=200000;
		}else if (kodebarang  == '7'){
			cout << " Barang yang anda pilih\t : Cardingan All Size"<<endl;
			harga[x]=70000;
		} else {
			cout << "Kode Barang Yang Anda Masukkan tidak Tersedia" <<endl; 
		}
		jumlah += harga[x];
	}
	
	cout <<endl;
	cout << "Jumlah Bayar\t\t :" "Rp. " << jumlah <<endl;
	cout << "Pajak(10%)\t\t :" <<"Rp. " <<pajak() <<endl;
	cout << "Total Bayar\t\t :" << "Rp. " <<total () <<endl;
	cout << "Bayar\t\t\t :" << "Rp. "; cin >> bayar;
	for (int y=1; y<=bayar; y++){
		if (bayar<total()){
			cout <<"===Uang Anda Tidak Mencukupi==="<<endl;
			cout << "silakan transaksi kembali : Rp. "; 
			cin >> kuranguang;
			bayar += kuranguang;
		}
	}
	cout << "Kembali\t\t\t :" << "Rp. " << bayar-total() <<endl;
	cout <<endl;
	cout << "Apakah anda ingin membeli lagi?  [Y/T] : "; cin >> ya;
	cout <<endl;
	cin.ignore(1, '\n');

    jumlah = 0;	
	}
	while (ya == "Y"    || ya =="y");
	cout <<endl;
	closeHeader ();
	
	return 0;
}
