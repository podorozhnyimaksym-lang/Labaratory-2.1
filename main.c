#include <stdio.h>

int main() {
    double x, y;

    printf("Введіть координати точки (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 || y == 0) {
        printf("Помилка: за умовою координати x та y не повинні дорівнювати 0.\n");
        return 1;
    }

    if (x > 0 && y > 0) {
        printf("Точка знаходиться у I чверті.\n");
    } else if (x < 0 && y > 0) {
        printf("Точка знаходиться у II чверті.\n");
    } else if (x < 0 && y < 0) {
        printf("Точка знаходиться у III чверті.\n");
    } else { // x > 0 && y < 0
        printf("Точка знаходиться у IV чверті.\n");
    }

    return 0;
}