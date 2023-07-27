/*There is a structure called employee that holds information like employee code, name, date of joining.
Write a program to create an array of the structure and enter some data into it. Then ask the user to enter current date.
Display the names of those employees whose tenure is 3 or more than 3 years according to the given current date. */


#include<stdio.h>

struct employee{
    int empCode;
    char empName[50];
    int joinDate;
    };

int main(){

    int currentDate;

    printf("Enter current date: \n");
    scanf("%d", &currentDate);

    struct employee employees[3];

    for(int i=0; i<3; i++){

        printf("\n");

        printf("Enter employee code: \n");
        scanf("%d", &employees[i].empCode);

        printf("Enter employee name: \n\n");
        scanf("%s", employees[i].empName);

        printf("Enter employee joining date: \n\n");
        scanf("%d", &employees[i].joinDate);
    }

    printf("Employee with tenure more than 3 years: \n\n");

    for(int i=0; i<3; i++){
        int tenure = currentDate - employees[i].joinDate;
        if (tenure > 3){
            printf("Employee Code: %d\n\n", employees[i].empCode);
            printf("Employee Name: %s\n\n", employees[i].empName);
            printf("Tenure: %d years\n\n", tenure);
        }
    }
    return 0;
    }
