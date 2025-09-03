// practice_test_05.c
#include <stdio.h>
#include <stdlib.h>

void Q1(); // Liet ke & dem uoc so CHAN cua N
void Q2(); // Danh sach hinh tam giac + dien tich + lon nhat

struct Triangle { int base, height; char color[20]; };
typedef struct Triangle TG;

int main(){
    system("cls");
    int choice;
    do{
        system("cls");
        printf("\n******************************************");
        printf("\n*   Menu                                 *");
        printf("\n*  1. Liet ke cac uoc so CHAN cua N      *");
        printf("\n*  2. Liet ke cac Hinh tam giac          *");
        printf("\n*  3. Thoat                              *");
        printf("\n******************************************");
        printf("\nChon chuc nang [1-3]: ");
        if (scanf("%d",&choice)!=1) { return 0; }
        switch(choice){
            case 1: Q1(); break;
            case 2: Q2(); break;
            case 3: exit(0);
            default: printf("\nChuc nang khong ton tai");
        }
        fseek(stdin,0,SEEK_END);
        printf("\nNhan Enter de tiep tuc..."); getchar();
    }while(1==1);
}

void Q1(){
    printf("\n List and Count all EVEN divisors of N\n");
    int n, cnt=0;
    printf("Input N: "); scanf("%d",&n);
    printf("\n Even divisors of %d: ", n);
    for(int i=2;i<=n;i+=2){
        if(n%i==0){ printf("%d ", i); cnt++; }
    }
    printf("\n Total even divisors of %d: %d\n", n, cnt);
}

void Q2(){
    printf("\n List of triangles (area = base*height/2)\n");
    const int MAX=20; int n;
    do{
        fseek(stdin,0,SEEK_END);
        printf(" Enter number of triangles (1-%d): ", MAX);
        scanf("%d",&n);
        if(n<1||n>MAX){ printf(" Invalid. Please try again!\n"); continue; }
        break;
    }while(1==1);

    TG a[MAX];
    for(int i=0;i<n;i++){
        printf("\n Enter details for triangle #%d\n", i+1);
        printf(" >> Base: ");   scanf("%d",&a[i].base);
        printf(" >> Height: "); scanf("%d",&a[i].height);
        fseek(stdin,0,SEEK_END);
        printf(" >> Color: ");  scanf("%[^\n]", a[i].color);
    }

    // in danh sach + tim lon nhat
    int maxIdx=0, maxArea = a[0].base*a[0].height/2;
    printf("\n\n Lists of Triangles\n");
    printf("No  Base  Height  Area  Color\n");
    for(int i=0;i<n;i++){
        int area = a[i].base*a[i].height/2;
        if(area>maxArea){ maxArea=area; maxIdx=i; }
        printf("%2d %5d %7d %6d  %s\n", i+1, a[i].base, a[i].height, area, a[i].color);
    }
    printf("Largest area = %d at row %d\n", maxArea, maxIdx+1);
}
