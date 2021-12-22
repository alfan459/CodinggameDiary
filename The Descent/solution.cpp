// Ini adalah solusi dalam penyelesaian game the Descent
/*
Tujuan
Hancurkan gunung sebelum kapal luar angkasa anda bertabrakan dengan salah satu dari mereka. Untuk itu, tembak gunung tertinggi di jalur anda

Aturan
Di awal setiap giliran permaian, anda diberikan ketinggian 8 gunung dari kiri ke kanan. Pada akhir giliran permainan, anda harus menembak gunung tertinggi dengan mengeluarkan indeksnya (dari 0 hingga 7)
*/
// Program awal
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * While loop merepresentasikan game ini.
 * Setiap pengulangan merepresentasikan game
 * dimana kamu mendapatkan input ketinggian gunung
 * dan dimana kamu meletakkan output
 * Input yang kamu berikan akan otomatis update ketika aksi terakhir
 **/

int main()
{
    // game loop
    while (8) {
        for (i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
    
        cout << "0" << endl; // The index of the mountain to fire on.
    }
}

//Penyelesaian
#include <iostram>
#include <string>
#include <vector>
#include <algorithm>
using namspace std;

int main(){
  while(1){
    int max   = 0;
    int max_i = 0;
    for(int i = 0; i < 8; i++){
      int mountain_h;
      cin >> mountain_h; cin.ignore();
      if(max < mountain_h){
        max   = mountain_h;
        max_i = i;
      }
    }
    cout << max_i << endl;
  }
}

/*Penjelasan
Di sini kita bisa hanya menggunakan library iostream saja
dalam nilai while, bisa terserah, namun di atas 0
jadi disini menggunakan 4 variabel, yaitu nilai max untuk penyimpanan, max_i untuk nilai max i, mounntain_h untuk ketinggian gunung, dan i untuk looping
di dalam looping for, kita masukan variabel ketinggian gunung, lalu kita baca ketinggian gunung tersebut, jika nilai max yaitu 0 lebih besar dari ketinggian gunung, maka nilai max sama dengan ketinggian gunung, dan nilai max_i sama dengan i
outputnya kita keluarkan di luar looping for
cin.ignore() di sini adalah atribut dari cin yang berfungsi untuek mengabaikan garis baru yang tercipta oleh cin itu sendiri
*/
    
