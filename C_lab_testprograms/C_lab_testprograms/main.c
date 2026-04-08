//
//  main.c
//  C_lab_testprograms
//
//  Created by sai kumar mohini on 14/01/26.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <complex.h>
int factorial(int num);
typedef struct{
    int book_no;
    int book_pages;
    char book_name[30];
    char book_author[30];
}Books;
int main(void) {
    //1.To swap values with and without using third variable.......
    /*int num1,num2,num3;
     printf("Enter the first Number:- ");
     scanf(" %d",&num1);
     printf("Enter the second Number:- ");
     scanf(" %d",&num2);
     num3 = num1;
     num1 = num2;
     num2 = num3;
     printf("Values swapped:\n");
     printf("The first number is:- %d\n",num1);
     printf("The second number is:- %d\n",num2);*/
    //without using third varible......
    /*int num1 = 10, num2 = 5;
     num1 = num1 + num2;
     num2 = num1 - num2;
     num1 = num1 - num2;
     printf("num1 = %d\nnum2 = %d\n",num1,num2);*/
    //2.operations using switch statement........
    /*int num1 , num2;
     int op_num = 0;
     printf("Enter the first number:- ");
     scanf(" %d",&num1);
     printf("Enter the second number:- ");
     scanf(" %d",&num2);
     printf("Enter 1 for add,2 for subtract ,3 for mult ,4 for div\n");
     printf("Enter the number for operation:- ");
     scanf(" %d",&op_num);
     switch(op_num)
     {
     case 0:
     exit(1);
     break;
     case 1:
     printf("Addition:- %d\n",num1 + num2);
     break;
     case 2:
     printf("Subtraction:- %d\n",num1 - num2);
     break;
     case 3:
     printf("Multiplication:- %d\n",num1 * num2);
     break;
     case 4:
     printf("Division:- %d\n",num1/num2);
     break;
     default:
     exit(2);
     break;
     }*/
    
    //3.Addition of two matrices.........
    /*int rows,columns;
     printf("Enter the number of rows:- ");
     scanf(" %d",&rows);
     printf("Enter the number of columns:- ");
     scanf(" %d",&columns);
     if(rows == 0 && columns == 0)
     {
     exit(2);
     }
     if(rows == columns){
     int matrix1[rows][columns],matrix2[rows][columns];
     printf("Enter the values of matrix1:\n");
     for(int i = 0; i < rows; i++)
     {
     for(int j = 0; j < columns; j++)
     {
     printf("row[%d]::column[%d],value:- ",i+1,j+1);
     scanf(" %d",&matrix1[i][j]);
     }
     }
     printf("Enter values for matrix2:\n");
     for(int i = 0; i < rows; i++)
     {
     for(int j = 0; j < columns; j++)
     {
     printf("row[%d]::column[%d],value:- ",i+1,j+1);
     scanf(" %d",&matrix2[i][j]);
     }
     }
     printf("Opertion Addition had been implemented values are:\n");
     for(int i = 0; i < rows; i++)
     {
     for(int j = 0; j < columns; j++)
     {
     printf("%d ",(matrix1[i][j] + matrix2[i][j]));
     }
     printf("\n");
         for(int j = 0; j < columns; j++)
         {
         printf("%d ",(matrix1[i][j] - matrix2[i][j]));
         }
         printf("\n");
     }
     }
     else{
     printf("operations can only ber performed if rows and columns are same!\n");
     exit(1);
     }*/
    
    //4.To find the GCD of two integers............
    /*int num1,num2;
     printf("Enter Number1:- ");
     scanf(" %d",&num1);
     printf("Enter Number2:- ");
     scanf(" %d",&num2);
     int rem = 0;
     int i = 0;
     while(1){
     i++;
     if((num1 % i == 0) && (num2 % i == 0)){
     rem = i;
     }
     else if(num1 == i || num2 == i){
     break;
     }
     else{
     continue;
     }
     }
     printf("The greatest common divisor is:- %d\n",rem);*/
    
    //5.To count the number of lines , word and characters in the given text........
    /*FILE *fp;
     int count_lines = 0,count_words = 0,count_chars = 0;
     char ch = '\0';
     fp = fopen("/Users/saikumarmohini/Documents/C codes/Practise_file6/file5.txt.rtf","r+");
     if(fp == NULL)
     {
     perror("Error opening the file!!\n");
     exit(1);
     }
     while(ch != EOF){
     ch = fgetc(fp);
     if(ch == ' '){
     count_words++;
     }
     else if(ch == '\n'){
     count_lines++;
     }
     else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
     count_chars++;
     }
     else{
     continue;
     }
     }
     printf("No. of words:- %d\nNo. of Characters:- %d\nNo. of lines:- %d\n",count_words,count_chars,count_lines);
     fclose(fp);*/
    
    //6.To find a factorial of a given number........
    /*int num;
     printf("Enter the number to find it's factorial:- ");
     scanf(" %d",&num);
     factorial(num);*/
    
    //7.To check whether the number is palindrome or not.......
    /*int *num;
     int *num2;
     int range;
     printf("Enter the range of the number:- ");
     scanf(" %d",&range);
     num = malloc(range * sizeof(int));
     num2 = malloc(range * sizeof(int));
     for(int i = 0; i < range; i++)
     {
     printf("Enter the %d digit:- ",i+1);
     scanf(" %d",&num[i]);
     num2[i] = num[i];
     }
     int ind = 0;
     for(int i = range - 1; i >= 0; i--){
     if(num2[i] != num[ind]){
     printf("The sequence is not palindromic!\n");
     exit(1);
     }
     else{
     ind++;
     continue;
     }
     }
     printf("The sequence is palindromic!\n");*/
    
    //8.To find the roots of a quadritic equation............
    /*int x_2,x,constant;
     printf("Enter the coefficients of the variables X in power starting from power (2):\n");
     printf("Enter the coefficent for x^2:- ");
     scanf(" %d",&x_2);
     printf("Enter the coefficient for x:- ");
     scanf(" %d",&x);
     printf("Enter a constant;- ");
     scanf(" %d",&constant);
     if(x_2 && x && constant)
     {
     int root1,root2;
     if(pow(x,2) >= (4*x_2*constant)){
         root1 = (-x + sqrt(pow(x,2) - 4*x_2*constant))/2*x_2;
         root2 = (-x + sqrt(pow(x,2) - 4*x_2*constant))/2*x_2;
     printf("The roots of the given quadratic equation is:- %d,%d\n",root1,root2);
     }
     else if(pow(x,2)  < (4*x_2*constant)){
         float complex com_root1 = -x + (sqrt(pow(x,2) - 4*x_2*constant))*I;
         float complex com_root2 = -x - (sqrt(pow(x,2) - 4*x_2*constant))*I;
         printf("The roots of the given quadratic equation is:- %.2f+%.2fi,",creal(com_root1),cimag(com_root1));
         printf("%.2f-%.2fi\n",creal(com_root2),cimag(com_root2));
     }
     }
     else{
     exit(1);
     }*/
    
    //9.sum of individual integar of a given number...........
    /*int num = 0,sum = 0;
     int *array = NULL;
     printf("Enter the number of digits to be entered:- ");
     scanf(" %d",&num);
     array = malloc(num * sizeof(int));
     printf("enter the digits of the number:- ");
     for(int i = 0; i < num; i++)
     {
     scanf(" %d",&array[i]);
     sum = sum + array[i];
     }
     printf("\n");
     printf("The sum of the given integer ");
     for(int i = 0; i < num; i++){
     printf("%d",array[i]);
     }
     printf(" %d\n",sum);*/
    
    //10.Structs for books..................
    /*Books book1 = {'\0'};
     printf("Enter the serial number:- ");
     scanf(" %d",&book1.book_no);
     printf("Enter the Book pages:- ");
     scanf(" %d",&book1.book_pages);
     printf("Enter the name of the book:- ");
     fgets(book1.book_name,sizeof(book1.book_name),stdin);
     size_t len = strlen(book1.book_name);
     if(book1.book_name[len - 1] == '\n'){
     book1.book_name[len - 1] = '\0';
     }
     int ch;while((ch = getchar() != '\n') && ch != EOF){ }
     printf("Enter the author of the book:- ");
     fgets(book1.book_author,sizeof(book1.book_author),stdin);
     size_t len2 = strlen(book1.book_author);
     if(book1.book_author[len2 - 1] == '\n'){
     book1.book_author[len2 - 1] = '\0';
     }
     //int ch2;while((ch2 = getchar() != '\n') && ch2 != EOF){ }
     printf("%d....\nBook name:- %s\nBook Pages:- %d\nBook Author:- %s\n",book1.book_no,book1.book_name,book1.book_pages,book1.book_author);*/
    
    //11. Finding the smallest and largest in the given list of integers.........
    /*int num_array[10] = {690,677,647,659,661,695,667,642,671,677};
     int min = 0,max = 0;
     for(int i = 0; i < 10; i++){
     int count_min = 0;
     for(int j = 0; j < 10; j++){
     if(i == j){
     continue;
     }
     else if(i != j){
     if(num_array[i] < num_array[j]){
     count_min++;
     }
     else{
     break;
     }
     }
     }
     if(count_min == 9){
     min = num_array[i];
     }
     else if(count_min == 0){
     max = num_array[i];
     }
     else{
     continue;
     }
     }
     printf("The lowest number in the given array is:- %d\n",min);
     printf("The largest number in the given array is:- %d\n",max);*/
    
    //12.Linear search program.......
    /*int num_array[10] = {690,677,647,659,661,695,667,642,671,677};
     int num = 0;
     int not_found = 0;
     printf("Enter the number you want to search:- ");
     scanf(" %d",&num);
     if(num){
     for(int i = 0; i < 10; i++){
     if(num == num_array[i]){
     printf("The number was found in the %dth index of the array\n",i);
     not_found = 1;
     break;
     }
     else{
     not_found = 0;
     continue;
     }
     }
     if(not_found == 0){
     printf("The number is not found in the array!!\n");
     }
     }
     else{
     exit(1);
     }*/
    
    //13.To check whether the given number is armstrong.....
    /*int digits = 0,sum = 0,num2 = 0;
    printf(" enter the number of digits:- ");
    scanf(" %d",&digits);
    int *num  =  malloc(digits * sizeof(int));
    if(digits){
        printf("Enter the number:- ");
        for(int i = 0; i  < digits; i++){
            scanf(" %d",&num[i]);
            if(num[i] != '\n'){
                sum = sum + pow(num[i],digits);
            }
            else{
                exit(1);
            }
        }
        int dig = digits - 1;
        for(int i = 0; i < digits; i++){
            num2 = num2 + (num[i] * pow(10,dig));
            dig--;
        }
        if(sum){
            if(sum == num2){
                printf("The given number is a armstrong number\n");
            }
            else{
                printf("The given number is not a armstrong number\n");
            }
        }
        else{
            exit(2);
        }
    }
    else{
        exit(3);
    }
    free(num);
    num = NULL;*/
    
    //14.To check prime numbers............
    /*int num = 0,count = 0;
    printf("Enter a number:- ");
    scanf(" %d",&num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
        else{
            continue;
        }
    }
    if(count == 2){
        printf("The given number is a prime number!\n");
    }
    else if(count > 2){
        printf("The given number is not a prime number!\n");
    }
    else{
        exit(1);
    }*/
    //15.Binary search program.............
    /*int num , array[100] , first , last , middle , search;
    printf("Enter the number of elements to be stored in the array:- ");
    scanf(" %d",&num);
    if(num){
        for(int i = 0; i < num; i++){
            printf("Enter value %d:- ",i+1);
            scanf(" %d",&array[i]);
        }
        printf("Now enter the value you want to search in the array:- ");
        scanf(" %d",&search);
        if(search){
            first = 0;
            last = num - 1;
            middle = (first + last)/2;
            while(first != last){
                if(array[middle]  < search){
                    middle++;
                }
                else if(array[middle] == search){
                    printf("The Number is found in the %d index\n",middle);
                    break;
                }
                else if(array[middle] > search){
                    middle--;
                }
                first++;
            }
            if(first == last){
                printf("The Number is not found\n");
            }
        }
    }*/
    //array multiplication......
    /*int rows , columns;
    printf("Enter the number of rows:- ");
    scanf(" %d",&rows);
    printf("Enter the number of columns:- ");
    scanf(" %d",&columns);
    if((rows && columns) > 0){
        int array1[rows][columns],array2[rows][columns];
        printf("Enter values for array1:- \n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                printf("Row[%d]:Column[%d]:- ",i+1,j+1);
                scanf(" %d",&array1[i][j]);
            }
        }
        printf("Enter the values of array2:-\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                printf("Row[%d]:Column[%d]:- ",i+1,j+1);
                scanf(" %d",&array2[i][j]);
            }
        }
        int array3[rows][columns];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                int sum = 0;
                for(int k = 0; k < columns; k++){
                    sum = sum + (array1[i][k] * array2[k][j]);
                }
                array3[i][j] = sum;
            }
        }
        printf("\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                printf("%d ",array3[i][j]);
            }
            printf("\n");
        }
    }*/
    return 0;
}
int factorial(int num){
    for(int i = num - 1; i >= 1; i--){
        num = num * i;
    }
    printf("The factorial of the given number is :- %d\n",num);
    return num;
}
