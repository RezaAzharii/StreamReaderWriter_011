#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar Di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan Tidak Akan Dieksekusi" << endl;
	}
}