#include <stdio.h>
#include <string.h>
#define MAX 1000
typedef struct
{
    char brand[20];
    char bienSo[20];
    int year;
} XeMay;

XeMay ds[MAX];

int n = 0;
void themXe()
{
    if (n >= MAX)
    {
        printf("Danh sach day!\n");
        return;
    }
    printf("Ban hay nhap cac thong so cua xe\n");
    printf("Ban hay nhap thuong hieu: ");
    scanf("%s", ds[n].brand);
    printf("Ban hay nhap bien so: ");
    scanf("%s", ds[n].bienSo);
    printf("Ban hay nhap nam san xuat: ");
    scanf("%d", &ds[n].year);
    getchar();
    n++;
    printf("Da them xe thanh cong!\n");
}

void xoaXe()
{
    char bienSo[20];
    printf("Ban hay nhap bien so de xoa: ");
    scanf("%s", bienSo);

    int found = 0;
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(bienSo, ds[i].bienSo) == 0)
        {
            for (int j = i + 1; j < n; ++j)
            {
                ds[j - 1] = ds[j];
            }
            n--;
            found = 1;
            printf("Da xoa xe co bien so %s!\n", bienSo);
            break;
        }
    }
    if (!found)
        printf("Khong tim thay xe co bien so %s!\n", bienSo);
}

void docFile()
{
    FILE *f = fopen("xemay.txt", "r");
    if (f == NULL)
    {
        printf("Khong mo duoc file!\n");
        n = 0;
        return;
    }
    n = 0;
    while (fscanf(f, "%s %s %d", ds[n].brand, ds[n].bienSo, &ds[n].year) == 3)
    {
        ++n;
    }
    fclose(f);
    printf("Da doc danh sach xe tu file\n");
}

void luuFile()
{
    FILE *f = fopen("xemay.txt", "w");
    if (f == NULL)
    {
        printf("Khong mo duoc file!\n");
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%s %s %d\n", ds[i].brand, ds[i].bienSo, ds[i].year);
    }
    fclose(f);
    printf("Da luu danh sach vao file\n");
}

void printDS()
{
    if (n == 0)
    {
        printf("Danh sach rong, chua co xe may!\n");
        return;
    }
    printf("----------------------------------------------------\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%s %s %d\n", ds[i].brand, ds[i].bienSo, ds[i].year);
    }
    printf("----------------------------------------------------\n");
}
int main()
{
    int ch;
    do
    {
        printf("\n===== QUAN LY XE MAY =====\n");
        printf("1. Them xe moi\n");
        printf("2. Xoa xe theo bien so\n");
        printf("3. Hien thi danh sach xe\n");
        printf("4. Luu danh sach vao file\n");
        printf("5. Doc danh sach tu file\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &ch);
        getchar();
        switch (ch)
        {
        case 1:
            themXe();
            break;
        case 2:
            xoaXe();
            break;
        case 3:
            printDS();
            break;
        case 4:
            luuFile();
            break;
        case 0:
            printf("Thoat chuong trinh...\n");
            break;
        case 5:
            docFile();
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (ch != 0);
    return 0;
}