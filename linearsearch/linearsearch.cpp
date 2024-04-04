#include <iostream> // Menyertakan pustaka iostream untuk input-output.
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum fungsi-fungsi standar.

int arr[20]; // Deklarasi array arr dengan panjang 20.
int n; // Variabel untuk menyimpan jumlah elemen array.
int i; // Variabel iterasi.

void input() // Fungsi untuk mengambil input jumlah dan elemen array.
{
	while (true) //melakukan loop tak terbatas
	{
		cout << "Enter the number of elements in the array: "; // Meminta input jumlah elemen array.
		cin >> n; // Mengambil input jumlah elemen.
		if ((n > 0) && (n <= 20)) // Memeriksa apakah jumlah elemen valid.
			break; // Keluar dari loop jika valid.
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n"; // Memberikan pesan kesalahan jika tidak valid.
	}
	cout << "\n-------------------\n"; // Pesan pembatas.
	cout << "Masukkan elemen array \n"; // Pesan untuk meminta pengguna memasukkan elemen array
	cout << "\n-------------------\n"; // Pesan pembatas.
	for (i = 0; i < n; i++) // Loop untuk memasukkan setiap elemen array
	{
		cout << "<" << (i + 1) << ">"; //Menampilkan nomor elemen yang sedang dimasukkan
		cin >> arr[i]; // Memasukkan elemen ke dalam array
	}
}

void LinearSearch() //Fungsi untuk melakukan pencarian linear
{
}
int main()
{
}