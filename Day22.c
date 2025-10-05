#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;
        } else {
            sum += (double)(2 * i - 1) / (2 * i - 2);
        }
    }

    printf("The sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}
