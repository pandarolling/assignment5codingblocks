// spiralwaveprintcolumnwise.cpp
#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m>> n;

	int arr[m][n];

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}

	int r =0 , c= 0;

	while( c < n){
		while( r < m){
			cout << arr[r][c] << ", ";
			r++;
		}
		r--; c++;

		if(c < n){
		while(r >= 0){
			cout<< arr[r][c] << ", ";
			r--;
		}
		r++; c++;
		}
		
	}

	cout<<"END";
	return 0;
}