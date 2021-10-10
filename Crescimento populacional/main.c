#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void collatz(int nu);
int main() {
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Informe o número natural:");
	scanf("%d",&num);
	
	collatz(num);
	
	return 0;
}

void collatz(int nu){
	int nu_a;
	if(nu==1){
		printf("%d",nu);
	}
	else if(nu<=0){
		printf("\nPara esse número informado não existe sequencia\n");
	}
	else{
		nu_a=nu;
		printf("%d",nu);
		for(nu_a;nu_a>1;nu_a){
		if(nu_a%2==0){
			nu_a=nu_a/2;
		}else{
			nu_a=nu_a*3+1;
		}
	
		printf(" %d ",nu_a);
	}
}
}
