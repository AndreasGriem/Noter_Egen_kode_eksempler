#include <stdio.h>
#include <mm_malloc.h>
#include <stdbool.h>

void add(int *count){
    *count = *count + 10;
    printf("%d\n",*count);
}

int *add_and_return_pointer(int *count, bool check){
    *count = *count + 10;
    printf("%d\n",*count);
    int *pCounter = NULL;
    if (check == true){
        pCounter = malloc(sizeof(int));
    } else{
        pCounter = count;
    }

    *pCounter = *count;
    return pCounter;
}
int main(void)
{
    int *pNumber = NULL;
    int *pCount = NULL;
    int count = 27;

    pCount = &count;

    count = count + 10;

    printf("%d\n",*pCount);

    *pCount = *pCount + 10;

    printf("%d\n",count);

    add(pCount);

    printf("%d\n",count);

    add(&count);
    printf("%d\n",count);

    pNumber = add_and_return_pointer(pCount, true);

    printf("%d\n",*pNumber);

    count = *(&count) + 10;

    printf("%d\n",count);
}