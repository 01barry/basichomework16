#include <iostream>

#include <string.h>



int main()

{

    char number[10][3]={"箂","滁","禠","把","竩","ヮ","嘲","琺","","╤"};

    char ch[3][3]={"","ㄕ","珺"};

    char bigger[3][3]={"","货","窾"};

    int num0, num01, len0, groups, start, num02, num03=0, flag=0;

    char n[20];

    printf("叫块俱计(计惠璶16计)" );

    scanf("%s",n); 

    len0 = strlen(n);

    if (len0>16)  

    {

                printf("俱计禬筁16计, 礚猭锣传...\n");

                exit(0);

    }

    groups=(len0-1)/4+1;

    printf("锣传挡狦");

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
