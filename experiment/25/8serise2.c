#include <stdio.h>

int main() {
    int i, num = 2;
    
    for (i = 1; i <= 6; i++) {
        printf("%d ", num);
        num = num * 10 + 2;
    }
    
    return 0;
}