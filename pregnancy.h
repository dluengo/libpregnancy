#ifndef __PREGNANCY_H
#define __PREGNANCY_H

enum months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

enum month_errors {
    EWRONGMONTH
};

const int MONTHS_PER_YEAR = DECEMBER - JANUARY;

int calculate_pregnancy_month(int b_month);

#endif
