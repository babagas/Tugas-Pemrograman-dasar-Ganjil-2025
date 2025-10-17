#include <iostream>
using namespace std;
int main(){
    int deretBilangan[7]; //banyaknya elemen di array itu 7, berarti indexnya sampai 6
    int panjangArray = sizeof(deretBilangan)/sizeof(deretBilangan[0]); // ngitung banyaknya elemen di array
    for(int i=0;i<panjangArray;i++){
        deretBilangan[i]=3+((i-1)+1)*(-1); // pakai rumus aritmatika a+(n-1).b sama seperti soal nomor 2 dengan a=3 b=-1
    }
    for (int j = 0;j<panjangArray;j++){
        cout << deretBilangan[j] << " "; 
    }
    cout << endl;
    return 0;

}
