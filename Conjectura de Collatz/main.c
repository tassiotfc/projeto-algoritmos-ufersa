#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

double cresim(int anterior,int atual);
double popul(double x);

int main() {
	setlocale(LC_ALL,"Portuguese");

	int pop,ano_sim,t,i,ant,at;
	float cre;
	char c='%';
	t=0;
	i=1;

	printf("De quantos anos sera a simulação? ");
	scanf("%d",&ano_sim);
	if(ano_sim<0){
		printf("Simulação Invalida\n");
	}
	else if(ano_sim>100){
		printf("Não é porrivel estimar satisfatoriamente esse periodo informado\n");
	}
	else{
	printf("POPULAÇÂO TOTAL");
	for(t;t<=ano_sim;t++){
		pop=popul(t);
		printf("\nAno %d: %d habitantes",2000+t,pop);
	}
	printf("\n\nCRESCIMENTO\n");
	ant=popul(0);
	for(i;i<=ano_sim;i++){
		at=popul(i);
		cre=cresim(ant,at);
		printf("Ano %d: %.2f%c\n",i,cre,c);
		ant=at;	
	}
	}
	return 0;
}

double popul(double x){
	double res;
	res=ceil(((245000*pow(M_E,0.0467*x))/(2.8+(0.7*pow(M_E,0.0467*x)))));
	return res;
}

double cresim(int anterior,int atual){
	double res;
	res=((atual-anterior)/(float)anterior)*100;
	return res;
}
