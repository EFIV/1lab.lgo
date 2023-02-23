#include <stdio.h>

int main() {
    int a = 4;
    int V, S;

    // Обчислення об'єму куба
    V = a * a * a;

    // Обчислення площі поверхні куба
    S = 6 * a * a;

    printf("Довжина ребра куба: %d\n", a);
    printf("Об'єм куба: %d\n", V);
    printf("Площа поверхні куба: %d\n", S);

    return 0;
}
