#include <bits/stdc++.h>

using namespace std ;

int sum(int n) {
  if (n == 1)
    return 1;
  if (n % 2 == 0) {
      return sum(n - 1);
  }
  if (n % 2 == 1)
    return n + sum(n - 2);
}


int main() {
	int n;
	cin >> n ;
	cout << sum(n) ;
}