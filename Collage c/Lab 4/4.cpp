#include<stdio.h>
#include<math.h>
void findRoots(float a, float b,float c){
	float d=b *b-4*a*c;
	if(d > 0){
		printf("Roots:%.2f and %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}else if (d==0){
		printf("Root:%.2f",-b/(2*a));
	}else{
		printf("Roots: %.2f+%.2fi and %.2f-%.2fi",-b/(2*a),sqrt(-d)/(2*a),sqrt(-d)/(2*a));
	}
}int main (){
	float a,b,c;
	printf("Enter coefficients a , b, c: ");
	scanf("%f %f %f",&a,&b,&c);
	findRoots(a,b,c);
	return 0;
}
