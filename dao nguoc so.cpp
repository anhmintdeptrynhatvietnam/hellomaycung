#include <bits/stdc++.h>

using namespace std ;

int main() {
	int so ;
	int somoi = 0 ;
	cin >> so ;
	while ( so > 0) {
		int du = so % 10;
		somoi = somoi * 10 + du ;
		so /= 10 ;
	} 
	cout << somoi ;
}
