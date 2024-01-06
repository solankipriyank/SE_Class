#include <stdio.h>

int main() {

  int n, reverse = 0,a;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    a = n % 10;
    reverse = reverse * 10 +a;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
