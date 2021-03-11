



#include <stdio.h>
#include<iostream>

void update(int* a, int* b) 
{
    int* temp = a;
    int sum = 0;
    int diff = 0;

    sum = *a + *b;
    diff = abs(*a - *b);

    *a = sum;
    *b = diff;

    //std::cout << "sum: " << sum << std::endl;
    //std::cout << "diff: " << diff << std::endl;


}

int main() 
{
    int a, b;
    int* pa = &a, * pb = &b;

    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}