#include <stdio.h>
#include <math.h>

float calcula_hipotenusa(float x, float y){
	return sqrt(pow(x,2) + pow(y,2));
}

int eh_triangulo_retangulo(float a, float b, float c){
	float hipotenusa = 0;
	
	if(a > b && a > c){
		hipotenusa = calcula_hipotenusa(b, c);
		return hipotenusa == a;
	}
	else{
		if(b > a && b > c){
			hipotenusa = calcula_hipotenusa(a, c);
			return hipotenusa == b;
		}
		else{
			if(c > a && c > b){
				hipotenusa = calcula_hipotenusa(a, b);	
				return hipotenusa == c;
			}	
		}
	}
	
	if(hipotenusa == 0){
		return 0;
	}
}

int main(){
	float a = 10., b = 10., c = 10.;
	
	printf("%d", eh_triangulo_retangulo(a, b, c));
	
	return 0;
}
