
#include <stdio.h>

int main(void) {
    // Khai báo và khởi tạo các biến theo đề bài
    int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
    
    printf("=== CAC GIA TRI BIEN ===\n");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n\n", a, b, c, d, e);
    
    // Ví dụ 1: Phép cộng đơn giản
    iResult = a + b + c + d + e;
    printf("1. iResult = a + b + c + d + e\n");
    printf("   iResult = %d + %d + %d + %d + %d = %d\n\n", a, b, c, d, e, iResult);
    
    // Ví dụ 2: Phép toán hỗn hợp
    iResult = a * b + c - d / e;
    printf("2. iResult = a * b + c - d / e\n");
    printf("   iResult = %d * %d + %d - %d / %d\n", a, b, c, d, e);
    printf("   iResult = %d + %d - %d = %d\n\n", a*b, c, d/e, iResult);
    
    // Ví dụ 3: Sử dụng dấu ngoặc để thay đổi thứ tự ưu tiên
    iResult = (a + b) * (c - d) + e;
    printf("3. iResult = (a + b) * (c - d) + e\n");
    printf("   iResult = (%d + %d) * (%d - %d) + %d\n", a, b, c, d, e);
    printf("   iResult = %d * %d + %d = %d\n\n", a+b, c-d, e, iResult);
    
    // Ví dụ 4: Phép chia nguyên và phép chia dư
    iResult = a / b + c % d + e;
    printf("4. iResult = a / b + c %% d + e\n");
    printf("   iResult = %d / %d + %d %% %d + %d\n", a, b, c, d, e);
    printf("   iResult = %d + %d + %d = %d\n\n", a/b, c%d, e, iResult);
    
    // Ví dụ 5: Sử dụng phép toán logic bitwise
    iResult = a & b | c ^ d + e;
    printf("5. iResult = a & b | c ^ d + e\n");
    printf("   iResult = %d & %d | %d ^ %d + %d\n", a, b, c, d, e);
    printf("   iResult = %d | %d ^ %d\n", a&b, c, d+e);
    printf("   iResult = %d ^ %d = %d\n\n", a&b|c, d+e, iResult);
    
    printf("=== LUU Y ===\n");
    printf("- Phep chia nguyen: %d / %d = %d (khong phai %.1f)\n", d, e, d/e, (float)d/e);
    printf("- Phep chia du: %d %% %d = %d\n", c, d, c%d);
    printf("- Thu tu uu tien: *, /, %% truoc; +, - sau\n");
    printf("- Su dung dau ngoac () de thay doi thu tu uu tien\n");
    
    return 0;
}
