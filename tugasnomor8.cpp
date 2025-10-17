#include <iostream>
#include <cstring>
using namespace std;
int main(){
int n;
    char katajawaban[50] = "jawabanmu : ";
    char jawabannya[50] = "jawaban yang benar : ";
    char jawaban[50];
    char namaPresiden[]="Soekarno";
    cout << "siapa Presiden Pertama Indonesia? Presiden Pertama di Indonesia adalah ... " << endl;
    cout << "clue : ada 8 huruf,huruf pertama wajib kapital" << endl;
    cin >> jawaban;
    if(strlen(jawaban)==8){
        if(strcmp(namaPresiden,jawaban)==0){
            cout << "SELAMAT JAWABANMU BENAR" << endl;
        }else{
        cout << "JAWABAN KAU SALAH" << endl;
        }
    }
        else{
        cout << "blud tidak bisa baca" << endl;
    }
    
    cout << strcat(jawabannya,namaPresiden) << endl;
    cout << strcat(katajawaban,jawaban) << endl;
    return 0;
}