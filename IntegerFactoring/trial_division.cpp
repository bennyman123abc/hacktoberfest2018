#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
  int n;
  int a[4096];
  int f = 2;
  int c = 0;
  std::cout << "Enter a number: ";
  std::cin >> n;

  while (n > 1) {
    if (n % f == 0) {
      a[c] = f;
      n /= f;
      c++;
    } else {
      f++;
    }
  }

  for (int i; i < sizeof(a)/4; i++) {
    if (a[i] != 0) {
      std::cout << std::to_string(a[i]) << std::endl;
    } else {
      continue;
      // std::cout << std::to_string(a[i]) << std::endl;
    }
  }
}
