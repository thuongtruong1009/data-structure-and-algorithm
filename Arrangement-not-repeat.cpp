
//Code by https://github.com/thuongtruong1009

#include<iostream>
using namespace std;
void print_permutation(int n, int* A, int* B, int cur) {
    if (cur == n) {
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
        cout << endl;
    }
    else
        for (int i = 0; i < n; i++) {
            int ok = 1;
            for (int j = 0; j < cur; j++) {
                if (A[j] == B[i]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                A[cur] = B[i];
                print_permutation(n, A, B, cur + 1);
            }
        }
}

int main() {
    int a[] = { 0 };
    int b[] = { 2,5,8,9 };
    print_permutation(4, a, b, 0);
    return 0;
}