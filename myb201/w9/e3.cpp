
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// cikis dosyasi, output file stream
	ofstream of;
	// dosya acma
	of.open("ornek.txt");

	// dosya acik mi kontrolu
	if(of.is_open()) {
		cout << "-- dosya acma basarili" << endl;
		// dosyaya yazma
		of << "bu bir ornek dosya" << endl;
		// dosyayi kapatma
		of.close();

		return 0;
	}
	else {
		cout << "-- dosya acilamadi\n";
		return 1;
	}
}
