#include<stdio.h>
#include<math.h>
int binary(int dec)
{
    if(dec==0)
    {
        return 0;
    }
    else
        return(dec%2+10*binary(dec/2));
}

int decimal(int bin)
{
    int no=0, i=0;
    while(bin)
    {
        no=no+(bin%10)*pow(2, i);
        bin=bin/10;
        i++;
    }
    return(no);
}

int main()
{
    int dec,bin,x,y,z;
    char c;
    printf("enter in which number system do you to convert the no.(D/B) ??? :");
    scanf("%c",&c);
    if(c=='B'||c=='b')
    {
        printf("enter the Decimal no. to be converted :");
        scanf("%d",&dec);
        x=binary(dec);
        printf("%d is binary equivalent to %d",x,dec);
    }
    else
    {
        printf("Enter the binary no. to be converted :");
        scanf("%d",&bin);
        y=decimal(bin);
        printf("%d is decimal equivalent to %d",y,bin);
    }
    return 0;
}
