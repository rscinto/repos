
#include<iostream>
#include <stdio.h>
#pragma warning( disable : 4996)

int main()
{
    int num1 = 0;
    long num2 = 0;
    char letter = 'a';
    float num3 = 0.0;
    double num4 = 0.0;

    scanf("%d %ld %c %f %lf", &num1, &num2, &letter, &num3, &num4);

    printf("%d", num1);
    std::cout << std::endl;
    printf("%ld", num2);
    std::cout << std::endl;
    printf("%c", letter);
    std::cout << std::endl;
    printf("%f", num3);
    std::cout << std::endl;
    printf("%lf", num4);
    std::cout << std::endl;

  


	return 999;
}