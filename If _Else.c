#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  if(number < 0)
      printf("%d is a invalid number.",number);
  return 0;
}
