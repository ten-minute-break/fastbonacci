
#include "benchmark.h"

#define EASY_MODE 1

#if defined(EASY_MODE)
    #define MEASURE_TIME(fn)      { \
            auto measurement = MEASURE(fn, 9, 34, 20); \
            std::cout << measurement << std::endl; \
        }
#else
#define MEASURE_TIME(fn)      { \
            auto measurement = MEASURE(fn, 9, 34, 70); \
            std::cout << measurement << std::endl; \
        }
#endif 

long example__fibonacci(int n)
{
    if (n <= 1)
        return n;

    return example__fibonacci(n - 1) + example__fibonacci(n - 2);
}

int main()
{
    MEASURE_TIME(example__fibonacci);
    return 0;
}
