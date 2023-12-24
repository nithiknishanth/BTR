#include<stdio.h>
#include<math.h>

int main(){

    double A = sqrt(9); //square root function
    double B = pow(2,4); //power fundction
    int C = round(3.14); // rounding up
    int D = ceil(3.14); //rounding up to celing
    int E = floor(3.14); //rounding to floor
    double F = fabs(-3.14); //turns positive
    double G = log(3); //log of a number
    double H = sin(45);
    double I = cos(45); 
    double J = tan(45);

    const double PI = 3.14159265;
    double radius;
    double circumference;

    printf("\n Enter the radius of a circle :");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    printf("\nThe Circumefrence of a circle is %lf", circumference);
    printf("\nThe area of the circle is : %lf", area);

    return 0;

}