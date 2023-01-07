#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int widht;
    int height;
} area;
area triangle;

void print_function(){
    printf("enter the widht of the triangle:");
    scanf("%d",&triangle.widht);
    printf("enter the height of the triangle:");
    scanf("%d",&triangle.height);
}

void calculator(){
    printf("The area of the triangle is: %d",(triangle.widht + triangle.height)/2);
}


int main(void)
{
    print_function();
    calculator();
}
