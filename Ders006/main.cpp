#include <iostream>
using namespace std;

int main() {

	// Arrays
	int numbers[5] = { 1, 2, 3, 4, 5 };
	int array[] = { 10, 20, 30, 40, 50 }; // Farklı bir tanımlama şekli

	// Exercise

	/*
		Kullanıcıdan 4 adet sınav notu girilmesini iste,
		Bu 4 not dizi içerisinde tutulacak
		Dizideki notların ortalaması hesaplanacak
		Ortalama ekrana yazılacak
	*/

	//int notlar[4];
	//double toplam = 0, ortalama;
	//for(int i = 0; i < 4; i++)
	//{
	//	cout << "Lütfen " << i + 1 << ". sınav notunu giriniz: ";
	//	cin >> notlar[i];
	//	toplam += notlar[i];
	//	cout << endl;
	//}
	//cout << "Ortalama: " << toplam / 4 << endl;
	//return 0;

	// Exercise 2
	/*
		Kullanıcıdan 4 adet sınav notu
		Her sınav notunun genel ortalamaya farklı yüzdelerde ağırlıklarla katıldığını varsayacaz örnek:
		1. Sınav: %15
		2. Sınav: %25
		3. Sınav: %30
		4. Sınav: %40
		Bu ağırlıklar ayrı bir dizide tutulacak.
		Bu notların toplamı ve Ortalamasını ekrana bastırın.

	*/
	//const int SIZE = 4;
	//double notlar[SIZE];
	//double agirliklar[SIZE] = { 0.15, 0.15, 0.30, 0.40 };
	//double toplam = 0, ortalama = 0;

	//for(int i = 0; i< SIZE; i++)
	//{ 
	//	cout << "Lütfen " << i + 1 << ". sınav notunu giriniz: ";
	//	cin >> notlar[i];
	//	toplam += (notlar[i] * agirliklar[i]);
	//}
	//ortalama = toplam / SIZE ;
	//cout << "Ortalama: " << ortalama << endl;
	//cout << "Toplam: " << toplam << endl;
/* ---------------------------------------------------------------------------- */
	// Multi Dimensional Arrays - Matris

	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	cout << arr[0][0] << endl; // 1
	cout << "---------------------------------" << endl;

	//Bütün diziyi yazdıralım.
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Matris Exercise

	/*
		1. Kullanıcıdan 2 adet 3x2 Matris elemanlarını alacksınız
		2. 2 Matrisin elemanlarını toplayıp 3x2 lik yeni bir matrise aktaracaksınız.
	*/

	/*int matris1[3][2], matris2[3][2], toplamMatris[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Matris 1 için [" << i << "][" << j << "] elemanını giriniz: ";
			cin >> matris1[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Matris 2 için [" << i << "][" << j << "] elemanını giriniz: ";
			cin >> matris2[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			toplamMatris[i][j] = matris1[i][j] + matris2[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Toplam Matris [" << i << "][" << j << "]: " << toplamMatris[i][j] << endl;
		}
	}*/

	// Arrays with Functions

	int dizi[] = { 3,9,12,5,10,1,3 };
	diziDegistir(dizi, 7);
	for (int i = 0;i < 7; i++)
	{
		cout << dizi[i] << " ";

	}
}

// Out of Main Function
void diziDegistir(int arr[], int size){
	for (int i = 0; i < size;i++)
	{
		arr[i] += 1;
	}
}