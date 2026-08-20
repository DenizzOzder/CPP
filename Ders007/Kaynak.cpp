#include <iostream>
#include <string>
using namespace std;
// C++ string class methods: insert, erase, append, replace, substr, length, at 
// Exercise
int main() {
	string s = "programlari";

	s.insert(0, "C++ ");
	s.erase(11, 3);
	s.append(" yazmak cok zevkli!");
	s.replace(12, 7, " kodlamak");

	cout << s << endl; // C++ programi kodlamak cok zevkli!
	cout << s.substr(0, 10) << endl; // C++ program
	cout << "Uzunluk: " << s.length() << endl; // Uzunluk: 33
	cout << "bir karakter: " << s.at(s.length() - 1) << endl; // bir karakter: !) <<
}