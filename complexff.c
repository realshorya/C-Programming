#include<stdio.h>
typedef struct complex
{
    int real;
    int img;
}comp;
void input(comp *p)
{
    printf("\nEnter Real and Imaginary Number:");
    scanf("%d%d",&p->real,&p->img);
}
comp sum(comp x,comp y)
{
    comp z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
}
void show(comp p)
{
    printf("\nComplex Number: %d + i%d",p.real,p.img);
}
int main()
{
    comp a,b,c;
    input(&a);
    input(&b);

    c = sum(a,b);
    show(a);
    show(b);
    show(c);
    return 0;
}
