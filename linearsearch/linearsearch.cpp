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
	}
}
int main()
{
}