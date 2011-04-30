#include <stdio.h>

int main()
{
    int a[10],c=0,x,y,b;
    printf("请输入数字：");
    scanf("%d",&b);
    for(;b!=0;)
    {
        a[c++]=b%10;
        b=b/10;
    }
    for(x=0;x<c;x++)
    for(y=x+1;y<c;y++)
    {
        if(a[x]==a[y])
        {
            printf("有重复数字！\n");return 0;
        }
   }
   printf("没有重复数字！\n");return 0;
}
