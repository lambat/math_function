#include <stdio.h>

<<<<<<< HEAD
//This is the line causing issue in the master branch
=======
//This is the line causing issue in the conflict branch
>>>>>>> conflict

//This is the second line causing issue in the <*master/conflict> branch

*delete as appropriate

//This is the second line causing issue in the <*master/conflict> branch

*delete as appropriate

float add (float x, float y)

{
    return x + y;
}

float multiply (float x, float y)

{
    return x * y;
}

float divide (float x, float y)

{
    return x / y;
}

float subtract (float x, float y)
{
    return x - y;
}

float minimum (float x, float y)
{
	if(x>y)         
    return y;
}

float maximum (float x, float y)
{
	if(x<y)         
    return y;
}

float mod (float x, float y)
{
    return x % y;
}

int main()
{
    float a, b, r;
    char op;
    do {
       printf("nuber  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);break;
           case '*' : r = multiply(a,b);break;
           case '-' : r = subtract(a,b);break;
           case '/' : r = divide(a,b);break;
           case 'm' : r = minimum(a,b);break;
           case 'M' : r = maximum(a,b);break;
	   case '%' : r = mod(a,b);break;
           case 'q' : break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye :)\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');
    
    return 0;
}
