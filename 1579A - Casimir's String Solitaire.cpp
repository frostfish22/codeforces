#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int t;
    scanf("%d",&t);  //t������
    int i;
    getchar();  //�Ե�t��Ļس�
    for(i=0; i<t; i++)
    {
        int numAC=0, numB=0;  //��ĸA��C������numAC,��ĸB������numB
        char ch;
        ch=getchar();
        while( ch != '\n' )  //�Իس���Ϊÿ������Ľ�����־
        {
            if(ch=='A' || ch=='C')
            {
                numAC++;
            }
            else if(ch=='B')
            {
                numB++;
            }
            ch=getchar();
        }
 
        if(numAC == numB)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
