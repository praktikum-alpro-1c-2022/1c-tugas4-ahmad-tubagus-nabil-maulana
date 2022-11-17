#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    string username, password;

    // input
    cout << "======== LOGIN SYSTEM ========\nDefault username,password: admin, 123" << endl;
    cout << "Masukan username: ";
    cin >> username;
    cout << "Masukan password: ";
    cin >> password;

    // logic nested if // hasil akhir
    if(username == "admin" && password == "123"){
        cout << "Login berhasil!";
    }else if (username == "admin" || password == "123"){
        if (username == "admin" && password != "123"){
            cout << "Username sesuai, password tidak sesuai!";
        }else if(username != "admin" && password == "123")
            cout << "Username tidak sesuai, password sesuai!";
    }else{
        cout << "Username dan password tidak sesuai!";
    }
  return 0;    
}