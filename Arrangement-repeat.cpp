
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
            if (!i || B[i] != B[i - 1]) {
                int c1 = 0, c2 = 0;
                for (int j = 0; j < cur; j++)
                    if (A[j] == B[i]) c1++;
                for (int j = 0; j < n; j++)
                    if (B[j] == B[i]) c2++;
                if (c1 < c2) {
                    A[cur] = B[i];
                    print_permutation(n, A, B, cur + 1);
                }
            }
        }
}

int main() {
    int a[] = { 0 };
    int b[] = { 1,1,2,4 };
    print_permutation(4, a, b, 0);
    return 0;
}