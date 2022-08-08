#ifndef DRINK_H
#define DRINK_H

#include <stdio.h>
#include <string.h>

typedef struct {
  int number;
  char brand[30];
  int price;
} drink;

void readDrinkInfo(drink all_drink[20],int *max_drink);
char *number2brand(drink all_drink[20], int max_drink, int number);
int brand2number(drink all_drink[20], int max_drink, char* brand);

#endif
