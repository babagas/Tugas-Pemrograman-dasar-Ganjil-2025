#include <iostream>
#include <string>
using namespace std;
int main(){
union dataDiri{
int NIU;
char jenisKelamin;
int umur;
double IPK;
float tinggiBadan;
};
dataDiri bagas;
bagas.NIU = 1234;
cout << "NIU : " << bagas.NIU << endl; 
bagas.jenisKelamin = 'L';
cout << "Jenis kelamin : " << (bagas.jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl;
bagas.umur = 19;
cout << "Umur : " << bagas.umur << endl;
bagas.IPK = 3.98;
cout << "IPK : " << bagas.IPK << endl;
bagas.tinggiBadan = 170.4;
cout << "Tinggi badan : " << bagas.tinggiBadan << endl; //adanya selang-seling member assignment dan cout dikarenakan union cuma punya 1 member yang aktif beda kayak struct yang bisa akses semua member bersamaan
cout << "Ukuran union dataDiri   : " << sizeof(dataDiri) << " byte" << endl;
cout << "Ukuran member 'NIU'          : " << sizeof(bagas.NIU) << " byte" << endl;
cout << "Ukuran member 'jenisKelamin'  : " << sizeof(bagas.jenisKelamin) << " byte" << endl;
cout << "Ukuran member 'umur'          : " << sizeof(bagas.umur) << " byte" << endl;
cout << "Ukuran member 'IPK'          : " << sizeof(bagas.IPK) << " byte" << endl;
cout << "Ukuran member 'tinggiBadan'   : " << sizeof(bagas.tinggiBadan) << " byte" << endl;
return 0 ;

}
