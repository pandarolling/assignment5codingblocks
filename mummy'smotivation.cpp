// mummy'smotivation.cpp

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n][n];

	for(int i =0 ; i < n; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}

	int flag = 0;
	for(int i = 1; i < n ; i++){
		for(int j =i+1; j < n ; j++){
			if(arr[i][j] != 0){
				flag++;
				break;;
			}
		}
	}

	if(flag){
		cout<<"false";
	}else{
		cout<<"true";
	}
	return 0;
}