// MENU
// Nhập số phần tử cần nhập và giá trị các phần tử
// In ra giá trị các phần tử đang quản lý
// In ra giá trị các phần tử chẵn và tính tổng
// In ra giá trị lớn nhất và nhỏ nhất trong mảng
// In ra các phần tử là số nguyên tố trong mảng và tính tổn
// Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó
// Thêm một phần từ vào vị trí chỉ định
// Thoát
//   Lựa chọn của bạn: 
#include <stdio.h>
#include <stdbool.h>
#define maxSize 100

int main(){
    int n, i, j, luachon, pos, value, del, num, max, min;
    int kiemtra = 0, sum = 0, isPrime = 1, count = 0;
    int a[maxSize];
    while (true)
    {
        printf("\n");
        printf("\nMENU\n");
        printf("\n1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("\n2. In ra giá trị các phần tử đang quản lý\n");
        printf("\n3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("\n4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("\n5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
        printf("\n6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
        printf("\n7. Thêm một phần từ vào vị trí chỉ định\n");
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
            printf("Nhập số phần tử muốn nhập: ");
            scanf("%d", &n);
            printf("\n");
            if(n < 0 || n > maxSize){
                printf("Số lượng phần tử nhập vào không hợp lệ\n");
                return 1;
            }
            for (int i = 0; i < n; i++) {
                printf("Nhập phần tử thứ %d: ", i + 1);
                scanf("%d", &a[i]);
                printf("\n");
            }
            printf("\n");
            break;
        
        case 2:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            break;
        
        case 3:
            printf("Mảng gồm các số chẵn: ");
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                {
                    printf("%d   ", a[i]);
                    sum += a[i];
                }
            }
            printf("\n");
            printf("\nTổng các số chẳn trong mảng là: %d", sum);
            break;
            
        case 4:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            max = 0;
            min = 1000000000;
            for ( i = 0 ; i < n; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
            printf("\nPhần tử lớn nhất trong mảng là: %d", max);
            printf("\n");
            printf("\nPhần tử nhỏ nhất trong mảng là: %d", min);
            break;

        case 5:
            sum = 0;
            kiemtra = 0;
            if( kiemtra == 0 ){
                printf("\nCác số nguyên tố có trong mảng: ");
                for (i = 0; i < n; i++) {
                    isPrime = 1;
                    if ( a[i] <= 1){
                        isPrime = 0;
                    }
                    else{
                        for (j = 2; j * j <= a[i]; j++) {
                            if (a[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if (isPrime)
                    {
                        printf("%d ", a[i]);
                        kiemtra = 1;
                        sum += a[i];
                    }
                }
            }
            if (kiemtra == 0)
            {
                printf("\nKhông có số nguyên tố nào trong mảng");
            }
            printf("\n");
            printf("\nTổng các số nguyên tố trong mảng là: %d", sum);
            break;

        case 6:
            count = 0;
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            printf("\nNhập vào số cần thống kê:  ");
            scanf("%d", &num);
            kiemtra = 0;
            for ( i = 0 ; i < n ; i++) {
                if (a[i] == num)
                {
                    count++;
                    kiemtra = 1;
                }
            }
            if (kiemtra == 0)
            {
                printf("\nSố %d không có trong mảng", num);
            }
            printf("\nSố %d xuất hiện ( %d lần ): ", num, count); 
            break;

        case 7:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            printf("\nNhập giá trị muốn thêm: ");
            scanf("%d", &value);
            printf("\nVị trí muốn thêm vào mảng: ");
            scanf("%d", &pos);
        
            if (pos < 0 || pos > n) {
                printf("Vị trí nhập vào không hợp lệ\n");
                return 1;
            }
        
            for (int i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos - 1] = value;
            n++;
            break;

        default:
            printf("Không có lựa chọn này: ");
            break;
        }
    }
}