#include <iostream>
using namespace std;

struct zodiak {
		string nama_zodiak;
		int tanggal1, bulan1, tanggal2, bulan2;
	};

int main()
{
    int tanggal_lahir, bulan_lahir;

	zodiak aturan[12];
    //assign aturan zodiak ke array nama, tanggal, dst...
    //name, tanggal awal mulai, bulan awal, tanggal selesai, bulan selesai.
	aturan[0] = { "Aquarius", 20, 1, 18, 2 };
	aturan[1] = { "Pisces", 19, 2, 20, 3 };
	aturan[2] = { "Aries", 21, 3, 19, 4 };
	aturan[3] = { "Taurus", 20, 4, 20, 5 };
	aturan[4] = { "Gemini", 21, 5, 20, 6 };
	aturan[5] = { "Cancer", 21, 6, 22, 7 };
	aturan[6] = { "Leo", 23, 7, 22, 8 };
	aturan[7] = { "Virgo", 23, 8, 22, 9 };
	aturan[8] = { "Libra", 23, 9, 22, 10 };
	aturan[9] = { "Scorpio", 23, 10, 21, 11 };
	aturan[10] = { "Sagitarius", 22, 11, 20, 12 };
	aturan[11] = { "Capricorn", 22, 12, 19, 1 };

	cout << "Program untuk mengetahui zodiak dari tanggal dan bulan seseorang" << endl;
	cout << "Tolong masukkan tanggal dan bulan lahir anda (dalam bentuk angka) : ";
	cin >> tanggal_lahir >> bulan_lahir;

	for (int i = 0; i < 12; i++)
    {
		if ((tanggal_lahir >= aturan[i].tanggal1 && bulan_lahir == aturan[i].bulan1) ||
			(tanggal_lahir <= aturan[i].tanggal2 && bulan_lahir == aturan[i].bulan2))
			cout << "Zodiak anda adalah " << aturan[i].nama_zodiak;
	}
	return 0;
}
