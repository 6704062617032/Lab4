#include <stdio.h>
int main()
{
	char c;
	int r,a,i,j ;
	
	scanf("%c %d %d",&c,&a,&r);
	
	for(i=1; i<=r; i++){
		for(j=1; j<=a; j++){
			printf("%c",c);
		}
		printf("\n");
	}
	
	return 0;
}
