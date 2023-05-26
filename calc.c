#include<stdio.h>
int result=0, num1,num2;
char opt;
int main()
{

while(1)
{
    if((opt=='q') || (opt=='Q'))
    {
        break;
     }
    printf("enter two integers and operator\n");
    scanf("%d %d %c",&num1,&num2,&opt);
    
    switch(opt)
    {
    case '+' :
               result = num1 + num2;
               break;
    case '-' :
               result = num1 - num2;
               break;
    case '*' :
               result = num1 * num2;
               break;
    case '%' :
               result = num1 % num2;
               break;
    case '/' : 
                if(num2 == 0)
                {
                  printf("Error:Divide by zero\n");
                  continue;
                  }
                else
                {
                result = num1 / num2;
                }
                break;
    default :
             printf("cheak operator\n");
             break;
   }
   printf("Result is: %d\n",result);
 }
 return 0;
}        
