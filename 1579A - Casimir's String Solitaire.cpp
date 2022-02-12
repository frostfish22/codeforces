#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int t;
    scanf("%d",&t);  //t组输入
    int i;
    getchar();  //吃掉t后的回车
    for(i=0; i<t; i++)
    {
        int numAC=0, numB=0;  //字母A和C的数量numAC,字母B的数量numB
        char ch;
        ch=getchar();
        while( ch != '\n' )  //以回车作为每组输入的结束标志
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
