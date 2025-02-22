#include <iostream>   // Ini dipakai buat input-output, seperti cout dan cin
#include <cstring>    // Ini dipakai buat fungsi manipulasi string, misalnya strlen, strcpy, strupr
using namespace std;

// Fungsi buat ngitung jumlah huruf vokal di dalam teks yang diketik user
int hitungVokal(const char teks[]) {
	char vokal[] = "aiueoAIUEO";  // Daftar huruf vokal, baik huruf kecil maupun besar
	int jumlah = 0;  // Buat nyimpen jumlah huruf vokal

	// Loop buat ngecek satu per satu huruf dalam teks
	for (int i = 0; teks[i] != '\0'; i++) {
		// Loop buat ngecek apakah huruf ini termasuk dalam daftar vokal
		for (int j = 0; vokal[j] != '\0'; j++) {  
			if (teks[i] == vokal[j]) { // Kalau huruf cocok sama salah satu di daftar vokal
				jumlah++; // Tambah hitungan huruf vokalnya
				break; // Langsung lanjut ke huruf berikutnya biar lebih efisien
			}
		}
	}
	return jumlah; // Balikin jumlah huruf vokal yang udah dihitung
}

// Fungsi buat ubah semua huruf jadi huruf besar
char* ubahKapital(char teks[]) {
	static char hasil[100]; // Variabel statis buat nyimpen hasil teks yang udah diubah
	strcpy(hasil, teks);  // Copy teks asli ke variabel hasil
	strupr(hasil); // Ubah semua huruf kecil jadi huruf besar
	return hasil; // Balikin hasil teks yang udah diubah ke kapital
}

int main() {
	char kalimat[100];  // Bikin variabel buat nyimpen teks yang diketik user
	
	cout << "Masukkan Kalimat: ";  // Minta user masukin teks
	cin.getline(kalimat, 100);  // Ambil input kalimat sampai maksimal 100 karakter
	
	// Tampilkan jumlah karakter dalam kalimat yang diketik
	cout << "Jumlah karakter: " << strlen(kalimat) << endl;

	// Ubah kalimat jadi huruf kapital dan tampilin hasilnya
	cout << "Kalimat dalam huruf kapital: " << ubahKapital(kalimat) << endl;

	// Hitung jumlah huruf vokal dalam kalimat dan tampilin hasilnya
	cout << "Jumlah huruf vokal: " << hitungVokal(kalimat) << endl;  
	
	return 0; // Program selesai dengan sukses
}

