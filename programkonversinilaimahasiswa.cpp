#include <iostream>
using namespace std;
char konversiNilai(int nilai) { // Fungsi untuk mengonversi nilai angka ke huruf
	if (nilai < 0 || nilai > 100) {
		return 'X'; // Jika nilai di luar rentang 0-100, maka dianggap tidak valid dan dikembalikan 'X'
	}
	else if (nilai >= 80) {
		return 'A';  // Jika nilai >= 80, maka mendapat huruf 'A'
	}
	else if (nilai >= 70) {
		return 'B'; // Jika nilai >= 70 dan kurang dari 80, maka mendapat huruf 'B'
	}
	else if (nilai >= 60) {
		return 'C';  // Jika nilai >= 60 dan kurang dari 70, maka mendapat huruf 'C'
	}
	else if (nilai >= 50) {
		return 'D'; // Jika nilai >= 50 dan kurang dari 60, maka mendapat huruf 'D'
	}
	else {
		return 'E';  // Jika nilai di bawah 50, maka mendapat huruf 'E'
	}
}


int main () {
	int nilai;  // Variabel untuk menyimpan nilai yang dimasukkan pengguna
	
	cout<<" Masukkan Nilai: "; // Menampilkan teks untuk meminta input pengguna
	cin>> nilai; // Menerima input nilai dari pengguna
	
	char huruf = konversiNilai(nilai);  // MemanggilkonversiNilai untuk dapat nilai huruf dari angka yang dimasukkan
	if (huruf == 'X') { // Jika hasil konversi adalah 'X', berarti nilai tidak valid
		cout<<" Nilai Tidak Valid!" <<endl; // Menampilkan pesan kesalahan
	}
	else { // Jika nilai valid, maka ditampilkan nilai hurufnya
		cout<<" Nilai Huruf: " <<huruf <<endl; 
	}
	return 0; // Mengembalikan 0 untuk menandakan program berjalan dengan sukses
	
}
