#include<stdio.h>
#include<math.h>
int main()
{
    double theta=45.0,ratio;
    int m=1;
    double theta_radian=theta*(M_PI/180.0);
    double result=sin(theta_radian);
    //calculating the ratio a/lamda
    ratio=m/result;
    printf("The ratio of the slit width to the wavelength=%.3lf",ratio);
    return 0;
}
