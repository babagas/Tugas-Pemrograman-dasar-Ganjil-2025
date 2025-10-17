#include <iostream>
using namespace std;
int main(){
    int deretBilangan[7];
    int panjangArray = sizeof(deretBilangan)/sizeof(deretBilangan[0]);
    for(int i=0;i<panjangArray;i++){
        deretBilangan[i]=3+((i-1)+1)*(-1);
    }
    for (int j = 0;j<panjangArray;j++){
        cout << deretBilangan[j] << " "; 
    }
    cout << endl;
    return 0;
}