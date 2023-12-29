#include<stdio.h>
#include<string.h>
int main() {
    int l=0,i=0;
    char s[30];
    scanf("%[^
]s",&s);
    while(s[i]!=0) {
        if(s[i]>='a'&&s[i]<='z') {
        l++;
    }
    i++;
}
printf("%d",l);
}