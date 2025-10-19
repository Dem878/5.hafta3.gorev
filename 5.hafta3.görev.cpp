#include <iostream>
using namespace std;

void bolunmeKontrol(int sayi) {
    if (sayi % 5 == 0) {
        cout << "Tam bölünür." << endl;
    } else {
        cout << "Kalan: " << sayi % 5 << endl;
    }
}

int main() {
    bolunmeKontrol(13); // Örnek bir sayı
    bolunmeKontrol(20); // Başka bir örnek sayı
    return 0;
}
