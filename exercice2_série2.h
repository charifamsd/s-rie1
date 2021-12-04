#ifndef EXERCICE2_SéRIE2_H_INCLUDED
#define EXERCICE2_SéRIE2_H_INCLUDED
int main()
{
    float pa,ca,fr,fv,TVA,HT,TTC;
    char type;
    printf ("entrer type : ");
    scanf("%c",&type);
    getchar();
    printf("entrer prix d'achat  : ");
    scanf("%f",&pa);
    if (pa>9000){
    {
        fr=pa*4/100;
    }
   if ( 5000<pa<9000)
   {
       fr=pa*6/100;
   }
   if (2000<pa<5000)
       {
    fr=pa*8/100;
       }
    else
    {
     fr=pa*1/100;
    }
}
ca=pa+fr;
fv=ca*10/100;
switch (type){
    case 'x':
    TVA=30./100.;
    break;
    case 'y':
    TVA=38./100.;
    break;
    case 'z':
    TVA=43./100.;
    break;
    case 't':
    TVA=47./100.;
    break;
    case 'U':
    TVA=49./100.;
    break;
}
HT=ca+fv;
TTC=HT+HT*TVA;
printf("pa=%f \n",pa);
printf("fr=%f \n",fr);
printf("fv=%f \n",fv);
printf("TVA=%f \n",TVA);
printf("HT=%f \n",HT);
printf("TTC=%f \n",TTC);
return 0;
}


#endif // EXERCICE2_SéRIE2_H_INCLUDED
