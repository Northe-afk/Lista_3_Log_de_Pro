#include <stdio.h>
#include <math.h>

/* Declarando e definindo uma função*/
double hipotenusa(double cat1, double cat2){
	return sqrt(pow(cat1, 2) + pow(cat2, 2));
}


int main(){
	double cat1 = 5., cat2 = 12.;
	
	printf("Hipotenusa: %g",hipotenusa(cat1, cat2 ));
	
		
	return 0;
}

