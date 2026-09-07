//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main (){
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week;");
    scanf("%d", &day);
    switch(day){
        case1:
        printf("Monday\n");
        break;
        case2:
        printf("Tuesday\n");
        break;
        case3:
        printf("Wednesday\n");
        break;
        case4:
        printf("Thursday\n");
        break;
        case5:
        printf("Friday\n");
        break;
        case6:
        printf("Saturday\n");
        break;
        case7:
        printf("Sunday");
        break;
        default:
        printf("Invalid input. please enter a number between 1 and 7.\n");
        return 0;
    }

}
