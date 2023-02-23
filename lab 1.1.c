#include <stdio.h>

int doSegmentsIntersect(double a, double b, double c, double d) {
    if (a > b || c > d) {
        return 0; // відрізки не можуть перетинатися
    }

    if (a == b && c == d) {
        return a == c; // відрізки складаються з однієї точки
    }

    if (a == c || b == d) {
        return 1; // відрізки мають спільну точку на кінці
    }

    if (b < c || a > d) {
        return 0; // відрізки не перетинаються
    }

    return 1; // відрізки перетинаються
}

int main() {
    double a, b, c, d;
    printf("Введіть координати першого відрізка (a, b): ");
    scanf("%lf %lf", &a, &b);
    printf("Введіть координати другого відрізка (c, d): ");
    scanf("%lf %lf", &c, &d);

    printf("Ви ввели відрізки [%.2lf, %.2lf] та [%.2lf, %.2lf].\n", a, b, c, d);

    if (doSegmentsIntersect(a, b, c, d)) {
        printf("Відрізки перетинаються.\n");
    } else {
        printf("Відрізки не перетинаються.\n");
    }

    return 0;
}
