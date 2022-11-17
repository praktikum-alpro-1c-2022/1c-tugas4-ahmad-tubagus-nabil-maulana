#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    int tahun;
    float dibagi_400, dibagi_100, dibagi_4;

    // input
    cout << "======= CEK TAHUN KABISAT =======" << endl;
    cout << "Masukan tahun: ";
    cin >> tahun;

    // rumus
    dibagi_400 = tahun % 400 == 0;
    dibagi_100 = tahun % 100 == 0;
    dibagi_4 = tahun % 4 == 0;

    // logic // hasil akhir
    if(dibagi_400){
        cout << tahun << " adalah tahun kabisat";
        // jika tidak bisa dibagi 400, namun ia bisa dibagi 4 dan bukan kelipatan 100, maka ia juga tahun kabisat
    }else if(dibagi_4 &&! dibagi_100){ // and not
        cout << tahun << " adalah tahun kabisat";
    }else{
        cout << tahun << " bukan tahun kabisat";
    }
  return 0;    
}