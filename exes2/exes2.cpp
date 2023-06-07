#include <iostream>
#include <string>
using namespace std;

class lingkaran;
class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {

	}
	virtual float Luas(int a) {
		return 0;
	}
	virtual float Keliling(int a) {
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukkan jari-jari lingkaran: ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}

};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		int s;
		cout << "Masukkan panjang sisi bujursangkar: ";
		cin >> s;
		setX(s);
	}

	float Luas(int s) {
		return s * s;
	}

	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	bidangDatar* bidang;

	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	int pilihan;
	cout << "Pilih bidang :\n";
	cout << "1. Lingkaran\n";
	cout << "2. Bujursangkar\n";
	cout << "Memilih : ";
	cin >> pilihan;

	switch (pilihan) {
	case 1:
		bidang = &lingkaran;
		bidang->input();
		cout << "Luas Lingkaran: " << bidang->Luas(bidang->getX()) << endl;
		cout << "Keliling Lingkaran: " << bidang->Keliling(bidang->getX()) << endl;
		break;
	case 2:
		bidang = &bujursangkar;
		bidang->input();
		cout << "Luas Bujursangkar: " << bidang->Luas(bidang->getX()) << endl;
		cout << "Keliling Bujursangkar: " << bidang->Keliling(bidang->getX()) << endl;
		break;
	default:
		cout << "Pilihan tidak valid." << endl;
	}

	return 0;

};