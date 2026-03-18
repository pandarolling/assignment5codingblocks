// piyushandmagicalpark.cpp

#include<iostream>
using namespace std;

int main() {
	int m, n, k, s;
	cin >> m>> n;
	cin >>k >>s;

	char arr[m][n];

	for(int i =0 ; i < m; i++){
		for(int j =0;  j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	int r = 0;
	while(r < m && s >=k ){

		int c= 0;
		while( c < n && s >= k){
			if(c != 0)
				s--;

			if(arr[r][c] == '.' && s >= k){
				s -= 2;
			}
			else if(arr[r][c] == '*' && s >= k){
				s += 5;
			}
			else{
				break;
			}
			c++;

		}
		r++;
	}




	if(s >= k){
		cout<<"Yes"<<endl;
		cout<<s;
	}else{
		cout<<"No";
		
	}

	return 0;
}