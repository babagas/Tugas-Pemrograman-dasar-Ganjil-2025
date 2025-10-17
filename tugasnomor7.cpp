#include <iostream>
#include <string>
using namespace std;
int main(){
string kalimatBenar = "nama saya Bagas, saya berasal dari Jogja";
    string kalimatSalah = "namx spyc Bfkhs, soca bqvjebl daeu Johka ";
    string katadiubah,koreksikata;
    int pilihan,konfirmasi;
    cout << kalimatSalah << endl;
    cout << "Buat kalimat diatas ini menjadi kalimat yang benar seperti kalimat dibawah ini" << endl;
    cout << kalimatBenar << endl;
    cout << "mau kah anda mengganti kalimatnya menjadi kalimat yang benar? " << endl;
    cout << "(1.ya 2.tidak)" << endl;
    cin >> pilihan;
    if (pilihan ==1){
        do{
            cout << "pilih 1 kata yang mau diubah dari kalimat yang salah" << endl;
            cin >> katadiubah;
            while(kalimatSalah.find(katadiubah)==string::npos){ //jika kata yang diketik tidak ditemukan maka jika dibandingkan dengan string::npos bakal menghasilkan true
                cout << "kata tidak ditemukan di kalimat yang salah" << endl;
                cout << "pilihlah 1 kata lagi yang mau diubah dari kalimat yang salah" << endl;
                cin >> katadiubah;
            }
            cout << "mau diubah jadi apa?" << endl;
            cin >> koreksikata;
            int posisiKata = kalimatSalah.find(katadiubah); //fungsi find
            int panjangKata = katadiubah.length(); // fungsi length
            kalimatSalah.replace(posisiKata,panjangKata,koreksikata); // fungsi replace
            cout << "masih mau mengubah kata lagi?" << endl;
            cout << "(1. ya 2. tidak)" << endl;
            cin >> konfirmasi;
            
        }while(konfirmasi==1);

        cout << "mari kita lihat hasil koreksimu" << endl;
        cout << "kalimat yang benar : "<< kalimatBenar << endl;
        cout << "kalimat yang kamu koreksi : " << kalimatSalah << endl;
    }else if(pilihan==2){
        cout << "ywdh sih"<< endl;
    } 
    else{
    cout << "ngetik yang bener kocak" << endl;
    }
    return 0;

}
