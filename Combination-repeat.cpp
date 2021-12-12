
//Code by https://github.com/thuongtruong1009

#include <bits/stdc++.h>
using namespace std;

void CombinationRepetitionUtil(int chosen[], int arr[], int index, int r, int start, int end){
	if (index == r){
		for (int i = 0; i < r; i++)
			cout << " " << arr[chosen[i]];
		cout << "\n";
		return;
	}

	for (int i = start; i <= end; i++){
		chosen[index] = i;
		CombinationRepetitionUtil(chosen, arr, index + 1,
			r, i, end);
	}
	return;
}

void CombinationRepetition(int arr[], int n, int r){
	int chosen[r + 1];
	CombinationRepetitionUtil(chosen, arr, 0, r, 0, n - 1);
}

int main(){
	int arr[] = { 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int r = 2;
	CombinationRepetition(arr, n, r);
	return 0;
}