#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int sayi1,sayi2,toplam;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	toplam = sayi1+sayi2 ;
	printf("%d + %d = %d",sayi1,sayi2,toplam);
	
	return 0;
}
