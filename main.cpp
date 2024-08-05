#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        printf("%d\n", 0);
        return 0;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int result = 0;

    for (int i = 0; i < a; i++)
    {
        result = result + b;
    }

    printf("%d\n", result);
    return result;
}
