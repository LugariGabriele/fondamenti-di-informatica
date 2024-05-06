#include <math.h>

struct punto
{
    double x, y;
};

extern double distanza(struct punto *a, struct punto *b)
{

    double dist = sqrt((pow(a->x - b->x, 2)) + (pow(a->y - b->y, 2)));
    return dist;
}

int main()
{
    struct punto a = {1, 1};
    struct punto b = {4.0, 7.0};
    double d = distanza(&a, &b);
}
