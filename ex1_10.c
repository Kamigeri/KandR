#include <stdio.h>
 
#define BACK_SLASH '\\'
 
int main(void)
{
 int c;
 
 while((c = getchar()) != EOF)
 {
  switch(c)
  {
  case '\b':
   putchar(BACK_SLASH);
   putchar('b');
   break;
  case '\t':
   putchar(BACK_SLASH);
   putchar('t');
   break;
  case BACK_SLASH:
   putchar(BACK_SLASH);
   putchar(BACK_SLASH);
   break;
  default:
   putchar(c);
   break;
  }
 }
 return 0;
