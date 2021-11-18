#ifndef EXERCICE2A_H_INCLUDED
#define EXERCICE2A_H_INCLUDED


void EXERCICE_2_A()
{
 int j;
    for (j=1;j<=6;j++)
    {
        if(j%3==0)continue;
        else printf ("%d:",j);
        printf("itération%d\n",j);
    }
    system("pause");
#endif // EXERCICE2A_H_INCLUDED
