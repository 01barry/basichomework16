#include <iostream>

#include <string.h>



int main()

{

    char number[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};

    char ch[3][3]={"�a","��","�B"};

    char bigger[3][3]={"��","��","�U"};

    int num0, num01, len0, groups, start, num02, num03=0, flag=0;

    char n[20];

    printf("�п�J�@�Ӿ��(���ƻݭn�p��16���)�G" );

    scanf("%s",n); 

    len0 = strlen(n);

    if (len0>16)  

    {

                printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");

                exit(0);

    }

    groups=(len0-1)/4+1;

    printf("�ഫ�᪺���G�G");

    for(num0=0;num0<groups;num0++)

    {

                        flag=0;

                        if (num0==0) start=(4-len0%4)%4;

                        else start=0;

                        for (num01=start;num01<4;num01++)

                        {

                            num02=n[num03++]-48;

                            if(num02==0) continue; 

                            printf("%s", number[num02]);

                            if(num01!=3) 

                             printf("%s",ch[num01]);

                             flag=1;

                        }

                        if (groups!=1 && num0!=groups-1 && flag!=0)

                        {

                                     printf("%s",bigger[4-groups+num0]);

                        }

    }

    printf("\n");

    system("pause");

    return 0;

}
