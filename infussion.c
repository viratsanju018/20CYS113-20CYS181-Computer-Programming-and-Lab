#include<stdio.h>
int main() {
double v, hr , infusion, min ; 
printf(" ENTER THE VOLUME TO BE INFUSED (IN MIN) : \n");
scanf("%lf", &v);
printf("ENTER THE TIME IN MINUTES : \n");
scanf("%lf",&min);
hr=min/60;
infusion=v/hr;
printf("THE INFUSION RATE IS %f \n", infusion);
return 0;
}
