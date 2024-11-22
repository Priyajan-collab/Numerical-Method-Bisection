#include <math.h>
#include <stdio.h>

float func(float a) { return 2 * a - log10f(a) - 7; }
float mid_point(float a, float b) { return (a + b) / 2; }
float calculate_range(int r1, int r2) {
  float x, y = 0, c;
  for (int i = r1; i < r2 + 1; i++) {
    x = func(i);

    y = func(i - 1);
    printf("the value of y is :%f at %d\n", y, i - 1);
    printf("the value of x is :%f at %d\n", x, i);
    printf("one cycle done \n");
    if (x > 0 && y < 0 || x < 0 && y > 0) {
      return i - 1;
    }
  }
  return 0;
}

float find_root(float a, float b, float c) {
  float fx, fy, fc, temp = 0;

  while (fabs(temp - c) > 0.00001) {
    fx = func(a);
    fy = func(b);
    fc = func(c);
    printf("the value of a,b,c,fx,fy,fc ,%f,%f,%f,%f,%f,%f \n", a, b, c, fx, fy,
           fc);
    if (fc >= 0) {
      if (fx >= 0 && fy < 0) {
        a = c;
        printf("a switched with c 1.0 \n");
      } else {
        b = c;
        printf("b switched with c 1.1\n");
      }

    } else if (fc < 0) {
      if (fx < 0 && fy >= 0) {
        a = c;
        printf("a switched with c 2.0\n");

      } else {
        b = c;
        printf("b switched with c 2.1\n");
      }
    }

    temp = c;
    c = mid_point(a, b);
  }
  return c;
}

int main() {
  float a, b, c, root;
  int range1, range2;
  printf(
      "bro set the range, be careful about the range you set for example for "
      "log shit start the range at 2 then for everything else it's fine \n");
  scanf("%d", &range1);
  scanf("%d", &range2);
  a = calculate_range(range1, range2);
  b = a + 1;
  printf("here is the interval,%f ,%f\n", a, b);
  c = mid_point(a, b);
  root = find_root(a, b, c);
  printf("the value of root is %f \n", root);
}