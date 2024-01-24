#include <bits/stdc++.h>

using namespace std ;

void fibonaci(int n) {
	cout << "0 1 " ;
	long long f1 = 0 , f2 = 1 , fn ;
	for (int i=2 ; i<=n ; i++) {
		fn= f1 + f2 ; cout << fn << " " ;
		f1 = f2 ;
		f2 = fn ;
	}
	
}

int main() {
	int n;
	cin >> n;
	fibonaci(n)	;
	
}