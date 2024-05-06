#include <math.h>
#include <corecrt_math_defines.h>
#define _use_math_defines

struct punto
{
    double x,y;
};

extern void rotazione(struct punto *p,double alpha){
    struct punto ris;
    ris.x= p->x*cos(alpha) - p->y*sin(alpha);
    ris.y= p->x*sin(alpha) + p->y*cos(alpha);

    *p=ris;

}

int main() {
    struct punto p = { 1.0,0.0 };
    struct punto p1;
    double gradi;

    for (gradi = 0.0; gradi <360.00 ; gradi+=45.0)
    {
        double alpha = gradi / 180 *M_PI;
        p1=p;
        rotazione(&p1,alpha);
    }
    return 0;
}
