#ifndef EXERCICE7_SÈRIE2_H_INCLUDED
#define EXERCICE7_SÈRIE2_H_INCLUDED

int main()
{
    int v0=2;
   int Vn,i,n;
   int sumV;
   printf("entrer n: \n");
   scanf("%d",&n);
   printf("%d",Vn);
   for (i=2;i<=n;i++)
    {
    if (i % 2 == 0)
    Vn = Vn+2;
   else
    Vn = Vn+4;
   printf("Vn=%d",Vn,i);
   sumV=sumV+Vn;
   }
   printf("sumV=%d",n,sumV);
   return 0 ;
}



#endif // EXERCICE7_SÈRIE2_H_INCLUDED
