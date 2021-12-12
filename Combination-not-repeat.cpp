
//Code by https://github.com/thuongtruong1009

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x = 0;
    int array[10];
    cout << "\n   Input 10 differents number: \n";
    for (int i = 0; i < 10; i++){
        cin >> array[i];
        if (array[i] == array[i + 1]){
            cout << "\n\n   You just enter a number several times  "
                "try again\n";
        }
    }
    cout << endl;
    cout << setw(40) << "Generating All Combination Elements Without"
        " Repetition\n";
    cout << setw(45) << "============================================""==================\n\n";

    for (int i = 0; i < 6; ++i){
        for (int j = i + 1; j < 7; ++j){
            for (int k = j + 1; k < 8; ++k){
                for (int l = k + 1; l < 9; ++l){
                    for (int m = l + 1; m < 10; ++m){
                        ++x;
                        cout << setw(15) << x << ")      " << array[i] << "     "
                            << array[j] << "     " << array[k] << "     "
                            << array[l] << "     " << array[m] << endl;
                    }
                }
            }
        }
    }
    cout << endl << endl;
    return 0;
}