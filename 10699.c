#include <stdio.h>
#include <time.h>

int main()
{
    time_t ti;
    struct tm *ptm;
    char today[30];

    time(&ti);
    ptm = localtime(&ti);
    strftime(today,sizeof(today),"%Y-%m-%d",ptm);

    printf("%s",today);
    
    return 0;
}
