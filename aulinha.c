#include <stdio.h>
void lerarray(float *v, int n){
	int i = 0;
	for(i = 0; i<n; i++)
		scanf("%f", &v[i]);
}

void imprimearray(float *v, int n){
	printf("Os valores do vetor sao:\n");
	int i = 0;
	for(i = 0; i<n; i++)
		printf("%f\n", v[i]);
}

float mediaarray(float *v, int n){
	float media = 0;
	int i = 0;
	for(i = 0; i<n; i++)
		media += v[i];
	return media/5;
}

int main(){
	float array[5];
	array[0] = array[1] = array[2] = array[3] = array[4] = 0;
	printf("Digite os valores do vetor:\n");
	lerarray(array, 5);
	imprimearray(array, 5);
	printf("A media e: %f\n", mediaarray(array, 5));
	
	
	
}
/*
	v --> end. primeiro elemento
	v+i --> end. elemento i
	v{i] --> cont. elemento i
	*(v+i) --> cont. elemento i
*/
