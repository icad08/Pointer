#include <iostream>
using namespace std;

class persegiPanjang {
        public:
    int panjang, lebar;
    int luasPersegiPanjang (int b, int a){
        return a*b;
    }
};
class segitiga{
    public:
    int tinggi, 
        alas;
    int luasSegitiga (int a, int t){
        return 0.5*a*t;
    }
    
    int hitung (persegiPanjang p){
    return p.panjang;
    }
};

int main(){
    persegiPanjang pp;
    segitiga sg;
     cout << "Masukkan Panjang: ";
    cin >> pp.panjang;
    cout << "Masukkan Lebar : ";
    cin >> pp.lebar;
    cout << "Masukkan tinggi : ";
    cin >> sg.tinggi;
    cout << "Masukkan Alas : ";
    cin >> sg.alas;
    cout << "luas persegi panjang:" << pp.luasPersegiPanjang (pp.panjang, pp.lebar) << endl;
    cin >> "luas segitiga:" << sg.luasSegitiga (sg.alas, sg.tinggi) << endl;
}