#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("I love docker %d times!!!\n", i + 1);
    }
    
    return 0;
}
