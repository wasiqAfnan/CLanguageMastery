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

    if (m.year > n.year)
    {
        printf("1");
    }
    if (m.year < n.year)
    {
        printf("-1");
    }

    if (m.month > n.month)
    {
        printf("1");
    }
    if (m.month < n.month)
    {
        printf("-1");
    }

    if (m.day > n.day)
    {
        printf("1");
    }
    if (m.day < n.day)
    {
        printf("-1");
    }

    if (m.hour > n.hour)
    {
        printf("1");
    }
    if (m.hour < n.hour)
    {
        printf("-1");
    }

    if (m.minute > n.minute)
    {
        printf("1");
    }
    if (m.minute < n.minute)
    {
        printf("-1");
    }

    if (m.second > n.second)
    {
        printf("1");
    }
    if (m.second < n.second)
    {
        printf("-1");
    }
    return 0;
}

void main()
{
    date first = {2021, 07, 25, 12, 25, 30};
    date sec = {2021, 07, 25, 12, 25, 30};
    int c = show(first, sec);
    printf("%d", c);
}