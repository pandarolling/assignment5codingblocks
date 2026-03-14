#include<iostream>
using namespace std;

int main() {
	long m, n;
	cin >> m>> n;

	int arr[m][n];
	int ans[m][n] = {};

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			long up = 0, left  =0;
			if(arr[i][j] == 1){

				while(up <m){
					ans[up][j] = 1;
					up++;
				}
				while(left < n){
					ans[i][left] = 1;
					left++;
				}
			}
		}
	}

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cout << ans[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}