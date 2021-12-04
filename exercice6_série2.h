#ifndef EXERCICE6_SÈRIE2_H_INCLUDED
#define EXERCICE6_SÈRIE2_H_INCLUDED

int main()
{
    int number=0;
    int div=0;
    int sum=0;
    printf("\n");
    printf("enter the number :");
    scanf("%d",&number);
    for (int i = 1;i<number;++i)
    {
        div =number%i;
        if (div==0)
            sum=sum+i;
    }
    if (sum==number)
        printf("the number is perfect");
    else
        printf("the number doesn't perfect");
    return 0 ;
}



#endif // EXERCICE6_SÈRIE2_H_INCLUDED
