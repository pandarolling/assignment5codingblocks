// spiralmatrixclockwise.cpp

#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m>> n;

	long arr[m][n];

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}


	int top= 0, left =0, bottom = m-1, right = n-1;

	while(top <= bottom && left <= right){

		for(int i = left; i <= right; i++){
			cout << arr[top][i] << ", ";
		}
		top++;

		for(int i = top; i <= bottom; i++){
			cout << arr[i][right]<< ", ";
		}
		right--;

		if(left <= right){
			for(int i = right; i >= left; i--){
			cout << arr[bottom][i]<< ", ";
			}
		bottom--;
		}

		if(top <= bottom){
			for(int i = bottom; i >= top; i--){
			cout << arr[i][left]<< ", ";
			}
		left++;
		}

	}
	cout<<"END";
	return 0;
}