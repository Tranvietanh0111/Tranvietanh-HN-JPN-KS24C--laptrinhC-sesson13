#include <stdio.h>
void nhapMang(int arr[50][50], int n, int m);
void inMang(int arr[50][50], int n, int m);
void inGoc(int arr[50][50], int n, int m);
void inDuongBien(int arr[50][50], int n, int m);
void inDuongCheo(int arr[50][50], int n, int m);
int isPrime(int num);
void inSoNguyenTo(int arr[50][50], int n, int m);
int main() {
    int n, m, choice;
    int arr[50][50];
    do {
        printf("Nhap so hang n : ");
        scanf("%d", &n);
        if (n < 1 || n > 50) {
            printf("So hang khong hop le. Vui long nhap lai!\n");
        }
    } while (n < 1 || n > 50);
    do {
        printf("Nhap so cot m : ");
        scanf("%d", &m);
        if (m < 1 || m > 50) {
            printf("So cot khong hop le. Vui long nhap lai!\n");
        }
    } while (m < 1 || m > 50);
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inGoc(arr, n, m);
                break;
            case 4:
                inDuongBien(arr, n, m);
                break;
            case 5:
                inDuongCheo(arr, n, m);
                break;
            case 6:
                inSoNguyenTo(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 7);
    
    return 0;
}
void nhapMang(int arr[50][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	printf("\nnhap phan tu arr[%d][%d]",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMang(int arr[50][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void inGoc(int arr[50][50], int n, int m) {
    printf("%d %d %d %d\n", arr[0][0], arr[0][m-1], arr[n-1][0], arr[n-1][m-1]);
}
void inDuongBien(int arr[50][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void inDuongCheo(int arr[50][50], int n, int m) {
    if (n != m) {
        printf("Khong phai ma tran vuong, khong the in duong cheo.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void inSoNguyenTo(int arr[50][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

