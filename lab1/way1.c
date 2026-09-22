#include <stdio.h>

int main() {
  float x, y;

  printf("Введіть значення x: ");
  scanf("%f", &x);

  if (x > -13) {
    if (x <= -3) {
      y = -4 * x * x * x + 3 * x - 7;
      printf("f2(x) = %f, x ∈ D2\n", y);
    } else {
      if (x >= 2) {
        if (x <= 7) {
          y = x * x * x + 14;
          printf("f1(x) = %f,x ∈ D1\n", y);
        } else {
          if (x > 14) {
            y = -4 * x * x * x + 3 * x - 7;
            printf("f2(x) = %f, x ∈ D2\n", y);
          } else {
            printf("x поза об’єднанням D1 ∪ D2, функція не визначена\n");
          }
        }
      } else {
        printf("x поза об’єднанням D1 ∪ D2, функція не визначена\n");
      }
    }
  } else {
    printf("x поза об’єднанням D1 ∪ D2, функція не визначена\n");
  }

  return 0;
}
