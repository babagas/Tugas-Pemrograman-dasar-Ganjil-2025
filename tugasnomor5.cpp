#include <iostream>
using namespace std;
int main(){
int baris = 4;
    int kolom = 13;
    char matriks [baris][kolom];
    for(int i =0;i<baris;i++){
        for(int j =0;j<kolom;j++){
            matriks[i][j] = ' ';
        }
    }
    for(int i=0;i<baris;i++){
        int jumlahBintang = i*2+1;
        int posisiBintang = (kolom-(baris+jumlahBintang+1))-1; //dikurangi 1 biar sesuai index
        for(int j = 0;j<jumlahBintang;j++){
            matriks[i][posisiBintang+(j*2)] = '*';
        }
    }
    for(int i=0;i<baris;i++){
        for(int j=0;j<kolom;j++){
            cout << matriks[i][j];
        }
        cout << endl;
    }
    return 0;
}