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
	
	for (int j=0;j<i;j++){
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
