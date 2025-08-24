//Nhập mảng, tìm vị trí đầu tiên của phần tử lớn nhất.
//Nhập mảng, tìm vị trí cuối cùng của phần tử nhỏ nhất.

#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int n;
    do{
        printf("Nhap so phan tu trong mang: ");
        if(scanf("%d", &n) !=1 || n<=0){
            printf("Gia tri khong hop le. Vui long nhap lai \n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }while(1);
    int a[n];
    printf("Nhap vao cac phan tu cua mang:\n");
    for(int i=0; i<n; i++){
        printf("Nhap phan tu a[%d]: ",i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    int max_index = 0;
    int min_index = 0;

    for(int i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
            max_index = i;
        }
        if(a[i] < min){
            min = a[i];
            min_index = i;
        }
    }

    printf("Phan tu lon nhat la %d, nam o vi tri %d\n", max, max_index+1);
    printf("Phan tu nho nhat la %d, nam o vi tri %d\n", min, min_index+1);

    return 0;
}
