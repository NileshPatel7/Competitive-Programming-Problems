#include <stdio.h>

int count(int c);
int reverse(int n);

int reverse(int n)
{
    int p = 0,i = 0,rev = 0;
    int c = count(n);
    while(n)
    {
        p=n%10;
        for(i = 1;i<c;i++)
        {
            p=p*10;
        }
        c--;
        rev+=p;
        n/=10;
    }
    return rev;
}
int count(int c)
{
    int i = 0;
    while(c)
    {
        c/=10;
        i++;
    }
    return i;
}
int main()
{
    int x = 0 ,rev = 0,p = 0;
    printf("input :  x = ");
    scanf("%d",&x);
   
    if(x>0){
        rev=reverse(x);
        p=x;
    }
    else{
        p=x*(-1);
        rev=reverse(p);
    }
    if(rev == p)
    { 
        if(x>0){
            printf("output : true\n");
            printf("Explanation : %d reads as %d from left to right and from right to left.\n",x,rev);
        }
        else{
            printf("output : false\n");
            printf("Explanation: From left to right, it reads %d. From right to left, it becomes %d-. There fore it is not a palindrome.",x,rev);
        }
    }
    else
    {
        printf("output : false\n");
        printf("Explanation : Reads %d from right to left. Therefore it is not a palindrome.",rev);
    }
    return 0;
}
