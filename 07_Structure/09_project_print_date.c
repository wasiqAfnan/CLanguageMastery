#include <stdio.h>

typedef struct date
{
    int year;
    int month, day;
    int hour, minute, second;
} date;

int show(date m, date n)
{
    printf("%d/%d/%d\t %d:%d:%d\n", m.year, m.month, m.day, m.hour, m.minute, m.second);
    printf("%d/%d/%d\t %d:%d:%d\n", n.year, n.month, n.day, n.hour, n.minute, n.second);
    return 0;
}

void main()
{
    date first = {2021, 07, 25, 12, 30};
    date sec = {2021, 07, 25, 12, 25, 30};
    show(first, sec);
    // printf("%d", c);
}