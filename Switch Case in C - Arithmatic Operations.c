#include <stdio.h>

int main() {
    int n1, n2, choice;
    int result;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("1. Add");
    printf("2. Sub");
    printf("3. Multiplication");
    printf("4. Division");

    scanf("%d", &choice);

    switch(choice){
        case 1:
            result = n1 + n2;
            printf("Addition: %d", result);
            break;

        case 2:
            result = n1 - n2;
            printf("Subtraction: %d ", result);
            break;

    return 0;
}
}
