#include <iostream>
#include <vector> // Dizilerde İşlemleri İçin
#include <windows.h> // Türkçe Karakter Desteği

using namespace std;

int main() {
    // Türkçe Karakter Desteği
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sayi = 0;
    vector<int> sayilar;

    cout << "Lütfen bir tam sayı giriniz: ";
    cin >> sayi;

    for (int i = 2; i <= sayi; i++) {

        bool asal = true;

        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
                asal = false;
                break;
            }
        }

        if (asal) {
            cout << i << " ";
            sayilar.push_back(i);
        }
    }

    cout << endl << endl;
    cout << "Asal SAYILAR DİZİSİ: " << endl;

    for (int i = 0; i < sayilar.size(); i++) {
        cout << sayilar[i] << " ";
    }
}