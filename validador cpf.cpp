#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cpf[13];
    int d[11];
    int k;
    int d9,d10;
    int soma1,soma2,soma3;
    int resto1,resto2;
    printf("Digite neste formato -_-  XXXXXXXXX-XX: ");
    scanf("%s", cpf);
    for(k = 0; k < 11; k++)
    {
        if(k < 9) d[k]=cpf[k]-48;
        else d[k]=cpf[k+1]-48;
    }
    soma1 = 10*d[0]+9*d[1]+8*d[2]+7*d[3]+6*d[4]+5*d[5]+4*d[6]+3*d[7]+2*d[8];
    resto1 = soma1%11;
    if (resto1<2) d9 = 0;
      else d9 = 11-resto1;
    soma2 = 11*d[0]+10*d[1]+9*d[2]+8*d[3]+7*d[4]+6*d[5]+5*d[6]+4*d[7]+3*d[8];
    soma3 = soma2 + 2*d[9];
    resto2 = soma3%11;
    if (resto2<2) d10 = 0;
      else d10 = 11-resto2;

    if (d[9] == d9 && d[10] == d10)
          printf("CPF %s Certin -_< !\n",cpf);
    else
          printf("CPF %s opa calma lá -_-  !\n",cpf);

    return 0;
}
