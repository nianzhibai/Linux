#include "progressbar.h"

//v1
//void progressbar()
//{
//    char arr[101] = { 0 };
//    char table[4] = {'|', '/', '-', '\\'};
//    int i = 0;
//    while(i <= 100)
//    { 
//        printf("%-100s\%d%%%c\r", arr, i, table[i % 4]);
//        fflush(stdout);
//        arr[i++] = '-';
//        usleep(50000);
//    }
//    printf("\n");
//}

//v2
char arr[101] = { 0 };
void progressbar(int rate)
{
    char table[4] = {'|', '/', '-', '\\'};
    printf("%-100s%d%%%c\r", arr, rate, table[rate % 4]);
    arr[rate] = '-';
    if(rate < 99)  arr[rate + 1] = '>';
}
