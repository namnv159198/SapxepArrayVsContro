#include <stdio.h>
#include <malloc.h>

void Hoanvi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapxeptangdan(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                Hoanvi(&a[i], &a[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

}

void InvaXuatmangtangdan() {
    int artNumber[] = {8, 2, 3, 1, 5, 7, 9};
    printf("mang ban dau : \n");
    xuat(artNumber, 7);
    printf("Mang a sau khi sap xep tang dan : \n");
    sapxeptangdan(artNumber, 7);


}

int main() {
//    int a=10 ;
//    int *point; // Khai bao bien con tro ten la point va co the tro den cac bien so nguyen (integer)(int)
//    point = &a;// gan dia chi bien a cho con tro
//    printf("Gia tri cua a la : %d\n",a); // in ra gia tri cua bien a
//    printf("Dia chi cua a la : %d\n",&a);//in dia chi bien a
//    printf("Gia tri cua con tro la: %d\n",*point); // in gia tri cua con tro
//    printf("Dia chi cua con tro la: %d\n",point);//in dia chi cua con tro
    int size = 5;
    int *poiter = malloc(5 * sizeof(int));// cap phat o nho cho con tro, o nho nay chua size la 5 va chua bien int
    // int *poiter = malloc(5) van chay binh thuong, cap phat 5 o nho.
    int *startPoint = poiter;
    for (int i = 0; i < size; ++i) {
        printf("Nhap phan tu thu %d = ", i + 1);
        scanf("%d", poiter);
        poiter++;
    }
    poiter = startPoint;
    for (int i = 0; i < size; ++i) {
        printf("%d ", *poiter);
        poiter++;
    }
}