//
//  main.c
//  Bubble_sort_algorithm
//
//  Created by sai kumar mohini on 24/03/26.
//

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int array[5] = {50,40,30,20,10};
    printf("Before sorting the list\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",array[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        int temp = 0;
        for(int j = 0; j < (4 - i); j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("After sorting the list\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
