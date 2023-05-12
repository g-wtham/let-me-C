#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Target value found.\n");
            return 0;
        }
    }
    
    printf("Target value not found.\n");
    return 0;
}
