#include <stdio.h>

int main(){
	//Khai bao bien
	int temp, a, b;
	//Nhap 2 so bat ky
	scanf("%d %d", &a, &b);
	//a va b khong duoc bang 0
	while( a == 0 && b == 0){
		printf("2 so nhap vao khong duoc bang 0 hãy nhap lai: ");
		scanf("%d %d", &a, &b);
	}
	int product = a * b; 
	//Tim uoc so chung lon nhat
	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	//Tinh BSCNN
	int bsc = product/a;
	//In dap an
	printf("BSCNN la: %d", bsc);
	//Ket thuc
	return 0;
}

