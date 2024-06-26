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

	// Terima element array
	cout << "\n-------------------\n"; // Pesan pembatas.
	cout << "Enter array elements \n"; // Pesan untuk meminta pengguna memasukkan elemen array
	cout << " --------------------\n"; // Pesan pembatas.
	for (i = 0; i < n; i++) // Loop untuk memasukkan setiap elemen array
	{
		cout << "<" << (i + 1) << ">"; //Menampilkan nomor elemen yang sedang dimasukkan
		cin >> arr[i]; // Memasukkan elemen ke dalam array
	}
}

void LinearSearch() //Fungsi untuk melakukan pencarian linear
{
	char ch; // Variabel untuk menyimpan pilihan pengguna
	int ctr; // variabel untuk menghitung jumlah perbandingan
	int item; // Variabel untuk menyimpan elemen yang akan dicari

	do // Melakukan loop untuk memungkinkan pengguna melakukan pencarian berulang
	{
		// terima nomor untuk dicari
		cout << "\nEnter the element you want to search: "; // Meminta pengguna untuk memasukkan elemen yang akan dicari // step 1
		cin >> item; // Membaca elemen yang akan dicari dari pengguna

		ctr = 0; // Mengatur jumlah perbandingan awal menjadi 0
		i = 0; // Mengatur nilai iterasi awal menjadi 0 // 2
		while (i < n) // Melakukan pencarian linear selama iterasi kurang dari jumlah elemen array // 3
		{
			ctr++; // Menambah jumlah perbandingan
			if (arr[i] == item) // Jika elemen ditemukan dalam array
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl; // Menampilkan pesan bahwa elemen ditemukan beserta posisinya // step 6
				break; // Keluar dari loop pencarian
			}
			i++; // Pindah ke elemen berikutnya dalam array //step 4
		}

		if (i == n) // Jika iterasi mencapai batas (tidak ditemukan dalam array) // step 5
			cout << "\n" << item << " not found in the array\n" ; // Menampilkan pesan bahwa elemen tidak ditemukan
		cout << "\nNumber of comparisons: " << ctr << endl; // Menampilkan jumlah perbandingan yang dilakukan

		cout << "\nContinue search (y/n): "; // Meminta pengguna untuk melanjutkan pencarian atau tidak
		cin >> ch; // Membaca pilihan pengguna

	} while ((ch == 'y') || (ch == 'Y')); // Melakukan loop selama pengguna ingin melanjutkan pencarian
}

void display() // Fungsi untuk menampilkan elemen array
{
	cout << "Array elements are:"; //Menampilkan pesan sebelum menampilkan elemen array
	for (i = 0; i < n; i++)
		cout << arr[i] << " "; // Menampilkan elemen-elemen array
	cout << endl;
}

int main() //fungsi utama program
{
	input(); // Memanggil fungsi untuk memasukkan elemen array
	LinearSearch(); // Memanggil fungsi untuk melakukan pencarian linear
	display(); // Memanggil fungsi untuk menampilkan elemen array
}