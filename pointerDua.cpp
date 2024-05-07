#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;

    void showNim(){
        cout << "nomor induk = " << nim << endl;
    }
};

int main (){
    mahasiswa mhs {1}; // object mhs
    mhs.showNim (); // member access oprator

    mahasiswa &redmhs = mhs; // pointer reference ref
    refMhs.nim = 2; // member accesss operator 
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs -> nim = 3; // arrow operator 
    pMhs -> showNim ();
    return 0;

}