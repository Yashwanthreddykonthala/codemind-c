#include<stdio.h>
int main() {
    char str[100];
    int maxAscii=0;
    printf("");
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i]!=NULL;i++) {
        if((int)str[i]>maxAscii) {
            maxAscii=(int)str[i];
    }
}
printf("%c
",(char)maxAscii);
}