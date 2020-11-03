#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static long toSeconds(long timestamp)
{
    return timestamp / 1000;
}

static long toMinutes(long timestamp)
{
    return toSeconds(timestamp) / 60;
}

static long toHours(long timestamp)
{
    return toMinutes(timestamp) / 60;
}

static long toDays(long timestamp)
{
    return toHours(timestamp) / 24;
}

static long getTimestamp(void)
{
    time_t seconds = time(0);
    return seconds * 1000;
}

int main()
{
    printf("%ld\n", toDays(getTimestamp()));
    return EXIT_SUCCESS;
}
