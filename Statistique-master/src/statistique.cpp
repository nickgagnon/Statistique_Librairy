#include "statistique.h"

unsigned int Max(unsigned int *Table, unsigned int Amount) {
  unsigned int  Ans = 0;
  for (unsigned int  i = 0; i < Amount; i++) {
    if (*(Table + i) > Ans) {
      Ans = *(Table + i);
    }
  }
  return Ans;
}

unsigned int  Min(unsigned int *Table, unsigned int Amount) {
  unsigned int Ans = 1024;
  for (unsigned int i = 0; i < Amount; i++) {
    if (*(Table + i) < Ans) {
      Ans = *(Table + i);
    }
  }
  return Ans;
}

unsigned int Moy(unsigned int *Table, unsigned int Amount) {
  unsigned int Total = 0;
  for (unsigned int  i = 0; i < Amount; i++) {
    Total += *(Table + i);
  }
  float moyenne = Total * 1.0 / Amount;
  return moyenne;
}

void Stat(unsigned int *Table, unsigned int Amount, unsigned int *Max, unsigned int *Min, unsigned int *Moy ) {
  unsigned int Maximum = 0;
  unsigned int Minimum = 1024;
  long Total = 0;

  for (unsigned int i = 0; i < Amount; i++) {
    Total += *(Table + i);
    if (*(Table + i) > Maximum) { //Max
      Maximum = *(Table + i);
    }
    if (*(Table + i) < Minimum) { //Min
      Minimum = *(Table + i);
    }
  }
  int moyenne = Total / Amount;
  *Max = Maximum;
  *Min = Minimum;
  *Moy = moyenne;
}

