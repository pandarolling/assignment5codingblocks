// findsquareroot.cpp


#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
        int l = 1, r = A;
        long long ans = 0;
        while(l <= r){
                long long mid = (l + r)/2;
                long long sqr = pow(mid, 2);
                if(sqr <= A){
                         ans= mid;
                        l = mid+1;
                }
                else{
                        r = mid -1;
                }
        }
        return ans;
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}