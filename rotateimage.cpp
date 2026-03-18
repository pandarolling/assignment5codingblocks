// rotateimage.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int m;
	cin >> m;

	vector <vector<int>> arr(m, vector<int>(m));
	vector<vector<int>> ans(m, vector<int>(m));

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < m; j++){
			cin >> arr[i][j];
		}
	}


	for(int i = 0; i < m; i++){
		reverse(arr[i].begin(), arr[i].end());
	}

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < m; j++){
			ans[i][j] = arr[j][i];
		}
	}

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < m; j++){
			cout << ans[i][j] <<" ";
		}
		cout <<endl;
	}
	return 0;
}