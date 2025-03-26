#include<stdio.h>
#include<math.h>
int main()
{
    double d,lamda,angle_degree,m;
    printf("Enter the wave length lamda(nm) = ");
    scanf("%lf",&lamda);
    if(lamda<380 || lamda>750)
    {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }
       if(lamda>=380 && lamda<=450){
        printf("violet\n");
       }
        else if(lamda>450 && lamda<= 485){
        printf("blue\n");
        }
        else if(lamda>485 && lamda<= 500){
        printf("cyan\n");
        }
        else if(lamda>500 && lamda<=565){
        printf("green\n");
        }
        else if(lamda>565 && lamda<=590){
        printf("yellow\n");
        }
        else if(lamda>590&& lamda<= 625){
        printf("orange\n");
        }
        else if(lamda>625 && lamda<= 750){
        printf("red\n");
        }
        else{
        printf("out of range\n");
        }

    //converting into meter
    double lamda2= (lamda*0.000000001);
    printf("Enter the slit differece d(um) = ");
    scanf("%lf",&d);
    double d2= (d*0.000001);
     printf(" Enter the angle of degree = ");
    scanf("%lf",&angle_degree);
        //converting degrees to radians
        double angle_radian= angle_degree * (M_PI / 180.0) ;
        //calculating the sin of the angle
        double Result= sin(angle_radian);
         m = (d2*Result)/lamda2;
         int m_rounded=round(m);
        switch(m_rounded)
        {
        case 1 :
            printf("1-st order maxima\n");
            break;
        case 2 :
            printf("2-nd order maxima\n");
            break;
        case 3 :
            printf("3-rd order maxima\n");
            break;
        default:
            printf("%d-th order maxima\n",m_rounded);
            break;
        }
        return 0;

}
