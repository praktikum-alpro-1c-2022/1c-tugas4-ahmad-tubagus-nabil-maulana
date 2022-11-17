#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    int bilangan;

    // input
    cout << "Masukan nilai bilangan: ";
    cin >> bilangan;

    // logic // hasil akhir
    if(bilangan % 2 == 0){
        cout << bilangan << " adalah bilangan ganjil";
    }else{
        cout << bilangan << " adalah bilangan genap";
    }
  return 0;    
}