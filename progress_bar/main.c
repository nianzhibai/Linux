#include "progressbar.h"
typedef void (*callback_t)(int);

void downlode(callback_t t)
{
    int total = 1000;
    int curr = 0;
    while(curr <= total)
    {
        t(curr * 100 / total);
        usleep(10000);
        curr += 1;
    }
}
int main()
{
    downlode(progressbar);
    printf("\n");
    return 0;
}
