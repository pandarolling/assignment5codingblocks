// spiralprintanticlockwise.cpp

#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;

	long arr[m][n];

	for(int i = 0; i < m ; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}

	int r= 0 , c = 0, left = 0, right = n -1, top = 0, bottom = m -1;

	while( top <= bottom && left <= right){

		if(top <= bottom){
		while(r <= bottom){
			cout<<arr[r][c] <<", ";
			r++;
		}
		}
		r--;
		left++;
		c= left;
		
		if(left <= right){
		while(c <= right){
			cout<<arr[r][c] <<", ";
			c++;
		}
		}
		c--;
		bottom--;
		r= bottom ;
		

		if(top <= bottom ){

			while(r >= top){
				cout<<arr[r][c] <<", ";
				r--;	
			}
			
		}
			r++;
			right--;
			c = right ;

		if(left <= right){
			while( c >= left){
				cout<<arr[r][c] <<", ";
				c--;
			}
			
		}
			c++;
			top++;
			r = top;
		
	}

	cout <<"END";
	return 0;
}