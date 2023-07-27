/*  Given a list of names of students in a class, write a program to store the names in a file on disk.
Make a provision display the nth name in the list (n is data to be read) and to display all names starting with S. */

#include<stdio.h>

int main(){
    char name[5][50];

    int nNames;

    printf("Enter the number of names (upto 5): \n");
    scanf("%d", &nNames);

    for (int i=0; i<nNames; i++){
        printf("Enter name %d: ", i+1);
        scanf("%s", name[i]);
    }

    FILE *provisionFile = fopen("student.txt", "w");
    if (provisionFile == NULL){
        printf("Error opening the file");
        return 1;
    }
    for(int i=0; i<nNames; i++){
        fprintf(provisionFile, "%s \n", name[i]);
    }

    int n;

    printf("Enter 'n' value (upto %d): \n", nNames);
    scanf("%d", &n);

    if(n>=1 && n<=nNames){
        printf("Name at position %d is %s.\n", n, name[n-1]);
    }
    else{
        printf("Invalid Position.\n");
    }

    printf("Names starting with 'S': ");
    for(int i=0; i<nNames; i++){
        if(name[i][0] == 'S'){
            printf("%s \n", name[i]);
        }
    }
}
