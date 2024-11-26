#include <stdio.h>

int main(){
	//Khai bao bien va nhap xuat
	int i, j, n;
	scanf("%d", &n);
	//In ra tung so 1
	for(i = n; i > 0; i = i / 10){
		j = i % 10;
		printf("%d ", j);
	}
	//Ket thuc
	return 0;
}

