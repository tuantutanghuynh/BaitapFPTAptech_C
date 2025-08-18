
#include <stdio.h>

int main(void) {
    // Khai báo các biến theo đề bài
    int a = 10;        // Biến a có giá trị nguyên
    int b = 7;         // Biến b có giá trị nguyên  
    float c = 15.75;   // Biến c có giá trị thập phân
    int d = 4;         // Biến d có giá trị nguyên
    int e = 2;         // Biến e có giá trị nguyên
    float f = 5.6;     // Biến f có giá trị thập phân
    
    // Khai báo biến z để lưu kết quả, dùng float để có thể lưu số thập phân
    float z;
    
    // Tính biểu thức z = a*b + (c/d) - e*f
    // Thứ tự thực hiện theo quy tắc toán học:
    // 1. Nhân và chia trước: a*b, c/d, e*f  
    // 2. Cộng trừ sau: kết quả a*b + kết quả c/d - kết quả e*f
    z = a * b + (c / d) - e * f;
    
    // In ra các giá trị của biến để kiểm tra
    printf("Cac gia tri bien:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b); 
    printf("c = %.2f\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %.2f\n", f);
    
    // In ra biểu thức để người dùng thấy rõ công thức
    printf("\nBieu thuc: z = a*b + (c/d) - e*f\n");
    
    // Tính và in từng phần của biểu thức để dễ theo dõi
    printf("\nChi tiet tinh toan:\n");
    printf("a * b = %d * %d = %d\n", a, b, a * b);
    printf("c / d = %.2f / %d = %.2f\n", c, d, c / d);
    printf("e * f = %d * %.2f = %.2f\n", e, f, e * f);
    
    // In kết quả cuối cùng
    printf("\nKet qua:\n");
    printf("z = %d + %.2f - %.2f = %.2f\n", a * b, c / d, e * f, z);
    
    return 0;
}
