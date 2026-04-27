#include <iostream>
using namespace std;

//class mahasiswa
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim();

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}