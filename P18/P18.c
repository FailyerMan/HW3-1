#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[60] = "Welcome",str2[60];
    int len;
    
    strcpy(str2,str1);
    printf("string2 = %s\n",str2);
    len = strlen(str2);
    printf("字串長度為%d\n",len);
    system("pause");
    return 0;
}