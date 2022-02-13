#include<stdio.h>
int input_side()
{
  int x;
  printf("Enter the side length:\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c,int *isscalene)
{
  if((a!=b) && (b!=c) && (a!=c))
  *isscalene=1;
  else 
  *isscalene=-1;
}
void output(int a,int b, int c,int isscalene)
{
  if(isscalene==1)
  printf("The triangle is a scalene triangle\n");
  else 
  if(isscalene==-1)
  printf("The triangle is not a scalene triangle\n");
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c,&isscalene);
  output(a,b,c,isscalene);
  return 0;
}