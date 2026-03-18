#include<iostream>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int nums[r][c];

	for(int i =0 ; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> nums[i][j];
		}
	}
	int m = 0, n = 0 ;
	while( m < r ){

		while( n < c){
			cout << nums[m][n] <<", ";
			n++;	
		}
		
		n--; m++;
		
		if(m < r){
		while( n >= 0 ){
			cout<< nums[m][n] <<", ";
			n--;
		}
		
		n++; m++;
		
		}
		

	}
	cout<<"END";
	return 0;
}