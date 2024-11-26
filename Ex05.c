#include <stdio.h>

int main(){
	//Khai bao bien
	int i, j;
	//In ra bang cuu chuong tu 1 den 9
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 10; j++){
			printf("%d x %2d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
	//Ket thuc chuong trinh
	return 0;
}

