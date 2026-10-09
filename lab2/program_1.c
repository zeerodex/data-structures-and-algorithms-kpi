#include <stdio.h>

int main() {
  double x = 0.2;

  int n;
  printf("Введіть значення n: ");
  scanf("%d", &n);

  int op_c = 0;

  double res = 0;
  op_c += 1;

  op_c += 1;
  for (int i = 0; i <= n; i++) {
    op_c += 1; // i <= n

    double res_x_power = 1;
    op_c += 1; // res_x_power = 1

    op_c += 1; // j = 1
    for (int j = 1; j <= i; j++) {
      op_c += 1; // j <= i
      res_x_power *= x;
      op_c += 2; // *=
      op_c += 1; // j++
    }
    op_c += 1; // j <= i (якщо false)

    double res_n_fac = 1;
    op_c += 1;

    op_c += 1;
    for (int j = 2; j <= n; j++) {
      op_c += 1;
      res_n_fac *= j;
      op_c += 2;
      op_c += 1;
    }
    op_c += 1;

    double res_i_fac = 1;
    op_c += 1;

    op_c += 1;
    for (int j = 2; j <= i; j++) {
      op_c += 1;
      res_i_fac *= j;
      op_c += 2;
      op_c += 1;
    }
    op_c += 1;

    double res_ni_fac = 1;
    op_c += 1;

    op_c += 1;
    for (int j = 2; j <= n - i; j++) {
      op_c += 2; // j <= n-i
      res_ni_fac *= j;
      op_c += 2;
      op_c += 1;
    }
    op_c += 2; // j <= n-i

    res += (res_n_fac / (res_ni_fac * res_i_fac)) * res_x_power;
    op_c += 5;

    op_c += 1; // i++
  }
  op_c += 1; // i <= n

  printf("Результат обчислень: %.7lf\n", res);
  printf("Кількість операцій: %d\n", op_c);

  return 0;
}
