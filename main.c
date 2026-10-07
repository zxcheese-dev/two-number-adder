#include <stdio.h>
#include <locale.h>

static int func(int *a, int *b) {
    return *a + *b;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int res = func(&num1, &num2);

    printf("%d\n", res);

    char skip[10];
    printf("%s", "найс я сделал??? ");
    scanf("%9s", skip);

    return 0;
}

/* ну гордость а не код */
