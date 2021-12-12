//Code by https://github.com/thuongtruong1009

#include <iostream>
#include<ctime> 
using namespace std;

//recursive
int fibonacciRecursive(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

//not recursive
int fibonacciNotRecursive(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

//time function
int timeCalculate(int n, int click){
  int i;
  if(click == 1){
        //start time
        int start_s=clock();

        printf("--> Recursive Fibonacci of %d first number are: \n", n);
        for (i = 0; i <n; i++) {
            cout << fibonacciRecursive(i) << " ";
        }

        //end time
        int stop_s=clock();
        cout<<"\n--> The time execute for [Recursive] is: ";
        cout<<(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<"s\n";
    }
  else if (click == 2){
    //start time
        int start_s=clock() ;

        printf("--> Not recursive Fibonacci of %d first number are: \n", n);
        for (i = 0; i <n; i++) {
            cout << fibonacciNotRecursive(i) << " ";
        }

        //end time
        int stop_s=clock();
        cout<<"\n--> The time execute for [Not recursive] is: ";
        cout<<(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<"s\n";
  }
  return 0;
}
 
int main() {
 int n;
 int click;
    //input n from keyboard
    printf("•Input n: ");
    scanf("%d", &n);
    
    //get input user click
    printf("•Input user click: ");
    scanf("%d", &click);
    
    if((click == 1)||(click == 2)){
      timeCalculate(n, click);
      cout<<"-------------------------------------------\n";
      main();
    }
    else{
      cout << "Only input 1 or 2. Please again!\n";
      main();
    }
    return 0;
}