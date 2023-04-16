#include <stdio.h>
#include <processthreadsapi.h>

double get_cpu_time()
{
    FILETIME a, b, c, d;
    if (GetProcessTimes(GetCurrentProcess(), &a, &b, &c, &d) != 0)
    {
        //  Returns total user time.
        //  Can be tweaked to include kernel times as well.
        return (double)(d.dwLowDateTime |
                        ((unsigned long long)d.dwHighDateTime << 32)) *
               0.0000001;
    }
    else
    {
        //  Handle error
        return 0;
    }
}

int main()
{
    double sum = 0;
    double add = 1;

    // Start measuring time
    double begin = get_cpu_time();

    int iterations = 1000 * 1000 * 1000;
    for (int i = 0; i < iterations; i++)
    {
        sum += add;
        add /= 2.0;
    }

    // Stop measuring time and calculate the elapsed time
    double end = get_cpu_time();
    double elapsed = (end - begin);

    printf("Result: %.20f\n", sum);

    printf("Time measured: %.3f seconds.\n", elapsed);

    return 0;
}