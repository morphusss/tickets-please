#ifndef TICKETS_DATETIME_H
#define TICKETS_DATETIME_H

#include <stdbool.h>

typedef struct {
  int year;   /* Full year */
  int month;  /* 1-12 */
  int day;    /* Valid day for the given month */
  int hour;   /* 0-23 */
  int minute; /* 0-59 */
} DateTime;

bool datetime_equals(DateTime a, DateTime b);

#endif // !
