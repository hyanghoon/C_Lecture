#include <stdio.h>
int main(void)
{
	FILE *fp ;
	char c;
	
	fp = fopen("test.txt","r");
	if(fp==NULL)
	    printf("파일 열기 실패\n");
	else 
	 printf("파일 열기 성공\n");
	
	while((c=fgetc(fp)) !=EOF)
	{
	   putchar(c);
    }
    
    fclose(fp);
 return 0;
}

