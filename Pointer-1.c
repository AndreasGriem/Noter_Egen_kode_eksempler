#include <stdio.h>

void add(int *count){
    *count = *count + 10;
    printf("%d\n",*count);
}

int main(void)
{
    int *pcount = NULL;
    int count = 27;

    pcount = &count;

    count = count + 10;

    printf("%d\n",*pcount);

    *pcount = *pcount + 10;

    printf("%d\n",count);

    add(pcount);

    printf("%d\n",count);

    add(&count);
    printf("%d",count);


}