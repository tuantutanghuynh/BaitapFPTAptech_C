
#include <stdio.h>

int main(void) {
    // Khai báo các biến lương và phụ cấp
    float basic_salary = 12000.0;   // Lương cơ bản: $12000
    float da_rate = 0.12;           // Tỷ lệ DA: 12% của lương cơ bản
    float hra = 150.0;              // HRA: $150
    float ta = 120.0;               // TA: $120
    float others = 450.0;           // Others: $450
    
    // Khai báo các biến thuế và khấu trừ
    float pf_rate = 0.14;           // Tỷ lệ PF: 14% của lương cơ bản
    float it_rate = 0.15;           // Tỷ lệ IT: 15% của lương cơ bản
    
    // Tính các khoản phụ cấp
    float da = basic_salary * da_rate;      // DA = 12% của lương cơ bản
    
    // Tính các khoản khấu trừ
    float pf = basic_salary * pf_rate;      // PF = 14% của lương cơ bản
    float it = basic_salary * it_rate;      // IT = 15% của lương cơ bản
    
    // Tính tổng thu nhập
    float total_earnings = basic_salary + da + hra + ta + others;
    
    // Tính tổng khấu trừ
    float total_deductions = pf + it;
    
    // Tính lương ròng theo công thức:
    // Net Salary = Basic Salary + DA + HRA + TA + Others - (PF + IT)
    float net_salary = total_earnings - total_deductions;
    
    // In bảng lương chi tiết
    printf("=== BANG LUONG NHAN VIEN ===\n\n");
    
    printf("LUONG CO BAN VA PHU CAP:\n");
    printf("Basic Salary         : $%.2f\n", basic_salary);
    printf("DA (12%% cua Basic)   : $%.2f\n", da);
    printf("HRA                  : $%.2f\n", hra);
    printf("TA                   : $%.2f\n", ta);
    printf("Others               : $%.2f\n", others);
    printf("                     -----------\n");
    printf("Tong thu nhap        : $%.2f\n\n", total_earnings);
    
    printf("CAC KHOAN KHAU TRU:\n");
    printf("PF (14%% cua Basic)   : $%.2f\n", pf);
    printf("IT (15%% cua Basic)   : $%.2f\n", it);
    printf("                     -----------\n");
    printf("Tong khau tru        : $%.2f\n\n", total_deductions);
    
    printf("KET QUA CUOI CUNG:\n");
    printf("LUONG RONG (Net Salary) = $%.2f\n", net_salary);
    
    // In công thức tính toán để minh họa
    printf("\nCONG THUC TINH TOAN:\n");
    printf("Net Salary = Basic + DA + HRA + TA + Others - (PF + IT)\n");
    printf("Net Salary = %.2f + %.2f + %.2f + %.2f + %.2f - (%.2f + %.2f)\n", 
           basic_salary, da, hra, ta, others, pf, it);
    printf("Net Salary = %.2f - %.2f = $%.2f\n", 
           total_earnings, total_deductions, net_salary);
    
    return 0;
}
