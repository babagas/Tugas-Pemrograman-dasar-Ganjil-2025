#include <iostream>
#include <string>
using namespace std;

int main(){
    float v0,h0,h,g = 9.8; //v0 = kecepatan awal,h0 = ketinggian awal, h = ketinggian saat t, g = gravitasi
    int i=0,t = 0; // t = waktu
    cout << "masukkan kecepatan (m/s) : ";
    cin >> v0;
    cout << "masukkan posisi awal dari atas tanah (m) : ";
    cin >> h0;
    if(h0<0){
        cout << "ts aint possible, if it so, do ur own math twin, i aint newton or sum physicist shii" << endl; 
    } else{
    cout << "iterasi\twaktu(s)\tposisi benda diatas tanah(m)" << endl;
    if(h0==0){
        cout << i << "\t" << t << "\t\t" << h0 << endl;
        i++;
        t++;
    }
    do{
        h = h0 + v0*t - (0.5)*g*t*t;
        if(h <= 0){
        h = 0;
        }
        cout << i << "\t" << t << "\t\t" << h << endl;
        i++;
        t++;
    }while(h>0);
}
    return 0;

}
