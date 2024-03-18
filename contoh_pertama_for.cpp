#include <iostream>
using namespace std;

int main() {
    int i;
    int arr[5];

    for (i = 0; i < 5; i++ ){
        cout << i << " : " <<"halim Bagus Al hakim" << endl;
    }
    
    for (i = 0; i < 5; i++){
        cout << "masukan nama = ";
        cin >> arr[i];

    }

    for (i = 0; i < 5; i++){
        cout << "nama ke - " << i << " : "<< arr[i] << endl;
    }

    return 0;
}