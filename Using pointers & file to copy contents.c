#include<stdio.h>
int main(){
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("student.txt", "r");

    if(sourceFile == NULL){
        printf("Error opening the file.");
        return 1;
        }

    destinationFile = fopen("display.txt", "w");

    if(destinationFile == NULL){
        printf("Error opening the file.");
        return 1;
        }

    while ((ch = fgetc(sourceFile)) != EOF){
        fputc(ch, destinationFile);
    }

    printf("File copied successfully!\n");

    return 0;

    fclose(sourceFile);
    fclose(destinationFile);

}
