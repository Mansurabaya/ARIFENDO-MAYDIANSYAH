#include <iostream>
#include <cmath>
using namespace std;


int main() {
	char input = 0;

	cout << "================MENU===============\n";
    cout << "1.Luas persegi panjang\n";
    cout << "2.Keliling persegi panjang\n ";
    cout << "3.Panjang diagonal persegi panjang\n";
    cout << "4.Keluar program\n";
    cout << "==================================\n";
    cout << "\n";
    int x;
    cout << "Pilihan anda :";

    while (1) {
	    cin >> input;
	    if (input == '1') {
		    int p, l;
		    int sum;
		    cout << "Panjang :";
		    cin >> p;
		    cout << "Lebar :";
		    cin >> l;
		    sum = p*l;
		    cout << "Luas persegi panjang :";
		    int x;
		    cout << "Pilihan anda :";
		}
		else if (input == '2') {
			int p, l;
			int sum;
			cout << "Panjang :";
			cin >> l;
			cout << "lebar :";
			cin >> l;
			sum = sqrt(p*p + l*l);
			cout << "Keliling persegi panjang :" << sum << "\n\n";
			int x;
			cout << "Pilihan anda :";
		}
        else if (input == '3') {
        	int p, l;
        	int sum;
        	cout << "Panjang :";
        	cin >> p;
        	cout << "Lebar :";
        	cin >> l;
        	sum = sqrt(p*p + l*l);
        	cout << "Panjang diagonal :" << sum;
		}
		else if(input == '4') {
			cout << "\n\n\n";
			cout << "         program selesai      ";
			exit (0);
		}
		else if(input != '\n') {
			cout << "Maaf '" << input << "' tidak ada di menu\n\n";
			int x;
			cout << "Pilihan anda :";
		}
	}
	return 0;
    }
