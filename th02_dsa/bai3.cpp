#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char hoten[50];
    int ma;
    float d1, d2, d3;
} SV;
int main() {
    int n;
    printf("Nhap so luong sinh vien: "); scanf("%d", &n);

    SinhVien *ds = (SinhVien *)malloc(n * sizeof(SinhVien));
    if (ds == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        getchar();
        fgets(ds[i].hoten, sizeof(ds[i].hoten), stdin);
        printf("Ma sinh vien: "); scanf("%d", &ds[i].ma);
        printf("Diem 1: "); scanf("%f", &ds[i].d1);
        printf("Diem 2: "); scanf("%f", &ds[i].d2);
		printf("Diem 3: "); scanf("%f", &ds[i].d3);
    }
    printf("\n-----DANH SACH SINH VIEN-----\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ho ten: %s", ds[i].hoten);
        printf("Ma sinh vien: %d\n", ds[i].ma);
        printf("Diem 1: %.2f\n", ds[i].d1);
        printf("Diem 2: %.2f\n", ds[i].d2);
        printf("Diem 3: %.2f\n", ds[i].d3);
    }
    free(ds);
    return 0;
}
