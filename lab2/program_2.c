#include <stdio.h>

int main() {
  double x = 0.2;

  int n;
  printf("Введіть значення n: ");
  scanf("%d", &n);

  int op_c = 0;

  double res = 1;
  double x_power = 1;
  double c = 1;
  op_c += 3;

  op_c += 1; // i = 1
  for (int i = 1; i <= n; i++) {
    op_c += 1; // i <= n

    x_power *= x;
    op_c += 2; // res_x_power *= x

    c *= (n - i + 1.0) / i;
    op_c += 5;

    res += c * x_power;
    op_c += 3;

    op_c += 1; // i++
  }
  op_c += 1; // i <= n

  printf("Результат обчислень: %.7lf\n", res);
  printf("Кількість операцій: %d\n", op_c);

  return 0;
}
