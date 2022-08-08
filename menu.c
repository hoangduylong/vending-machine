#include "menu.h"

void initMenu() {
  readDrinkInfo(all_drink, &maxdrink);
}

void menu_home(int *figures) {
  printf("\n==========================================\n\n");
  printf("Menu:\n");
  printf("------------------------------------------\n");
  printf("  No.      Drinks          Quantity\n");
  printf("------------------------------------------\n");
  printf("   1.  %10s            %2d\n"
         "   2.  %10s            %2d\n"
         "   3.  %10s            %2d\n"
         "------------------------------------------\n"
         "Press number 4 to quit menu",
         all_drink[0].brand, figures[0], 
         all_drink[1].brand, figures[1], 
         all_drink[2].brand, figures[2]);
  printf("\n------------------------------------------\n");
  printf("Please enter your choice: ");
}

void menu_bye() {
  printf("Bye\n");
}
