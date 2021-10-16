#include<stdio.h>
#include<string.h>

void writeFile(FILE*fin,FILE*fout){
	char c;
	int i=2;
	fprintf(fout,"1 ");
	do{
		c=fgetc(fin);
		printf("%c",c);
		if(c!='\n'&&c!=EOF) fputc(c,fout);
		if(c=='\n'){
			fprintf(fout,"\n%d ",i);
			i++;
		}
	}while(c!=EOF);
}

int main()
{
	char str[100];
	FILE*fin,*fout;
	fin=fopen("in_hw.txt","r");
	fout=fopen("out_hw.txt","w");
	if(fin==NULL) printf("error");
	else if(fout==NULL) printf("error");
		else{
			printf("file out_hw.txt\n");
			writeFile(fin,fout);
			fclose(fin);
			fclose(fout);
			printf("\nSaved on file");
			
		}
	

return 0;
}

