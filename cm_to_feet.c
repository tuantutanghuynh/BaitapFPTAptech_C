#include <stdio.h>

int main(void) {
    // Khai báo các hằng số chuyển đổi
    const float CM_PER_INCH = 2.54;    // 2.54 cm = 1 inch
    const float INCHES_PER_FOOT = 12.0; // 12 inches = 1 foot

    // Khai báo biến để lưu giá trị đầu vào
    float centimeters;

    // Nhập giá trị centimeters từ người dùng
    printf("Nhap gia tri centimeters: ");
    scanf("%f", &centimeters);

    // Tính toán chuyển đổi
    // Bước 1: Chuyển từ centimeters sang inches
    // Công thức: inches = centimeters / 2.54
    float total_inches = centimeters / CM_PER_INCH;

    // Bước 2: Chuyển từ inches sang feet
    // Công thức: feet = inches / 12
    float feet = total_inches / INCHES_PER_FOOT;

    // In kết quả theo định dạng yêu cầu
    // Sử dụng %.1f để hiển thị 1 chữ số thập phân
    printf("%.1f centimeters is %.1f feet\n", centimeters, feet);
    printf("%.1f centimeters is %.1f inches\n", centimeters, total_inches);

    return 0;
}
