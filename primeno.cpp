// prime number
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  bool flag = 1; // this will be used to track whether the number is prime .
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      flag = 0;
      cout << "Not A Prime Number";
      break;
    }
  }
  if (flag == 1) {
    cout << "Prime Number";
  }
  return 0;
}