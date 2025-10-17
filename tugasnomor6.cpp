#include <iostream>
using namespace std;
int main(){
int baris =4;
int kolom =4;
int matriks [baris][kolom];
int angka = 1;
for(int i=0;i<baris;i++){
    for(int j=0;j<=i;j++){
        matriks[i][j]=angka;
        angka++;
        }
    }
for(int i=0;i<baris;i++){
    for(int j =0 ;j<=i;j++){
        cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
