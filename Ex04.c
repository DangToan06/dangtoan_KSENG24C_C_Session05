#include <stdio.h>

int main(){
	//Khai bao bien
	int num;
	//Nhap mot so nguyen tu 1 -> 10
	printf("Hay nhap 1 so nguyen duong tu (1 -> 10): ");
	scanf("%d", &num);
	//Kiem soat nguoi dung nhap vao gia tri tu 1 den 10
	while(num < 0 || num > 11){
		printf("Gia tri ban nhap khong hop le nhap lai: ");
		scanf("%d", &num);
	}
	//in bang cuu truong
	int i;
	for(i = 1; i <= 10; i++){
		printf("%2d x %2d = %2d\n", num, i, num*i);
	}
	//Ket thuc chuong trinh

	return 0;
}

