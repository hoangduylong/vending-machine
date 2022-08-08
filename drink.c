#include "drink.h"

void readDrinkInfo(drink all_drink[20], int *max_drink) {
  FILE *f = fopen("drink.txt", "r");
  int i = 0;

  while (!feof(f)) {
    fscanf(f, "%d %s %d\n",
           &all_drink[i].number,
           all_drink[i].brand,
           &all_drink[i].price);
    i++;
  }
  *max_drink = i;
}

char *number2brand(drink all_drink[20], int max_drink, int number) {
  for (int i = 0; i < max_drink; i++) {
    if (all_drink[i].number == number) {
      return all_drink[i].brand;
    }
  }
  return NULL;
}

int brand2number(drink *all_drink, int max_drink, char *drink) {
  for (int i = 0; i < max_drink; i++) {
    if (strcmp(all_drink[i].brand, drink) == 0) {
      return all_drink[i].number;
    }
  }
  return -1;
}
