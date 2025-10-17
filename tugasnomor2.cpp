#include <iostream>
using namespace std;
int main(){
    int deretBilangan[11]; // banyaknya elemen di array 11 berarti index nya sampai 10.
    int panjangArray = sizeof(deretBilangan)/sizeof(deretBilangan[0]); //ngitung banyaknya elemen di array
    for(int i=0;i<panjangArray;i++){
        deretBilangan[i]=3+((i+1)-1)*2; // rumus aritmatika a+(n-1)b. pada soal nomer 2 a=3 b=2, i+1 karena pada index ke 10 itu suku ke-11
    }
    for (int j=0;j<panjangArray;j++){
        cout << deretBilangan[j] << " ";
    }
    cout << endl;
    return 0;

}


