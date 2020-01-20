#include <errno.h>

#include "pregnancy.h"

int calculate_pregnancy_month(int b_month) {
    if (b_month < JANUARY || b_month > DECEMBER) {
        errno = -EWRONGMONTH;
        return -1;
    }

    return b_month + 3 % MONTHS_PER_YEAR;
}

