#include <stdio.h>
int main()
{
	int s,i,j;
	
	scanf("%d",&s);
	
	int score[s] ;
	
	for (i= 0;i<s ;i++){
		
		scanf("%d",&score[i]);
		
		
	}
	
	for (j=0;j<s;j++){
		if (score[j]>=85){
			printf("%d(A)\n",score[j]);
		}
		else if (score[j]>=75){
			printf("%d(B)\n",score[j]);
		}
		else if (score[j]>=68){
			printf("%d(C)\n",score[j]);
		}
		else if (score[j]>=55){
			printf("%d(D)\n",score[j]);
		}
		
		else{
			printf("%d(F)\n",score[j]);
		}
	}
}
