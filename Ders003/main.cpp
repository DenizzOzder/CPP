#include <iostream>
using namespace std;
/*Kullanıcıdan 3 sayı girişi alı sayılar arasında en büyük ve en küçük sayıyı bulan kod*/
int main() {
    int sayi1, sayi2, sayi3;
    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;
    cout << "İkinci sayiyi girin: ";
    cin >> sayi2;
    cout << "Üçüncü sayiyi girin: ";
    cin >> sayi3;

    int enBuyuk = sayi1;
    int enKucuk = sayi1;

    if (sayi2 > enBuyuk)
        enBuyuk = sayi2;
    if (sayi3 > enBuyuk)
        enBuyuk = sayi3;

    if (sayi2 < enKucuk)
        enKucuk = sayi2;
    if (sayi3 < enKucuk)
        enKucuk = sayi3;

    cout << "En buyuk sayi: " << enBuyuk << endl;
    cout << "En kucuk sayi: " << enKucuk << endl;

    return 0;
}