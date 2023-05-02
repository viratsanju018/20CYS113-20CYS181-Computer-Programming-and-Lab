#include<stdio.h>
int main() {
  double time, temp ;
  printf("ENTER THE TIME ELASPED AFTER THE POWER SHUT DOWN ( IN HOURS ): ");
  scanf("%lf", &time);
  temp = ((4*time*time)/((time)+2))-20;
  printf("THE TEMPERATURE IS %f IN THE FREEZER", temp );
  return 0;
  }
    
