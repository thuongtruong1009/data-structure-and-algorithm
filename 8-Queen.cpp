
//Code by https://github.com/thuongtruong1009

#include<stdio.h>
#include<stdlib.h>
int t[8] = {-1};
int order = 1;

void printMatrix(){
	int i,j;
	char crossboard[8][8];
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			crossboard[i][j]='_';
		}
	}
	for(i=0;i<8;i++){
			crossboard[i][t[i]]='q';
	}
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%c ",crossboard[i][j]);
		}
		printf("\n");
	}  
}
int empty(int i){
	int j=0;
	while((t[i]!=t[j])&&(abs(t[i]-t[j])!=(i-j))&&j<8)j++;
	return i==j?1:0;
}

void queens(int i){
	for(t[i] = 0;t[i]<8;t[i]++){
		if(empty(i)){
			if(i==7){
				printf("\n solution %d\n",order++);
        printMatrix();
			}
			else
			queens(i+1);
		}
	}
}

int main(){
	queens(0);
	return 0;
}