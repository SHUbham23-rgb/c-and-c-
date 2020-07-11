#include<stdio.h>
int main()
{
  int per;
  printf("enter the percentage");
  scanf("%d",&per);
  if(per<45)
  {
  printf("fail");
  return 0;
  }
  if(per>=45 || per<60)
  {
	  printf(" grade: D");
	  return 0;
  }
   if("per>=60 || per<70")
   {
	   printf("grade C");
	   return 0;
   }
   if(per>=70 || per<80)
   {
	   printf("grade: B");
	   return 0;
   }
   if(per>80)
   {
	   printf("grade: A");
	   return 0;
   }
   return 0;
}
