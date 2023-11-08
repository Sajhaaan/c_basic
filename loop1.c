#include <stdio.h>

int main() {
    int a;
    for (a = 1; a <= 10; a++) {
        printf("%d ", a); // Removed the "&" before 'a' and added a space to separate numbers
    }

    return 0;
}
