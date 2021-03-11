#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int array[1000];
    int elementsRequested = 0;

    cin >> elementsRequested;

    for (int i = 0; i < elementsRequested; i++)
    {
        cin >> array[i];
    }

    for (int i = elementsRequested - 1; i >= 0; i--)
    {
        cout << array[i] <<" ";
    }


    return 0;
}
