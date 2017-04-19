#include <iostream>
using namespace std;


	typedef struct 
	{
		string noKA;
		string namaKA;
	} kereta;
	
	typedef struct 
	{
		string nama;
		string ktp;
	} penumpang;
	
	typedef struct 
	{
		string jam;
		string menit;
		string detik;
	} jam;
	
	typedef struct 
	{
		string hari;
		string bulan;
		int tahun;
	} tanggal;
	
	typedef struct 
	{
		string kotaAsalKA;
		string kotatujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
		string harga;
	} jadwalKA;
	

int main (){
	penumpang Reni_rina;
	kereta KA;
	jadwalKA tiket;
	
	
	KA.noKA = "BDO-PARAHYANGAN-0103";
	KA.namaKA = "PERAHYANGAN";
	
	tiket.tanggalBerangkat.hari = "Selasa, 17";
	tiket.tanggalBerangkat.bulan = " Januari ";
	tiket.tanggalBerangkat.tahun = 2007;
	
	tiket.waktuBerangkat.jam = "Pukul 12:00 ";
	tiket.waktuTiba.jam = "- 19:00 WIB"; 
	
	cout << "Masukan Nama : ";
	cin >> Reni_rina.nama;
	cout << "Masukan No KTP : ";
	cin >> Reni_rina.ktp;
	
	cout << " Kota Tujuan : ";
	cin >> tiket.kotatujuanKA;
	cout << " Kota Asal : ";
	cin >> tiket.kotaAsalKA;
	
	if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 137.000";
	}
	else if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Jakarta"){
		tiket.harga = "Rp. 157.000"; 
	}
	else if (tiket.kotatujuanKA == "Gombong" && tiket.kotaAsalKA == "Bandung") {
		tiket.harga = "Rp. 120.000";
	}
	else if (tiket.kotatujuanKA == "Malang" && tiket.kotaAsalKA == "Jakarta"){
		tiket.harga = "Rp. 444.000";
	}
	else {
			tiket.harga = "Rp. 0 "; 
	}
	
	
	cout << endl; 
	cout << "=========== DATA PERJALANAN ===========" << endl;
	cout << "---------------------------------------" << endl;
	
	cout << "No Kereta Api : " << KA.noKA << endl;
	cout << "Nama Kereta Api : " << KA.namaKA << endl << endl;
	
	cout << "Nama Penumpang : " << Reni_rina.nama << endl;
	cout << "No KTP : " << Reni_rina.ktp << endl << endl;
	
	cout << "Biaya : " << tiket.harga << endl;

	cout << "Tanggal Berangkat : " << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl; 
	
	cout << "Waktu Keberangkatan - Waktu Tiba : " << tiket.waktuBerangkat.jam << tiket.waktuTiba.jam << endl; 
	
	return 0; 
}
