#include <stdio.h>

int main(){
	//Khai bao bien
	long long i, n;
	//Nhap gia tri
	scanf("%lld", &n);
	//Kiem tra so nguoi dung nhap co trung voi so da cho hay khong
	while(n != 12){
		scanf("%lld", &n);
	}
	//Bao hieu ket thuc chuong trinh
	printf("Ket thuc!!!");
	return 0;
}

