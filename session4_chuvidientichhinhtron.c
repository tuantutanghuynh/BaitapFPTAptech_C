
#include <stdio.h>

int main(void) {
    // Khai báo biến bán kính r kiểu float để lưu số thực
    float r;
    
    // Khai báo hằng số PI với giá trị xấp xỉ 3.14159
    // Dùng const để đảm bảo giá trị PI không bị thay đổi trong chương trình
    const float PI = 3.14159;
    
    // Khai báo biến chu_vi và dien_tich để lưu kết quả tính toán
    float chu_vi, dien_tich;
    
    // In thông báo yêu cầu người dùng nhập bán kính
    printf("Nhap ban kinh hinh tron: ");
    
    // Đọc giá trị bán kính từ bàn phím và lưu vào biến r
    // %f được dùng để đọc số thực (float)
    scanf("%f", &r);
    
    // Kiểm tra bán kính có hợp lệ không (phải > 0)
    // Vì bán kính hình tròn luôn phải là số dương
    if (r <= 0) {
        printf("Ban kinh phai la so duong!\n");
        return 1; // Thoát chương trình với mã lỗi
    }
    
    // Tính chu vi hình tròn theo công thức: C = 2 * PI * r
    // Chu vi là độ dài đường tròn bao quanh hình tròn
    chu_vi = 2 * PI * r;
    
    // Tính diện tích hình tròn theo công thức: S = PI * r * r
    // Diện tích là không gian bên trong hình tròn
    dien_tich = PI * r * r;
    
    // In kết quả với 2 chữ số thập phân (%.2f)
    printf("\nKet qua:\n");
    printf("Ban kinh: %.2f\n", r);
    printf("Chu vi: %.2f\n", chu_vi);
    printf("Dien tich: %.2f\n", dien_tich);
    
    return 0; // Kết thúc chương trình thành công
}
