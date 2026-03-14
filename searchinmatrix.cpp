// searchinmatrix.cpp

// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62


#include<iostream>
using namespace std;

int main() {
	int m, n, target;
	cin >> m>> n;
	
	int arr[m][n];

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}
	cin >> target;
	int r= 0, c = n-1, flag =0;

	while( r < m && c >=0){
		if(arr[r][c] == target){
			flag++;
			break;
		}
		if(target > arr[r][c]){
			r++;
		}else{
			c--;
		}
	}
	if(flag != 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}