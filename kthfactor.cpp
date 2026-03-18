// kthfactor.cpp

#include<iostream>
#include<cmath>
using namespace std;

bool ifpossible(unsigned long long x, int k, unsigned long long n){

	unsigned long long temp = 1;
	for(int i = 1; i  <= k; i++){
		
		if( temp > n/x){
			return false;
		}
		temp *= x;
	}

	return true;

}

int main() {
	int tt;
	cin>>tt;

	while(tt--){

		unsigned long long n, k;
		cin>> n>>k;
		if(k == 1){
			cout << n <<endl;
			continue;
		}

		unsigned long long l =1, r = n;
		long long ans = 0;

		while(l <= r){

			unsigned long long mid = l + (r-l)/2;

			if(ifpossible(mid, k, n)){
				ans = mid;
				l = mid +1; 
			}else{
				r = mid -1;
			}

		}

		cout<<ans<<endl;
	}
	return 0;
}