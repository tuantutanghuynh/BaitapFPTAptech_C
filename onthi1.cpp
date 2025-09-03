// practice_test_07.c
#include <stdio.h>
#include <stdlib.h>

void Q1(); // Liệt kê bội số của K ≤ M, cộng tổng
void Q2(); // Tìm quốc gia có mật độ dân số cao nhất

struct Nation { char name[30]; char capital[30]; long population; long area; };
typedef struct Nation NATION;

int main(){
    system("cls");
    int choice;
    do{
        system("cls");
        // [NHÓM] In menu chính
        // Lý do: cho người dùng chọn chức năng
        printf("\n******************************************");
        printf("\n*   Menu                                 *");
        printf("\n*  1. Liet ke boi so cua K (<=M) + Tong  *");
        printf("\n*  2. Quoc gia co mat do dan so cao nhat *");
        printf("\n*  3. Thoat                              *");
        printf("\n******************************************");
        printf("\nChon chuc nang [1-3]: ");
        
        // [NHÓM] Đọc lựa chọn
        if (scanf("%d",&choice)!=1) return 0;
        
        // [NHÓM] Gọi hàm theo lựa chọn
        switch(choice){
            case 1: Q1(); break;
            case 2: Q2(); break;
            case 3: exit(0);
            default: printf("\nChuc nang khong ton tai");
        }

        // [NHÓM] Dừng màn hình
        fseek(stdin,0,SEEK_END);
        printf("\nNhan Enter de tiep tuc..."); getchar();
    }while(1==1); // Lặp vô hạn cho menu
}

// [NHÓM] Hàm Q1
// Lý do: Dùng vòng for để duyệt bội số, tổng hợp tính toán
void Q1(){
    int M,K; long long sum=0;
    printf("\n Liet ke boi so cua K khong vuot qua M\n");
    printf("Nhap M (<200): "); scanf("%d",&M);
    printf("Nhap K (2-9): ");  scanf("%d",&K);

    // [NHÓM] Vòng lặp tính bội số
    printf("Cac boi so cua %d (<=%d): ", K, M);
    for(int x=K; x<=M; x+=K){ 
        printf("%d ", x); 
        sum+=x; // cộng dồn
    }
    printf("\nTong cac boi so: %lld\n", sum);
}

// [NHÓM] Hàm Q2
// Lý do: Nhập mảng struct, tính mật độ, tìm max
void Q2(){
    printf("\n Danh sach cac quoc gia (mat do cao nhat)\n");
    const int MAX=10; int n;

    // [NHÓM] Kiểm tra số lượng hợp lệ
    do{
        printf(" Nhap so quoc gia (2-%d): ", MAX);
        scanf("%d",&n);
        if(n<2||n>MAX){ printf(" Khong hop le. Nhap lai!\n"); continue; }
        break;
    }while(1==1);

    NATION a[MAX];
    // [NHÓM] Nhập dữ liệu cho từng quốc gia
    for(int i=0;i<n;i++){
        printf("\n Quoc gia thu %d\n", i+1);
        fseek(stdin,0,SEEK_END);
        printf(" >> Ten: ");    scanf("%[^\n]", a[i].name);
        fseek(stdin,0,SEEK_END);
        printf(" >> Thu do: "); scanf("%[^\n]", a[i].capital);
        printf(" >> Dan so: "); scanf("%ld",&a[i].population);
        printf(" >> Dien tich: "); scanf("%ld",&a[i].area);
    }

    // [NHÓM] Tìm mật độ lớn nhất
    int best=0; 
    long bestDen = a[0].population / (a[0].area==0?1:a[0].area);

    printf("\nSTT Ten                           Thu do              Mat do\n");
    for(int i=0;i<n;i++){
        long den = a[i].population / (a[i].area==0?1:a[i].area); 
        if(den>bestDen){ bestDen=den; best=i; }
        printf("%2d  %-28s %-20s %7ld\n", i+1, a[i].name, a[i].capital, den);
    }
    printf("\nQUOC GIA CO MAT DO CAO NHAT: %s (mat do: %ld)\n", a[best].name, bestDen);
}
