#include <iostream>
#include <cmath> // Pakai cmath karena butuh sqrt (akar kuadrat)
using namespace std;

bool cekPrima (int n) { // Fungsi buat ngecek apakah angka itu bilangan prima atau bukan
	if (n < 2) return false; // Kalau angkanya kurang dari 2, pasti bukan prima
	if (n == 2 || n == 3) return true;// 2 dan 3 itu bilangan prima
	if (n % 2 == 0 || n % 3 == 0) return false;// Kalau habis dibagi 2 atau 3, berarti bukan prima
	
	for (int i = 5; i <= sqrt(n); i += 6) {// Cek dari 5 sampai akar kuadrat dari n, lompat 6 biar lebih cepat (optimasi)
		if (n % i == 0 || n % (i + 2) == 0) return false;// Kalau habis dibagi i atau i+2, bukan prima
	}
	return true; // Kalau semua cek lolos, berarti ini bilangan prima
	
}
int main() {
	int angka;// Variabel buat nyimpen angka yang mau dicek
	
	cout<<" Masukkan Angka: "; // Minta pengguna masukin angka
	cin>> angka;// Baca input dari pengguna
	
	cout << angka << (cekPrima(angka) ? " adalah bilangan prima." : " bukan bilangan prima.") <<endl;  // Cek apakah angka itu prima atau bukan, terus tampilkan hasilnya
	return 0;// Program selesai dengan sukses
}
