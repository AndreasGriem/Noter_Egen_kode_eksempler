#include <stdio.h>
#include <mm_malloc.h>

void add(int *count){
    *count = *count + 10;
    printf("%d\n",*count);
}

int* add_and_return_pointer(int *count){
    *count = *count + 10;
    printf("%d\n",*count);
    int *pCounter = NULL;
    // pCounter = malloc(sizeof(int));
    pCounter = count; // hvis programmet skal køre uden malloc kører denne linje eller jerne denne line og tilføj malloc som er på linjen ovenfor.
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

    pNumber = add_and_return_pointer(pCount);

    printf("%d\n",*pNumber);

    count = *(&count) + 10;

    printf("%d\n",count);
}