// example 18-6
//

#include <stdio.h>

int main(void)
{
	int a=10, b=20;
	int *p =NULL;
	
	p = &a ;
	printf("p = %p\n",p); //a의 주소  
	printf("*p = %d\n\n",*p); // 10
	
	p = &b ;
	printf("p = %p\n",p); //b의 주소 
	printf("*p = %d\n\n",*p); //20
	
return 0 ;
}
