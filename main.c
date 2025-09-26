//
//  main.c
//  C2
//
//  Created by sai kumar mohini on 26/09/25.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
#include <stdlib.h>
#include <stdio.h>
    int number;
    int num2;
    printf("Enter the number of memory(Bits) for the array:- ");
    scanf("%d",&num2);
    printf("Enter the number of grades:- ");
    scanf("%d",&number);
    //char *grades = calloc(number, sizeof(char));
    char grades[num2];
        if(number > 0 && sizeof(grades) >= sizeof(number)){
            for(int i = 0; i < number; i++){
                printf("Enter Grade #%d: ",i + 1);
                scanf(" %c", &grades[i]);
            }
            for(int i = 0; i < number; i++){
                printf("%c ",grades[i]);
            }
            printf("\n");
            // free(grades);
            // grades = NULL;
        }
        else{
            printf("Memory__Not__Allcoated\n To Array!!!!!\n");
        }
    return 0;
}
