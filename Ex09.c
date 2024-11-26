#include <stdio.h>

int main(){
	//Khai bao bien
	int num;
	do{
	//Giao dien menu
	printf("\n	MENU	\n");
	printf("1.Nhap 3 so\n");
	printf("2.Tong 3 so\n");
	printf("3.Trung binh cong 3 so\n");
	printf("4.So nho nhat\n");
	printf("5.So lon nhat\n");
	printf("6.Thoat\n");
	printf("\nMoi ban nhap lua chon: ");
	scanf("%d", &num);
	
	int num1, num2, num3;
	switch(num){
		//Nhap3 so
		case 1:
			printf("\nVui long nhap 3 so: ");
			scanf("%d %d %d", &num1, &num2, &num3);
			printf("3 so ban vua nhap la: %d %d %d\n", num1, num2, num3);
			break;
		//Tinh tong
		case 2:
			printf("\nNhap 3 so de tinh tong: ");
			scanf("%d %d %d", &num1, &num2, &num3);
			printf("Tong 3 so ban vua nhap la: %d\n", num1 + num2 + num3);
			break;
		//Tinh tbc
		case 3:
			printf("\nNhap 3 so de tinh trung binh cong: ");
			scanf("%d %d %d", &num1, &num2, &num3);
			printf("Tbc 3 so ban vua nhap la: %d\n", (num1 + num2 + num3)/3);
			break;
		//Tim nho nhat
		case 4:
			printf("\nNhap 3 so de tim so nho nhat: ");
			scanf("%d %d %d", &num1, &num2, &num3);
			int min = num1;
			if(num2 < min) min = num2;
			if(num3 < min) min = num3;
			printf("So nho nhat trong 3 so la: %d\n", min);
			break;
		//Tim lon nhat
		case 5:
			printf("\nNhap 3 so de tim so lon nhat: ");
			scanf("%d %d %d", &num1, &num2, &num3);
			int max = num1;
			if(num2 > max) max = num2;
			if(num3 > max) max = num3;
			printf("So nho nhat trong 3 so la: %d\n", max);
			break;
	}
	//Meu nhap 6 se ket thuc
    }while(num != 6);
	return 0;
}

