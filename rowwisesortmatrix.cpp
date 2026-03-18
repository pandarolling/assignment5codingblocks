// rowwisesortmatrix.cpp
#include<iostream>
using namespace std;
void sort(int arr[], int col){
	
	for(int i =0 ; i < col-1; i++){
		int min = i;
		for(int j =i+1;  j < col; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}
int main() {
	int m, n;
	cin >> m>> n;

	int arr[m][n];

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}

	for(int i =0; i < m ;i++){
		sort(arr[i], n);
	}

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cout << arr[i][j] << ' ';
		}
		cout <<'\n';
	}
	return 0;
}