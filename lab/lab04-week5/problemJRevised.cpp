#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool *SieveOfEratosthenes(int endNumber)
{
    int startNumber = 2;
    //bool  primeBoolArray[endNumber + 1];
    bool *primeBoolArray;
    primeBoolArray = (bool *) malloc((endNumber + 1) * sizeof(bool));

    memset(primeBoolArray, 1, (endNumber + 1) * sizeof(bool));

    for (int position = startNumber; position * position <= endNumber; position++)
    {
        if (primeBoolArray[position])
        {
            for (int i = position * position; i <= endNumber; i += position)
            {
                primeBoolArray[i] = false;
            }
        }
    }

    return primeBoolArray;


}

int main()
{
    bool *p;
    int i;

    p = SieveOfEratosthenes(100);
    for ( i = 0; i < 100; i++ )
    {
        printf( "*(p + %d) : %d\n", i, *(p + i));
    }

    return 0;
}