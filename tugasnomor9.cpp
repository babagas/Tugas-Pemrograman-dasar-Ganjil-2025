#include <iostream>
#include <string>
using namespace std;
int main(){
struct dataMahasiswa{
        string nama;
        char jenisKelamin;
        int umur;
        string asal;
        float tinggiBadan;
        
        void tampilkan(){
            cout << "Nama : " << nama << endl << "Jenis Kelamin : " << (jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl << "Umur : " << umur << endl << "Asal : " << asal << endl << "Tinggi Badan : " << tinggiBadan << endl;
        } 
    };
    dataMahasiswa presensi1={"bagas",'L',19,"Jogja",170.4};
    presensi1.tampilkan();
    cout << "Ukuran struct dataMahasiswa   : " << sizeof(dataMahasiswa) << " byte" << endl;
    cout << "Ukuran member 'nama'          : " << sizeof(presensi1.nama) << " byte" << endl;
    cout << "Ukuran member 'jenisKelamin'  : " << sizeof(presensi1.jenisKelamin) << " byte" << endl;
    cout << "Ukuran member 'umur'          : " << sizeof(presensi1.umur) << " byte" << endl;
    cout << "Ukuran member 'asal'          : " << sizeof(presensi1.asal) << " byte" << endl;
    cout << "Ukuran member 'tinggiBadan'   : " << sizeof(presensi1.tinggiBadan) << " byte" << endl;
    return 0;
}