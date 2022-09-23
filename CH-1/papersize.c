#include<stdio.h>
int main()
{
  int h=1189,w=841;
  for(int i=0; i<8; i++)
  {
    int t=h;
     h=w;
     w=t/2;

  printf("%d mm x %d mm\n",h,w);

  }  

    return 0;
}