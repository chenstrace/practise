#include <stdio.h>
#include <stdlib.h>

int main()
{
    int question[10] = {9,19,29,39,49,59,69,79,89,99};
    int index = 0;
    while(1)
    {
        int ans = -1;
        printf("%d的下一个数是?\n",question[index]);
        printf("请输入:");
        int ret = scanf("%d",&ans);
        fflush(stdin);
        while(ret !=1 || ans != (question[index] +1 ))
        {   
            printf("你答错了，再答一次吧\n");
            printf("%d的下一个数是?\n",question[index]);
            printf("请输入:");
            ret = scanf("%d",&ans);
            fflush(stdin);
            
        }
        printf("你答对了\n\n");
        index = (index+1)%10;
    }

    
    return 0;
}
