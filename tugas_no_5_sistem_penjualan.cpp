#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    int kodeSusu, jmlPembelian, rTotal;
    string ukuran;
    
    // print
    cout << "|-----------------------------------------------------|"  << endl;
    cout << "| Kode susu | Nama produk | Ukuran     | Harga        |" << endl;
    cout << " -----------------------------------------------------"  << endl;
    cout << "|     1     | Dancow      | B (Besar)  | Rp. 10.000,- |" << endl;
    cout << "|           |             | S (Sedang) | Rp. 4.250,-  |" << endl;
    cout << "|           |             | K (Kecil)  | Rp. 2.100,-  |" << endl;
    cout << "|---------------------------------------------------- |" << endl;
    cout << "|     2     | Indomilk    | B (Besar)  | Rp. 8.500,-  |" << endl;
    cout << "|           |             | S (Sedang) | Rp. 4.000,-  |" << endl;
    cout << "|           |             | K (Kecil)  | Rp. 2.025,-  |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "|     3     | Sustacal    | B (Besar)  | Rp. 17.000,- |" << endl;
    cout << "|           |             | S (Sedang) | Rp. 14.500,- |" << endl;
    cout << "|           |             | K (Kecil)  | Rp. 8.300,-  |" << endl;
    cout << "|-----------------------------------------------------|" << endl;

    // input
    cout << "Masukan Kode Susu (1-3): ";
    cin >> kodeSusu;
    cout << "Masukan Jumlah Pembelian: ";
    cin >> jmlPembelian;
    cout << "Masukan Ukuran (B/S/K): ";
    cin >> ukuran;
    cout << endl;

    // logic using nested if // hasil akhir
    if (kodeSusu == 1){
        if (ukuran == "B"){
            rTotal = (jmlPembelian * 10000);
            cout << "Susu Dancow" << endl;
            cout << "Harga susu Rp. 10.000" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "S"){
            rTotal = (jmlPembelian * 4200);
            cout << "Susu Dancow" << endl;
            cout << "Harga susu Rp. 4.200" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "K"){
            rTotal = (jmlPembelian * 2100);
            cout << "Susu Dancow" << endl;
            cout << "Harga susu Rp. 2.100" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else{
            cout << "\nMasukan jumlah dan ukuran yang tersedia!";
        }
    }else if(kodeSusu == 2){
        if (ukuran == "B"){
            rTotal = (jmlPembelian * 8500);
            cout << "Susu Indomilk" << endl;
            cout << "Harga susu Rp. 8.500" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "S"){
            rTotal = (jmlPembelian * 4000);
            cout << "Susu Indomilk" << endl;
            cout << "Harga susu Rp. 4.000" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "K"){
            rTotal = (jmlPembelian * 2025);
            cout << "Susu Indomilk" << endl;
            cout << "Harga susu Rp. 2.025" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else{
            cout << "\nMasukan jumlah dan ukuran yang tersedia!";
        }
    }else if(kodeSusu == 3){
        if (ukuran == "B"){
            rTotal = (jmlPembelian * 17000);
            cout << "Susu Sustacal" << endl;
            cout << "Harga susu Rp. 17.000" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "S"){
            rTotal = (jmlPembelian * 14500);
            cout << "Susu Sustacal" << endl;
            cout << "Harga susu Rp. 14.500" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else if(ukuran == "K"){
            rTotal = (jmlPembelian * 8300);
            cout << "Susu Sustacal" << endl;
            cout << "Harga susu Rp. 8.300" << endl;
            cout << "Jumlah pembelian Rp. " << rTotal;
        }else{
            cout << "\nMasukan jumlah dan ukuran yang tersedia!";
        }
    }else{
        cout << "Harap masukan pilihan yang tersedia!";
    }
  return 0;    
}