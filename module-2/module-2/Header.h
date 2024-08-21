#include <iostream>
#define USE_FLOAT 
#ifdef USE_FLOAT
typedef float Number;
#else
typedef int Number;
#endif

    Number factorial(Number n) 
    {
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n - 1);
        }
    }

