#include <stdio.h>

float func(float a) { return a * a + 2 * a - 1; }
float mid_point(float a, float b) { return (a + b) / 2; }
float calculate_range() {
  float x, y = 0, c;
  for (int i = -5; i < 6; i++) {
    x = func(i);

    y = func(i - 1);
    printf("the value of y is :%f at %d\n", y, i - 1);
    printf("the value of x is :%f at %d\n", x, i);
    printf("one cycle done \n");
    if (x > 0 & y < 0 | x < 0 & y > 0) {
      return i - 1;
    }
  }
  return 0;
}

int main() {
  float a, b;
  a = calculate_range();
  b = a + 1;
  printf("here is the interval,%f ,%f", a, b);
}