#include<stdio.h>
#include<string.h>
int main() {
    char str1[10],str2[10],c;
    scanf("%s
%s",&str1,&str2);
    c=strcmp(str1,str2);
    if(c==0)
    printf("Strings are Equal");
    else
    printf("Strings are not Equal");
}