#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
/*void birthday(char name[] , int age){
    printf("Happy birthday to you %s\nyou are %d years old.\n" , name , age);
}*/

/*bool agecheck(int age){
    if (age > 18){
        return 1;
    }
    else{
        return 0;
    }
}*/

/*int sum(int x , int y){
    int result = x + y;
    return result;
}*/

//void hello(char name[] , int age);

//************************** WRITE THE INT MAIN COMMAND FROM HEAR *****************************
    /* char name[30];
     int age;
     printf("Enter your name :-\t");
     fgets(name , sizeof(name) , stdin);
     printf("********************\n");
     printf("Enter Your Age :-\t");
     scanf("%d" , &age);
     if(age > 100){
     printf("This age is not possible for human beings\n");
     }
     else{
     printf("********************\n");
     
     printf("Your name is %s and your age is %d\n" , name , age);
     printf("Finally It's working\n");
     }*/
    
    
   /* char noun[30];
    char adjective1[20];
    char verb[30];
    char adjective2[30];
    printf("Enter a Noun :- ");
    fgets(noun , sizeof(noun) , stdin);
    noun[strlen(noun) - 1] = '\0';
    
    printf("Enter an adjective (1):- ");
    fgets(adjective1 , sizeof(adjective1) , stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
    printf("Enter a verb :- ");
    fgets(verb  , sizeof(verb) , stdin);
    verb[strlen(verb) - 1] = '\0';
    
    printf("Enter an adjective (2):- ");
    fgets(adjective2 , sizeof(adjective2) , stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    
    
    printf("\n%s which means god!!.\n" , noun);
    printf("Almighty and %s\n" , adjective1);
    printf("%s's %s can destroy this world\n" ,noun , verb);
    printf("As a Being of %s\n" , adjective2);
    printf("%s\n" , adjective2);*/
    
   /* int principle;
    int intrest;
    int years;
    int amount;
   int rate;
    int inc_rse;
    printf("Compund Intrest Calculator\n");
    
    printf("Enter the principal amount:- ");
    scanf("%d" , &principle);
    
    printf("\n");
    
    printf("Enter the intrest rate:- ");
    scanf("%d" , &intrest);
    
    printf("\n");
    
    printf("Enter the number of years :- ");
    scanf("%d" , &years);
    
    printf("\n");
    
    printf("Enter the accumaltion of intrest of days :- ");
    scanf("%d" , &inc_rse);
    
    rate = intrest/100;
    
    amount = principle + (rate * principle)/inc_rse;
    int total = pow(amount , inc_rse * years);
    
    printf("The amount after the given number of years is :- %d" , total);
    printf("\n");*/
   /* int input;
    float temp;
    printf("Temperature Conversion Program\n");
    printf("*************************************\n");
    printf("Press 1 to convert celsius to farhenheit.\nPress 2 to convert Farhenheit to celsius\n");
    scanf("%d" , &input);
    if (input == 1){
        printf("Enter the Temperature in celsius:-");
        scanf("%f" , &temp);
        float farh = (temp * 9/5) + 32;
        printf("The Temperature in farhenheit is:- %.2f\n" , farh);
    }
    else if(input == 2){
        printf("Enter the Temperature in Farhenheit:- ");
        scanf("%f" , &temp);
        float cels = (temp - 32) * 5/9;
        printf("The Temperature in celsius is:- %.2f\n" ,cels);
    }
    else{
            printf("Invalid!!!! plz choose between 1 and 2\n");
    }*/
    
    /*int Bool = '\0';
    printf("Enter 1 or 0 :- ");
    scanf("%d" , &Bool);
    printf("\n");
    switch(Bool){
        case 1:
            printf("TRUE!!!\n");
            break;
        case 0:
            printf("FALSE\n");
            break;
        default:
            printf("Invalid!!!\n");
            break;
    }*/
   /* float price = 75567.00;
    bool isstudent = false;
    if (isstudent){
        printf("You get an student discount of 25 percent\n ");
        price = price - price * 25/100;
        printf("So The Price is %.3f\n" , price);
    }
    else{
        printf("No Discount!!\n");
    }*/
    
    /*int num = -1;
    printf("A Num from 0 to 9\n");
    if (num >=0 && num < 9){
        printf("The Number is in the given sequence\n");
    }
    else{
        printf("The given Num is not in the sequence\n");
    }*/
    
    /*int age = '\0';
    char name[20];
    printf("Enter Your Name:- ");
    fgets(name , sizeof(name) , stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter Your Age:-");
    scanf("%d" , &age);
    birthday(name, age);*/
    
   /* int age = 20;
    if (agecheck(age) == true){
        printf("You are eligible for sign up\n");
    }
    else{
        printf("Sorry YOu are not eligible for sign up\n");
    }*/
    /*int x = 6;
    int y = 7;
    int c = sum(x,y);
    printf("The sum value is :- %d\n" , c);*/
    /*int age = 19;
    char name[20] = "saikumar";
    hello(name , age);*/
    /*char n;
    do{
        printf("A mini program\n");
        printf("Want to continue?? (y/n):- ");
        scanf("%c" , &n);
        if (n == 'N'|| n== 'n'){
            break;
        }
    }while(true);*/
   /* int rows;
    int columns;
    char symbol = '\0';
    
    printf("Enter the number of rows:- ");
    scanf("%d" , &rows);
    printf("Enter the columns:- ");
    scanf("%d" , &columns);
    printf("Enter any symbol:- ");
    scanf(" %c", &symbol);
    for(int i = 1;i <= columns; i++){
        for(int j = 1; j <= rows; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }*/
   /* for(int i = 1;i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d ", i*j );
        }
        printf("\n");
    }*/
   /* srand(time(NULL));
    int max;
    int min;
    int guess;
    printf("Just A Guessing Game\n");
    printf("*********************************\n");
    printf("Enter the Max number:- ");
    scanf("%d" , &max);
    printf("Enter the Min Number:- ");
    scanf("%d" , &min);
    int random_num = rand() % max + min;
    do{
        printf("Enter your guess:- ");
        scanf("%d",&guess);
        if(guess == random_num){
            break;
        }
        else{
            if(guess > max){
                printf("Too High!!\n");
            }
            else if(guess < min){
                printf("Too Low!!!!\n");
            }
        }
    }while(true);
    printf("Finally you guessed it!!!!\n");*/
    
    
    // WRITE THE RETURN FUNCTION HERE!!!!!!
//************************** THE END OF THE INT MAIN PROGRAM ********************************
/*void hello(char name[] , int age){
    printf("Hello %s you are %d years old\n" , name , age);
}*/

/*int userchoice(int num);
int computerchoice(int random);

int main(void){
    printf("************************* - Rock,Papers,Scissors - ******************************\n");
    printf("1 = Rock, 2 = Paper, 3 = Scissor\n");
    int num = '\0';
    int random = 0;
    int i = 1;
    int upoint = 0;
    int cpoint = 0;
    while(i <= 3){
        userchoice(num);
        if(userchoice(num) > 3){
            break;
        }
        else{
            computerchoice(random);
        }
        i = i + 1;
    }*/
   /* do{
        userchoice(num);
        if(userchoice(num) == true){
            computerchoice(random);
        }
        else{
            break;
        }
       if(userchoice(num) == 1 && computerchoice(random) == 2){
            cpoint = cpoint + 1;
        }
        else if(userchoice(num) == 2 && computerchoice(random) == 1){
            upoint = upoint + 1;
        }
        else if(userchoice(num) == 3 && computerchoice(random) == 2){
            upoint = upoint + 1;
        }
        else if(userchoice(num) == 2 && computerchoice(random) == 3){
            cpoint = cpoint + 1;
        }
        else if(userchoice(num) == 1 && computerchoice(random) == 3){
            upoint = upoint + 1;
        }
        else if(userchoice(num) == 3 && computerchoice(random) == 1){
            cpoint = cpoint + 1;
        }
        else{
            printf("Tie\n");
        }
        i = i - 1;
    }while(i > 1);

    if(upoint > cpoint){
        printf("You won the game!!\n");
    }
    else if(cpoint > upoint){
        printf("The computer won the game!!\n");
    }
    else{
        printf("It's a Tie!!\n");
    }
        
    return 0;
}

int computerchoice(int random){
    srand(time(0));
    random = rand() % 3 + 1;
    if(random == 1){
         printf("Rock!\n");
    }
    else if(random == 2){
         printf("Paper!\n");
    }
    else if(random == 3){
        printf("scissor!\n");
    }
    return random;
}
int userchoice(int num){
    printf("Enter any number 1 to 3:- ");
    scanf("%d" ,&num);
    if(num == 1){
        printf("Rock!\n");
    }
    else if(num == 2){
        printf("paper!\n");
    }
    else if(num == 3){
        printf("scissor!\n");
    }
    return num;
}*/

//int main(void){
    /*int numbers[5] = {0};
     int x = sizeof(numbers);
     for(int i = 0; i < 5; i++){
     printf("Enter any score:- ");
     scanf("%d",&numbers[i]);
     }
     printf("\n");
     for(int i = 0; i < 5; i++){
     printf("%d ",numbers[i]);
     }
     printf("\n");
     printf("The sizeof the array is:- %d\n",x);*/
    /* float array[3][3] = {{1.0,2.0,3.0},
     {4.0,5.0,6.0},
     {7.0,8.0,9.0}};
     int x = sizeof(array)/sizeof(array[0]);
     for(int i = 0; i < x; i++){
     for(int j = 0; j < x; j++){
     printf("%.2f ",array[i][j]);
     }
     printf("\n");
     }*/
    /*char name[3][25] = {'\0'};
     for(int i = 0; i < 3; i++){
     printf("Enter your name:- ");
     fgets(name[i],sizeof(name[i]),stdin);
     name[i][strlen(name[i]) - 1] = '\0';
     }
     for(int i = 0; i < 3; i++){
     printf("%s ",name[i]);
     }
     printf("\n");
     
     return 1;
     }*/
/*typedef enum{
    SUCCESS,FAILURE,PENDING
}Status;
void check(Status status);*/
void increment(int* i);
/*typedef struct{
    char name[30];
    int age;
    float gpa;
    bool regular;
}student;
void express(student student1){
    printf("Name: %s\n",student1.name);
    printf("Age: %d\n",student1.age);
    printf("GPA: %.2f\n",student1.gpa);
    printf("Regular: %s\n",(student1.regular) ? "True":"False");
}*/
int main(void){
    //printf("****************** MINI QUIZ GAME **********************\n");
    /*char ans = '\0';
     int i = 0;
     char questions[][200] = {"1.What is the capital city of Australia?",
     "2.Who wrote the epic Mahabharata?",
     "3.What is the chemical symbol for gold?",
     "4.What is the largest planet in our solar system?"};
     char options[][200] = {"A.Canberra B.Belmourne C.Sydeney D.Brisbane",
     "A.Aryabhatta B.Tulsi Das C.Valmiki D.Ved Vyasa",
     "A.Ag B.Au C.Pb D.G",
     "A.Saturn B.Uranus C.Jupiter D.Neptune"};
     while(i < 4){
     printf("%s\n",questions[i]);
     printf("%s\n\n",options[i]);
     i = i + 1;
     }*/
    /*int hours = 2;
     int minutes = 9;
     char *pmam = (hours >= 12) ? "PM\n":"AM\n";
     if (minutes > 10){
     printf("%d"":""%d" " %s",hours,minutes,pmam);
     }
     else{
     printf("%d"":""0%d" " %s",hours,minutes,pmam);
     }*/
    /*student students[] = {{"Saikumar",19,9.5,false},
                            {"Oggy",18,6.0,true}};*/
    int i = 2000;
   /* while(i < 2){
        printf("%s %d %.1f %s\n", students[i].name,students[i].age,students[i].gpa,
               (students[i].regular) ? "Yes":"No");
        i = i + 1;
    }*/
    increment(&i);
    printf("The Increment is:- %d\n",i);
    return 0;
}
void increment(int* i){(*i)++;}
/*void check(Status status){
    switch(status){
        case SUCCESS:
            printf("Process is successfull\n");
            break;
        case FAILURE:
            printf("Process is failes\n");
            break;
        default:
            printf("Process is pending\n");
            break;
    }
}*/


