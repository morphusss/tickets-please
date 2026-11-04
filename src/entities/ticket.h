#ifndef TICKET_H
#define TICKET_H

#include "datetime.h"

typedef enum { STANDARD, STUDENT, SENIOR } TicketCategory;

typedef struct {
  char route[100];
  DateTime departure_time;
  DateTime arrival_time;
  TicketCategory category;
  int seatNumber;
} Ticket;

#endif // !
