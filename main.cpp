#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    List YDI;
    //1
    Create_List(YDI);

    infotype T1;
    cout << "Masukkan ID Transaksi Pertama: ";
    cin >> T1.id_transaksi;
    cout << "Masukkan Hari Transaksi Pertama: ";
    cin >> T1.hari_transaksi;
    cout << "Masukkan Total Transaksi Pertama: ";
    cin >> T1.total_transaksi;

    //2
    adr elm1;
    elm1 = New_Elemen(T1);

    //3
    Insert_First(YDI, elm1);

    infotype T2;
    cout << "Masukkan ID Transaksi Kedua: ";
    cin >> T2.id_transaksi;
    cout << "Masukkan Hari Transaksi Kedua: ";
    cin >> T2.hari_transaksi;
    cout << "Masukkan Total Transaksi Kedua: ";
    cin >> T2.total_transaksi;

    //4
    adr elm2;
    elm2 = New_Elemen(T2);

    //5
    Insert_Last(YDI, elm2);

    infotype T3;
    cout << "Masukkan ID Transaksi Selanjutnya: ";
    cin >> T3.id_transaksi;
    cout << "Masukkan Hari Transaksi Selanjutnya: ";
    cin >> T3.hari_transaksi;
    cout << "Masukkan Total Transaksi Selanjutnya: ";
    cin >> T3.total_transaksi;

    //6
    adr elm3;
    elm3 = New_Elemen(T3);

    Insert_First(YDI, elm3);

    infotype T4;
    cout << "Masukkan ID Transaksi Selanjutnya: ";
    cin >> T4.id_transaksi;
    cout << "Masukkan Hari Transaksi Selanjutnya: ";
    cin >> T4.hari_transaksi;
    cout << "Masukkan Total Transaksi Selanjutnya: ";
    cin >> T4.total_transaksi;

    //7
    adr elm4;
    elm4 = New_Elemen(T4);

    //8
    Insert_Last(YDI, elm4);

    infotype T5;
    cout << "Masukkan ID Transaksi Selanjutnya: ";
    cin >> T5.id_transaksi;
    cout << "Masukkan Hari Transaksi Selanjutnya: ";
    cin >> T5.hari_transaksi;
    cout << "Masukkan Total Transaksi Selanjutnya: ";
    cin >> T5.total_transaksi;

    //9
    adr elm5;
    elm5 = New_Elemen(T5);

    //10
    Insert_After(YDI, elm2, elm5);

    infotype T6;
    cout << "Masukkan ID Transaksi Selanjutnya: ";
    cin >> T6.id_transaksi;
    cout << "Masukkan Hari Transaksi Selanjutnya: ";
    cin >> T6.hari_transaksi;
    cout << "Masukkan Total Transaksi Selanjutnya: ";
    cin >> T6.total_transaksi;

    //11
    adr elm6;
    elm6 = New_Elemen(T6);

    //12
    Insert_After(YDI, elm2, elm6);

    //SHOW(01)
    Show(YDI);

    //13
    adr prec1;
    prec1 = SearchByID(YDI, T1.id_transaksi);
    if(prec1 != NULL){
        cout << "Data ditemukan pada alamat " << prec1 << endl;
    }else{
        cout << "Data tidak ditemukan";
    }
    Delete_After(YDI, prec1, elm2);

    cout << "Data Setelah Penghapusan Pertama" << endl;

    Show(YDI);

    //14
    adr prec2;
    prec2 = SearchByID(YDI, T1.id_transaksi);
    if(prec2 != NULL){
        cout << "Data ditemukan pada alamat " << prec2 << endl;
    }else{
        cout << "Data tidak ditemukan";
    }
    Delete_After(YDI, prec2, elm6);

    cout << "Data Setelah Penghapusan Kedua" << endl;

    Show(YDI);

    //15
    SortByTotal(YDI);
    cout << "Data Setelah Pengurutan" << endl;
    Show(YDI);
    return 0;
}
