// MENU
// Nhập kích cỡ và giá trị các phần tử của mảng
// In giá trị các phần tử của mảng theo ma trận
// In giá trị các phần tử là lẻ và tính tổng
// In ra các phần tử nằm trên đường biên và tính tích
// In ra các phần tử nằm trên đường chéo chính
// In ra các phần tử nằm trên đường chéo phụ
// In ra dòng có tổng giá trị các phần tử là lớn nhất
// Thoát
// Lựa chọn của bạn:
#include <stdio.h>
#include <stdbool.h>
#define maxSize 100

int main(){
    int n, i, j, luachon, pos, value, del, num, max, min, row, col;
    int kiemtra = 0, sum = 0, isPrime = 1, count = 0, tich = 1, maxSum = -1, rowMax = -1;
    int a[maxSize][maxSize];
    while (true)
    {
        printf("\n");
        printf("\nMENU\n");
        printf("\n1. Nhập kích cỡ và giá trị các phần tử của mảng\n");
        printf("\n2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("\n3. In giá trị các phần tử là lẻ và tính tổng\n");
        printf("\n4. In ra các phần tử nằm trên đường biên và tính tích\n");
        printf("\n5. In ra các phần tử nằm trên đường chéo chính\n");
        printf("\n6. In ra các phần tử nằm trên đường chéo phụ\n");
        printf("\n7. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
        printf("\n8. Thoát\n");
        printf("\nLựa chọn của bạn: ");
        scanf("%d", &luachon);
        printf("\n");
        
        if( luachon == 8){
            return 0;
        }
        while (true)
        {
            if (kiemtra > 0)
            {
                break;
            }
            if (luachon != 1)
            {
                printf("Bạn chưa nhập vào mảng: \n");
                printf("\n");
                break;
            }
            else
            {
                break;
            }
        }
        switch (luachon)
        {
        case 1:
            kiemtra++;
            printf("Nhập số hàng: ");
            scanf("%d", &row);
            if(row < 0 || row > maxSize){
                printf("Số hàng nhập vào không hợp lệ\n");
                return 1;
            }
            printf("\n");
            printf("Nhập số cột: ");
            scanf("%d", &col);
            if(col < 0 || col > maxSize){
                printf("Số cột nhập vào không hợp lệ\n");
                return 1;
            }
            printf("\n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++) {
                    printf("Phần tử [%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                    printf("\n");
                }
            }
            printf("\n");
            break;
        
        case 2:
            printf("Ma trận: \n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++){
                    printf("%d  ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            break;
        
        case 3:
            printf("Mảng gồm các số lẻ: ");
            for (int i = 0; i < row; i++) {
                for ( j = 0; j < col; j++) {
                    if (a[i][j] % 2 != 0)
                    {
                        printf("%d   ", a[i][j]);
                        sum += a[i][j];
                    }
                }
            }
            printf("\n");
            printf("\nTổng các số lẻ trong mảng là: %d", sum);
            break;
            
        case 4:
            tich = 1;
            printf("Các phần tử nằm trên đường biên của ma trận: \n");
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                        printf("%d  ", a[i][j]);
                        tich *= a[i][j];
                    } else {
                        printf("   ");
                    }
                }
                printf("\n");
            }
            printf("\nTích của các phần tử nằm trên đường biên của ma trận là: %d", tich);
            break;

        case 5:
            printf("Ma trận hiện tại: \n");
            printf("\n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++){
                    printf("%d  ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("Các phần tử nằm trên đường chéo chính của ma trận: \n");
            printf("\n");
            for (int i = 0 ; i < row ; i++) {
                printf("%d  ", a[i][i]);
            }
            printf("\n");
            break;

        case 6:
            printf("Ma trận hiện tại: \n");
            printf("\n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++){
                    printf("%d  ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("Các phần tử nằm trên đường chéo phụ của ma trận: \n");
            printf("\n");
            for (int i = 0 ; i < row ; i++) {
                printf("%d  ", a[i][row - 1- i]);
            }
            printf("\n");
            break;

        case 7:
            maxSum = 0;
            printf("Ma trận hiện tại: \n");
            printf("\n");
            for ( i = 0; i < row; i++) {
                for ( j = 0; j < col; j++){
                    printf("%d  ", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for ( i = 0; i < row; i++) {
                sum = 0;
                for ( j = 0; j < col; j++){
                    sum += a[i][j];
                }
                if (sum > maxSum)
                {
                    maxSum = sum;
                    rowMax = i;
                }
            }
            printf("Dòng thứ %d có tổng giá trị trong phần tử là lớn nhất: \n", rowMax + 1);
            printf("\n");
            for ( j = 0 ; j < col ; j++)
            {
                printf("%d ", a[rowMax][j]);
            }
            break;
        default:
            printf("Không có lựa chọn này: ");
            break;
        }
    }
}