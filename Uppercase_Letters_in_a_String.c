#include<stdio.h>
#include<string.h>
int main() {
    int u=0,i=0;
    char s[100];
    scanf("%[^
]s",&s);
    while(s[i]!=0) {
        if(s[i]>='A'&&s[i]<='Z') {
            u++;
        }
        i++;
    }
    printf("%d",u);
}