#include<stdio.h>
int main()
{
  double length, area;
  printf("Enter length: ");
  scanf("%lf",&length);

  area = 6*length*length;
  printf("Area=%.2f",area);

  return 0;
}
