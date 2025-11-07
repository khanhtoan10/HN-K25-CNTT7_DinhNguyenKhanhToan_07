#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int arr[100];
	int n = 0;
	int choice;
	char confirm = 'Y';
	int sorted = 0;
	
	while(confirm == 'Y' || confirm == 'y' ){
		printf("\n=====================MENU=====================\n");
		printf("1.nhap so luong phan tu va gia tri tung phan tu cho mang\n");
		printf("2.in ra gia tri cac phan tu trong mang\n");
		printf("3.Tinh tong binh phuong cua tat ca cac phan tu trong mang\n");
		printf("4.In ra gia tri nho nhat cua cac phan tu trong mang\n");
		printf("5.Them moi mot phan tu vao dau mang\n");
		printf("6.Xoa phan tu tai mot vi tri cu the\n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.Kiem tra su ton tai cua phan tu trong mang\n");
		printf("9.In ra cac phan tu xuat hien dung mot lan trong mang\n");
		printf("10.Cap nhat tat ca so am trong mang thanh so doi cua no\n"); 
		printf("1. ==============================================\n");
		printf("Moi ban nhap lua chon: \n");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:{
				printf("nhap so phan tu n:");
				scanf("%d",&n);
				if(n <= 0 || n > 100){
					printf("so phan tu khong hop le \n");
					n = 0;
					break;
				}
				printf("\n");
				for(int i = 0; i < n;i++){
					printf("arr[%d] = ",i);
					scanf("%d",&arr[i]);
				}
				sorted = 0;
				break;
			}
			case 2:{
				if(n == 0){
					printf("mang rong\n");
				}
				printf("mang hien tai: ");
				for(int i = 0; i < n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
				break;
			}
			
			case 3:{			
                int mang[] = {};
                int tong = 0;

                for (int i = 0; i < n; i++) {
                    tong += mang[i] * mang[i];
    }
    printf("Tong binh phuong cac phan tu: %d\n", tong);
    return 0;

				break;
			}
			
			case 4:
				case 5:{
					 printf("Nhap gia tri can them: ");
                scanf("%d", &x);
                themVaoDau(a, &n, x);
					break;
				}
					case 6:
						case 7:{
							printf("\nMang sap xep giam dan bang thuat toan noi bot\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<n-1-i;j++){
						if(arr[j]<arr[j+1]){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}
					}
				}
				for(int i=0;i<n;i++){
					printf("%d  ",arr[i]);
				}
							break;
						}

        }
    }
}
