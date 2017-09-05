#include <stdio.h>

/* 
 * Сортировка 
 */
 
/* прототип функции */
void sortNumber(int *x, int *y);
 
int main(void)
{
    int size = 10;
    int array[size], i, j;
    printf("Массив: ");

    for(i = 0; i < size; i++)
    {
        array[i] = i + 1;
        printf("%i ", array[i]);
    }
    printf("\n");

    for(i = 0; i < size; i++)
    {
        for(j = size - 1; j > i; j--) { sortNumber(&array[i], &array[j]); }
    }
        
    printf("Отсортированный массив: ");

    for(i = 0; i < size; i++) printf("%i ", array[i]);
    printf("\n");

    return 0;
}


void sortNumber(int *x, int *y)
{
    int temp;
    
            if(*x < *y)
            {
                temp = *x;
                *x = *y;
                *y = temp;
            }
}
