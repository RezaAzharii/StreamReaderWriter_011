#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar Di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan Tidak Akan Dieksekusi" << endl;
	}

	catch (int a) {
		//Blok ini akan dieksekusi
		cout << "Pengecualian Tidak Akan Di Eksekusi" << endl;
	}

}