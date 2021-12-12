
//Code by https://github.com/thuongtruong1009

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void decToHex(int n){
    //initial array with 32 bits length
    int remainder[32];
    int i = 0;
    while (n > 0) {
        remainder[i] = n % 16;
        n = n / 16;
        i++;
    }

  // printing hexa array in reverse order
    cout << "--> hexa number is: ";
    for (int j = i - 1; j >= 0; j--)
        cout << remainder[j];
}

void hexToDec(string hexVal){
	int len = hexVal.size();
	int base = 1;
	int dec_val = 0;

	// Extracting character from last digits
	for (int i = len - 1; i >= 0; i--) {
		// convertinglies in '0'-'9' to 0-9 by subtracting 48
		if (hexVal[i] >= '0' && hexVal[i] <= '9') {
			dec_val += (int(hexVal[i]) - 48) * base;
			base = base * 16;
		}

		// converting lies in 'A'-'F' to 10 - 15 by subtracting 55
		else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
			dec_val += (int(hexVal[i]) - 55) * base;
			base = base * 16;
		}
	}
	 cout << "--> decimal number is: " << dec_val;
}

int main() {
  int n;
  string s;
   //input n from keyboard
   cout << "\n-------------------------------------------------------\n";
   printf("Pressing 1 for decimal-to-binary or 2 for binary-to-decimal.\nInput your option: ");
   scanf("%d", &n);
   if(n == 1){
      printf("• Input decimal: ");
      scanf("%d", &n);
      decToHex(n);
   }
   else if(n == 2){
      printf("• Input hexa: ");
      cin >> s;
      hexToDec(s);
   }

   main();
  return 0;
}