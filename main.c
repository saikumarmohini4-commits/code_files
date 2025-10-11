#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>
struct {
    int hour;
    int min;
    int sec;
}typedef TIME;

union abc{
    int a;
    char b;
    float c;
    double d;
}var;
#define pi 3.1456
int computer(void){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Papers\n");
            break;
        case 3:
            printf("scissors\n");
            break;
    }
    return num;
}
int _user(int num){
    printf("Enter num from 1 to 3:- ");
    scanf(" %d",&num);
    switch(num){
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Papers\n");
            break;
        case 3:
            printf("scissors\n");
            break;
        default:
            printf("INVALId___\n");
    }
    return num;
}

int main(void) {
    /*time_t rawtime = 0;
     struct tm *pTime = NULL;
     bool isRunning = true;
     printf("DIGITAL CLOCK \n");
     while(isRunning){
     time(&rawtime);
     pTime = localtime(&rawtime);
     printf("\r %02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
     sleep(1);*/
    /*int num1;
    int num2 = '\0';
    char grades[5];
    printf("Enter the Number of Bytes you want to allocate to grades:- ");
    scanf(" %d",&num2);
    printf("Enter the Number of grades:- ");
    scanf("%d",&num1);
    if(num1 > 0 && sizeof(grades) >= sizeof(num1)){
        for(int i = 0; i < num1; i++){
            printf("Enter Grade #%d:- ",i+1);
            scanf(" %c",&grades[i]);
        }
        for(int i = 0; i < num1; i++){
            printf("%c ",grades[i]);
        }
        printf("\n");
        return 0;
    }
    else{
        return 1;
    }*/
    /*int num1;
    printf("Enter the Number of grades:- ");
    scanf(" %d",&num1);
    char *grades = calloc(num1,sizeof(char));
    if(grades == NULL){
        printf("Memory__NOT__Allocated!!!!\n");
        return 1;
    }
    else{
        for(int i = 0; i < num1; i++){
            printf("Enter Grade #%d:- ",i+1);
            scanf(" %c",&grades[i]);
        }
        for(int i = 0; i < num1; i++){
            printf("%c ",grades[i]);
        }
        printf("\n");
        return 0;
    }
    grades = NULL;
    free(grades);*/
    //char name[] = "SAIKUMAR";
    //char name2[] = "saikumar";
    //strncpy(name,name2,4);
    //strcpy(name3,name2);
    //strcat(name, name2);
    //int result = strlen(name2);
    /*if(result == 0){
        printf("First three characters are equal\n");
        printf("%d\n",result);
    }
    else if(result > 0){
        printf("The str1 chacter is greater than the other\n");
        printf("%d\n",result);
    }
    else{
        printf("The str1 is lesser than str2\n");
        printf("%d\n",result);
    }*/
   /* int age = 31;
    int *pAge = &age;
    printf("%p\n",pAge);
    printf("%d\n",*pAge);*/
    /*srand(time(0));
    int num = (rand() % 3) + 1;
    printf("%d",num);*/
    //TIME time1 = {12,30,36};
   // TIME *P = &time1;
    //printf("%d\n",P->hour);
    //var.a = 90;
    //printf("a = %d\n",var.a);
    /*union abc var;
    var.a = 90;
    union abc *p = &var;
    printf("%d %c\n",p->a,p->b);*/
    /*for(int i = 0; i < 6; i++){
        printf("Enter the Radius of the circle:- ");
        int radius;
        scanf("%d",&radius);
        float area = (pi * pow(radius,2));
        printf("The Area of the circle is:- %.2f\n",area);
    }*/
    /*int a;
    printf("Enter a Number:- ");
    scanf(" %d",&a);
    switch(a){
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("June\n");
            break;
        default:
            printf("That's it\n");
    }*/
    
        /*switch(i){
            case 5:
                printf("E");
                break;
            case 1:
                printf("A");
                break;
        }*/
    printf("************************** ROCK PAPERS SCISSORS GAME ************************************\n");
    printf("Enter 1 for paper\nEnter 2 for papers\nEnter 3 for scissors\n");
    int scoreu = 0;
    int scorec = 0;
    int i = 3;
    int num = '\0';
    int a = _user(num);
    int b = computer();
    while(i > 1){
        _user(num);
        computer();
        if(a == 1 && b == 2){scorec += 1;}
        else if(a == 1 && b == 3){scoreu += 1;}
        i = i - 1;
    }
    if(scoreu > scorec){printf("You won!!!\n");}
    else if(scorec > scoreu){printf("Computer won!!\n");}
    else{printf("Tie!!!\n");}
    printf("********************************** Game End ************************************************\n");
    return 0;
}
