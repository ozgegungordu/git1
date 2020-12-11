#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a,b,c;
	printf("Bir sayi giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&b);
	c = a+b ;
	printf("%d + %d = %d",a,b,c);
	
	return 0;
}
