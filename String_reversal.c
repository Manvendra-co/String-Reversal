#include <stdio.h>
#include<string.h>
int main()
{
    int len;int i;
    char str[50];
    printf("Enter the string to be reversed: \n");
    scanf("%s",&str);
    len=strlen(str); //length of string entered
    
    printf("Reversed string is: \n");
    for(i=len-1;i>=0;i--) 
    {
        printf("%c",str[i]);
    }
}
