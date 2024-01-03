#include<stdio.h>
int main() {
    int N,M;
    scanf("%d%d",&N,&M);
    int matrix[1005][1005];
    for(int i=0;i<N;++i) {
        for(int j=0;j<M;++j) {
            scanf("%d ",&matrix[i][j]);
        }
    }
    for(int i=0;i<N;++i) {
        int row_sum=0;
        for(int j=0;j<M;++j) {
            row_sum+=matrix[i][j];
        }
        printf("%d ",row_sum);
    }
}