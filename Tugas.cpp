#include <iostream>
using namespace std;

// Deklarasi class
class BelahKetupat;
class LayangLayang
{
private:
    double diagonal1, diagonal2, sisi1, sisi2;

public:
    void inputLayang();
    void luasLayang();
    friend void keliling(LayangLayang &a, BelahKetupat &b);
};

// Class Belah Ketupat
class BelahKetupat
{
private:
    double diagonal1, diagonal2, sisi;

public:
    void inputBelah();
    void luasBelah();
    friend void keliling(LayangLayang &a, BelahKetupat &b);
};

// Input Layang-Layang
void LayangLayang::inputLayang()
{
    cout << "Input diagonal 1 Layang-Layang : ";
    cin >> diagonal1;
    cout << "Input diagonal 2 Layang-Layang : ";
    cin >> diagonal2;
    cout << "Input sisi 1 Layang-Layang     : ";
    cin >> sisi1;
    cout << "Input sisi 2 Layang-Layang     : ";
    cin >> sisi2;
}

// Luas Layang-Layang
void LayangLayang::luasLayang()
{
    cout << "Luas Layang-Layang : " << 0.5 * diagonal1 * diagonal2 << endl;
}

// Input Belah Ketupat
void BelahKetupat::inputBelah()
{
    cout << "\nInput diagonal 1 Belah Ketupat : ";
    cin >> diagonal1;
    cout << "Input diagonal 2 Belah Ketupat : ";
    cin >> diagonal2;
    cout << "Input sisi Belah Ketupat       : ";
    cin >> sisi;
}

// Luas Belah Ketupat
void BelahKetupat::luasBelah()
{
    cout << "Luas Belah Ketupat : " << 0.5 * diagonal1 * diagonal2 << endl;
}

// Friend Function Keliling
void keliling(LayangLayang &a, BelahKetupat &b)
{
    cout << "Keliling Layang-Layang : " << 2 * (a.sisi1 + a.sisi2) << endl;
    cout << "Keliling Belah Ketupat : " << 4 * b.sisi << endl;
}

// Main Program
int main()
{
    LayangLayang layang;
    BelahKetupat belah;

    layang.inputLayang();
    belah.inputBelah();

    cout << "\n=== Hasil ===" << endl;
    layang.luasLayang();
    belah.luasBelah();

    keliling(layang, belah);

    return 0;
}