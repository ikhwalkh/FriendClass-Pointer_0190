#include <iostream>
using namespace std;

//class mahasiswa
class mahasiswa
{
    public:
    int nim;
    void showNim()
    {
        cout << "NO induk = " << nim << endl;
    }
};

//buat menjalankan perintah
int main()
{
    mahasiswa *mhs = new mahasiswa{1};
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}