#include<stdio.h>
#include<string.h>
int main(){
    int length1, length2;

    char str1[] = "GOOD";
    char str2[] = "MORNING";
    char result[100];

    length1 = strlen(str1);
    length2 = strlen(str2);

    printf("Length of each string 1 & 2: %d %d\n", length1, length2);

    strcpy(result, str1);
    strcat(result, str2);

    int finalLength = strlen(result);



    printf("Concatenated string length: %d\n", finalLength);
    printf("Concatenated string: %s", result);

    return 0;

}
