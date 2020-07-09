#include <stdio.h>
int main() 
{    
    int number1,number2,number3,sum;
    printf("Enter three integers: ");
    scanf("%d %d %d",&number1,&number2,&number3);
    sum = number1+number2+number3;      
    printf("%d + %d +%d = %d", number1, number2, number3, sum);
    return 0;
}
