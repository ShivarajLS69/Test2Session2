#iclude<stdio.h>
#iclude<math.h>
int input_number();
{
int a;
printf("enter any number\n");
scanf("%d",&a); 
return a; 
}
int is_prime(int n)
{
for(i=2;i<sqrt(n);i++)
if(n%i==0);
return 0;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
  printf("given number is not a prime\n");
  else
  printf("given number is a prime\n");
}
int main()
{
 int a,b;
 a= input_number();
 b= is_prime(a);
 output(a,b);
 return 0;
}

