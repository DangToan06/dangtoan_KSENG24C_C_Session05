#include <stdio.h>

int main(){
	//Khai bao bien
	int num, num1, num2;
	
	do{
	//giao dien menu
	printf("\nCALCULATOR\n");
	printf("\n1. Tong 2 so");
	printf("\n2. Hieu 2 so");
	printf("\n3. Tich 2 so");
	printf("\n4. Thuong 2 so");
	printf("\n5. Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			// Tinh toan tu
			printf("Hay nhap 2 so de may tinh tinh tong: ");
			scanf("%d %d", &num1, &num2);
			printf("Tong hai so la: %d\n", num1 + num2);
			break;
		case 2:
			printf("Hay nhap 2 so de may tinh tinh hieu: ");
			scanf("%d %d", &num1, &num2);
			printf("Hieu hai so la: %d\n", num1 - num2);
			break;
		case 3:
			printf("Hay nhap 2 so de may tinh tinh tich: ");
			scanf("%d %d", &num1, &num2);
			printf("Tich hai so la: %d\n", num1 * num2);
			break;
		case 4:
			printf("Hay nhap 2 so de may tinh tinh thuong: ");
			scanf("%d %d", &num1, &num2);
			float division = (float)num1 / num2;
			printf("Thuong hai so la: %f\n", division);
			break;
	}
	}while(num != 5);
	//ket thuc
	return 0;
}

