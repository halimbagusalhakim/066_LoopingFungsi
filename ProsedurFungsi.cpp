#include <iostream>
using namespace std;


string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;
 


void input() {
    cout << "nama pembeli : " ;
    cin >> nama;

    cout << "Jumlah xpander = ";
    cin >> nXpander;

    cout << "Jumlah porsche = ";
    cin >> nPorsche;

    cout << "Jumlah Avanza = ";
    cin >> nAvanza;

    cout << "Jumlah brio = ";
    cin >> nBrio;

    cout << "Jumlah lamborghini = ";
    cin >> nLamborghini;





}
int TotalHarga(){
    return (nXpander * hXpander ) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}
void display(){
    cout << "total harganya :" << TotalHarga() << endl;
}


int main() {
    char pilihan;
    do{
    
    input();
    display();
    cout << " apakaah ingin membeli kembali ? ";
    cin >>pilihan;
    }while(pilihan =='y' || pilihan =='Y');
}
