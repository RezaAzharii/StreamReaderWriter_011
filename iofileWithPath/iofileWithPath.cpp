#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namafile+".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//Selesai dalam menulis sekarang tutup filenya
	outfile.close();


}
