#include <iostream>

#include "Dortgen.h"

int main() {
    {
        using namespace std;

        Dortgen a(2.3, 4.5, 6.7, -8.9), b(-3, -3, 9, -13), enb;

        a.yaz();
        cout << "\nEn=" << a.getEn() << " Boy=" << a.getBoy() << endl;
        cout << "Cevre=" << a.getCevre() << ", Alan=" << a.getAlan() << endl;

        cout << endl;

        b.yaz();
        cout << "\nEn=" << b.getEn() << " Boy=" << b.getBoy() << endl;
        cout << "Cevre=" << b.getCevre() << ", Alan=" << b.getAlan() << endl;

        enb = a.buyukOlan(b);
        cout << "\nBuyuk olan" << endl;
        enb.yaz();

        cout << "\nKare olduktan sonra" << endl;
        enb.kareYap();
        enb.yaz();
    }

    return 0;
}
