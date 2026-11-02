#ifndef PASSENGER_H
#define PASSENGER_H

#include "ticket.h"
#include <stdbool.h>

typedef struct {
  char name[64];
  int age;
  Ticket ticket;
  bool has_student_card;
  bool has_identity_document;
} Passenger;

#endif // ! PASSENGER_H
