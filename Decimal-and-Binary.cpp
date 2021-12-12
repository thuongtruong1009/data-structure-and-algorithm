
//Code by https://github.com/thuongtruong1009

#include <iostream>
using namespace std;

void decToBin(int n){
    //initial array with 32 bits length
    int remainder[32];
    int i = 0;
    while (n > 0) {
        remainder[i] = n % 2;
        n = n / 2;
        i++;
    }

  // printing binary array in reverse order
    cout << "--> binary number is: ";
    for (int j = i - 1; j >= 0; j--)
        cout << remainder[j];
}

void binToDec(int n){
	int result = 0;
	int base = 1;

	int temp = n;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		result += last_digit * base;

		base = base * 2;
	}
  cout << "--> decimal number is: " << result;
}

int main() {
  int n;
   //input n from keyboard
   cout << "\n-------------------------------------------------------\n";
   printf("Pressing 1 for decimal-to-binary or 2 for binary-to-decimal.\nInput your option: ");
   scanf("%d", &n);
   if(n == 1){
      printf("• Input decimal: ");
      scanf("%d", &n);
      decToBin(n);
   }
   else if(n == 2){
      printf("• Input binary: ");
      scanf("%d", &n);
      binToDec(n);
   }

   main();
  return 0;
}