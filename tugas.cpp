#include <iostream>
using namespace std;
//Prototype
  void PilihA ();
  void PilihB ();
//variable global
int n, data; //n adalah jumlah data yang akan di inputkan
int jumlah=1;
char pilihan;
//Program Utama
int main() {
  int min, max;
  cout << "Masukan Jumblah Data : "; cin >> n;
  pilih:
  cout << "--Silahkan Pilih Proses--"<<endl ;
  cout << "A. Mencari data minimum"<<endl;
  cout << "B. Mencari data maximum"<<endl;
  cout << "Pilih Proses : "; cin >>pilihan;
    if (pilihan=='a') {
      PilihA();
    }
      else if (pilihan=='b') {
        PilihB();
      }
        else  {
          cout << "Pilihan Anda Kurang Tepat"<<endl;
          cout << "Tolong masukan pilihan A atau B"<<endl<<endl;
          goto pilih;
        }
  cin.get();
  return 0;
}

//Proses Pilihan A
void PilihA(){
  int min; //variable lokal
  for (int x=1;x<=n;x++) {
    cout<<"Masukan data : "; cin >> data;
    if (x==1) {
      min = data;
    }
      else if (min > data) {
        min = data;
        jumlah = 1;
      }
        else if (min < data) {}

          else if (min = data) {
            jumlah++;
          }
            else {}
  }
  cout << "-------------------------"<<endl;
  cout << "Data minimumnya adalah : "<<min<<endl;
  cout << "Berjumlah : "<< jumlah;
}
  //Proses Pilihan B
  void PilihB(){
    int max; //variable lokal
    for (int x=1;x<=n;x++) {
      cout<<"Masukan data : "; cin >> data;
      if (x==1) {
        max = data;
      }
        else if (max < data) {
          max = data;
          jumlah = 1;
        }
          else if (max > data) {}

            else if (max = data) {
              jumlah++;
            }
              else {}
    }
    cout << "-------------------------"<<endl;
    cout << "Data maximumnya adalah : "<<max<<endl;
    cout << "Berjumlah : "<< jumlah;
  }