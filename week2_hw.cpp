#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE*fp;
    fp=fopen("out.txt","w");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }
    int n,*p,sum=0;
    printf("nhap n: ");scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    for(int i=n-1;i>=0;i--) fprintf(fp,"%d ",p[i]);
    fprintf(fp,"%d",sum);
    free(p);
    fclose(fp);
    
    return 0;
}
