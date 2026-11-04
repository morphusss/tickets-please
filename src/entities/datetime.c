#include "datetime.h"

bool datetime_equals(DateTime a, DateTime b) {
  return a.year == b.year && a.month == b.month && a.day == b.day &&
         a.hour == b.hour && a.minute == b.minute;
}
