#include <iostream>
#include <string>
using namespace std;

void my_print(const string &text) {
    cout << text << endl;
}

int main() {
    string text;

    my_print("Ala ma kota");
    my_print("Podaj text");
    getline(cin, text);
    string newText = "Nowy Tekst = " + text;
    my_print(newText);

    return 0;
}