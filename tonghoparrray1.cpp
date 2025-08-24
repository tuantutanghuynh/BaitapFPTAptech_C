/**Nhập mảng, in mọi phần tử > x (x nhập thêm).

 đếm số phần tử chia hết cho k (k nhập thêm, k ≠ 0).

 in các phần tử ở vị trí là bội của k (0, k, 2k, …).

 tính tổng các phần tử ở chỉ số chẵn và tổng các phần tử ở chỉ số lẻ.

 kiểm tra mảng có đang tăng không giảm (a[i] ≤ a[i+1] với mọi i).

 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n;
    do
    {
        printf("Nhap so phan tu trong mang: ");
        if (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Gia tri khong hop le. Vui long nhap lai \n");
            while (getchar() != '\n')
                ;
            continue;
        }
        break;
    } while (1);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int x;
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    printf("Cac phan tu > %d la: ", x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            printf("%d ", a[i]);
        }
    }
    int k;
    do
    {
        printf("\nNhap gia tri k (k != 0): ");
        scanf("%d", &k);
    } while (k == 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            count++;
        }
    }
    printf("So phan tu chia het cho %d la: %d\n", k, count);
    printf("Cac phan tu o vi tri boi cua %d la: ", k);
    for (int i = 0; i < n; i++)
    {
        if (i % k == 0)
        {
            printf("%d ", a[i]);
        }
    }
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += a[i];
        }
        else
        {
            sumOdd += a[i];
        }
    }
    printf("\nTong cac phan tu o chi so chan: %d", sumEven);
    printf("\nTong cac phan tu o chi so le: %d", sumOdd);
    int isIncreasing = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            isIncreasing = 0;
            break;
        }
    }
    if (isIncreasing)
    {
        printf("\nMang dang tang");
    }
    else
    {
        printf("\nMang khong tang");
    }
    return 0;
}
