/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {

  // Mendeklarasikan variabel NAMA dengan tipe char dan 
  // lebar 5 karakter
  char NAMA[10];

  // Mengisikan nilai ke dalam variabel NAMA
  strcpy(NAMA, "Belajarlah");

  cout<<"Karakter ke-1: "<<NAMA[0]<<endl;
  cout<<"Karakter ke-2: "<<NAMA[1]<<endl;
  cout<<"Karakter ke-3: "<<NAMA[2]<<endl;
  cout<<"Karakter ke-4: "<<NAMA[3]<<endl;
  cout<<"Karakter ke-5: "<<NAMA[4]<<endl;
  cout<<"Karakter ke-6: "<<NAMA[5]<<endl;
  cout<<"Karakter ke-7: "<<NAMA[6]<<endl;
  cout<<"Karakter ke-8: "<<NAMA[7]<<endl;
  cout<<"Karakter ke-9: "<<NAMA[8]<<endl;
  cout<<"Karakter ke-10: "<<NAMA[9]<<endl;
  

  return 0;
}
