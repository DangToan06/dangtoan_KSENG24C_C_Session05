#include <stdio.h>

int main(){
	//Khai bao bien
	int sum, i, n;
	//Nhap vao gia tri
	scanf("%d", &n);
	
	//Tinh tong cac so tu 1 den gia tri nhap vao
	for(i = 1; i <= n; i++){
		sum += i;
	}
	//In ra tong
	printf("%d", sum);
	//Ket thuc chuong trinh
	return 0;
}

