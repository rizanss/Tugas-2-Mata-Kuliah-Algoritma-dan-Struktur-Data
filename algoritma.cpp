#include <iostream>

using namespace std;

int main()
{
    int gajiPokok;
    int masaKerja;
    float bonus;
    float insentif;
    float pajak;
    int totalGaji;

    cout << "Menghitung Gaji, Bonus, Gaji Insentif, Total gaji, dan Pajak yang dikenakan" << endl;
    cout << endl;
    cout << "Masukkan lama masa kerja anda : ";
    cin >> masaKerja;
    cout << "Masa Kerja anda adalah " << masaKerja << " tahun" << endl;

    if(masaKerja >= 5 && masaKerja <= 10){
        gajiPokok = 5000000;
        bonus = gajiPokok * 0.03;
        insentif = gajiPokok * 0.04;
        totalGaji = gajiPokok + bonus + insentif;
        pajak = totalGaji * 0.02;
        cout << "Gaji Pokok = " << gajiPokok << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Gaji Insentif = " << insentif << endl;
        cout << "Total gaji = " << totalGaji << endl;
        cout << "Dikenakan pajak sebesar = " << pajak << endl;
    }else if(masaKerja >= 11 && masaKerja <= 15){
        gajiPokok = 6000000;
        bonus = gajiPokok * 0.04;
        insentif = gajiPokok * 0.05;
        totalGaji = gajiPokok + bonus + insentif;
        pajak = totalGaji * 0.02;
        cout << "Gaji Pokok = " << gajiPokok << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Gaji Insentif = " << insentif << endl;
        cout << "Total gaji = " << totalGaji << endl;
        cout << "Dikenakan pajak sebesar = " << pajak << endl;
    }else if(masaKerja >= 16 && masaKerja <= 20){
        gajiPokok = 7000000;
        bonus = gajiPokok * 0.05;
        insentif = gajiPokok * 0.07;
        totalGaji = gajiPokok + bonus + insentif;
        pajak = totalGaji * 0.02;
        cout << "Gaji Pokok = " << gajiPokok << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Gaji Insentif = " << insentif << endl;
        cout << "Total gaji = " << totalGaji << endl;
        cout << "Dikenakan pajak sebesar = " << pajak << endl;
    }else if(masaKerja >= 21 && masaKerja <= 25){
        gajiPokok = 8000000;
        bonus = gajiPokok * 0.07;
        insentif = gajiPokok * 0.08;
        totalGaji = gajiPokok + bonus + insentif;
        pajak = totalGaji * 0.02;
        cout << "Gaji Pokok = " << gajiPokok << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Gaji Insentif = " << insentif << endl;
        cout << "Total gaji = " << totalGaji << endl;
        cout << "Dikenakan pajak sebesar = " << pajak << endl;
    }else if(masaKerja >= 26 && masaKerja <= 30){
        gajiPokok = 9000000;
        bonus = gajiPokok * 0.08;
        insentif = gajiPokok * 0.09;
        totalGaji = gajiPokok + bonus + insentif;
        pajak = totalGaji * 0.02;
        cout << "Gaji Pokok = " << gajiPokok << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Gaji Insentif = " << insentif << endl;
        cout << "Total gaji = " << totalGaji << endl;
        cout << "Dikenakan pajak sebesar = " << pajak << endl;
    }else{
        cout << "Mohon maaf masa kerja anda tidak ada di daftar" << endl;
    }
}
