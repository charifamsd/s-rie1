#ifndef EXERCICE3_SÈRIE2_H_INCLUDED
#define EXERCICE3_SÈRIE2_H_INCLUDED

int main()
{
    int age;
    char situation;
    char sexe;
    printf("entrer  le sexe h ou bien  f  : \n " );
    scanf("%c",&sexe);
    printf("entrer la situation c ou bien m :\n");
    scanf(" situation=%c",&situation);
    printf("entrer age : \n  ");
    scanf("%d",&age);
    if(sexe == 'h')
		if ((age<20 && situation == 'c'  ) || (age>70 && situation =='m' ))
			printf("pas imposable \n ");
	if(sexe == 'f')
		if ((age<22 && situation == 'c' )||(age>55 &&  situation =='m'))
                  printf("pas imposable \n ");
    else
        printf("imposable \n");
getchar();

}

#endif // EXERCICE3_SÈRIE2_H_INCLUDED
