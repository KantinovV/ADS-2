// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
using namespace std;
double pown(double value, uint16_t n) {
 if (n == 1) {
  return value;
 }
 if (n == 0) {
  return 1;
 }
 return(value*pown(value, n-1));
}
uint64_t fact(uint16_t n)  {
 if (n == 0) {
  return 1;
 }
 return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
 return(pown(x, n) / fact(n));
}
double expn(double x, uint16_t count) {
 uint16_t res = 1;
 for (int i = 0; i < count; i++) {
  res = res + pown(x, i) / fact(i);
 }
 return res;
}
double sinn(double x, uint16_t count) {
 double res = 0, res1 = 0;
 for (int i = 1; i <= count; i++) {
  res1 = pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
  res = res + res1;
 }
 return res;
}
double cosn(double x, uint16_t count) {
 double res = 0, res1 = 0;
 for (int i = 1; i <= count; i++) {
  res1 = pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
  res = res + res1;
 }
 return res;
}
