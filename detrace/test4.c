#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 5, b =10;
    int sum = add(a, b);
    int x=2;
    printf("Sum: %d\n", sum);
    return 0;
}

