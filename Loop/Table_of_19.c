#include <stdio.h>

int main() {
  int n, i, M;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Multiplication table of %d:\n", n);
  for (i = 1; i <= 10; i++) {
    M =n * i;
    printf("%d x %d = %d\n", n, i, M );
  }

  return 0;
}