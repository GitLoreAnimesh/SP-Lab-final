
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);

        double sum = 0.0;

        for (int j = 0; j < n; j++) {
            double num;
            scanf("%lf", &num);
            sum += num;
        }

        printf("Case %d: %.3lf\n", i, sum);
    }

    return 0;
}
