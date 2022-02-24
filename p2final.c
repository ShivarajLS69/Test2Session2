#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
printf("enter the points\n");
scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);   
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 float a,b,c;
 a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)); 
 c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 if(a>b+c && b>a+c && c>a+b)
 return 0;
 else
 return 1;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, float is_triangle)
{
  if(is_triangle==0)
  printf("points forms a traingle\n");
  else
  printf("points do not forms a traingle\n");
}
int main()
{
float x1,y1,x2,y2,x3,y3,a;
input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);  
a=is_triangle(x1,y1,x2,y2,x3,y3);
output(x1,y1,x2,y2,x3,y3,a);
return 0;  
}