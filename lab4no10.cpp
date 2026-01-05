#include <stdio.h>
int main()
{
	int score[100000];
	
	int i=0;
	while (i>=0){
		scanf("%d",&score[i]);	
		if (score[i]==-1){
			break ;
		}
		i++;
	}
	
	int a,b,c,d,f;
	a=0;b=0;c=0;d=0;f=0;
	for (int j=0;j<i;j++){
		if (score[j]>=85){
			printf("%d(A)\n",score[j]);
			a++ ;
		}
		else if (score[j]>=75){
			printf("%d(B)\n",score[j]);
			b++ ;
		}
		else if (score[j]>=68){
			printf("%d(C)\n",score[j]);
			c++ ;
		}
		else if (score[j]>=55){
			printf("%d(D)\n",score[j]);
			d++ ;
		}
		
		else{
			printf("%d(F)\n",score[j]);
			f++ ;
		}
	}
	
	printf("A(%d)\n",a);
	printf("B(%d)\n",b);
	printf("C(%d)\n",c);
	printf("D(%d)\n",d);
	printf("F(%d)\n",f);
	
	return 0;
}
