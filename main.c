#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//void Hoanvi(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void xuat(int a[], int n) {
//    for (int i = 0; i < n; ++i) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//void sapxeptangdan(int a[], int n) {
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (a[i] > a[j]) {
//                Hoanvi(&a[i], &a[j]);
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        printf("%d ", a[i]);
//    }
//
//}
//
//void InvaXuatmangtangdan() {
//    int artNumber[] = {8, 2, 3, 1, 5, 7, 9};
//    printf("mang ban dau : \n");
//    xuat(artNumber, 7);
//    printf("Mang a sau khi sap xep tang dan : \n");
//    sapxeptangdan(artNumber, 7);
//
//
//}
//
//void UngdungContro() {
////    int a=10 ;
////    int *point; // Khai bao bien con tro ten la point va co the tro den cac bien so nguyen (integer)(int)
////    point = &a;// gan dia chi bien a cho con tro
////    printf("Gia tri cua a la : %d\n",a); // in ra gia tri cua bien a
////    printf("Dia chi cua a la : %d\n",&a);//in dia chi bien a
////    printf("Gia tri cua con tro la: %d\n",*point); // in gia tri cua con tro
////    printf("Dia chi cua con tro la: %d\n",point);//in dia chi cua con tro
////    printf("Dia chi con tro:  %d \n",&point);
////    printf("%d", sizeof(int));
//    int size = 5;
//    int *poiter = malloc(5 * sizeof(int));/* cap phat o nho cho con tro, o nho nay chua size la 5 va chua bien int,chay
// * dung tren tat ca cac dong day */
//    // int *poiter = malloc(5) van chay binh thuong, cap phat 5 o nho.
//    // int *poiter = (int *) (5 * sizeof(int) ep kieu du lieu, con tro tro den dia chi dau tien la so nguyen (integer)(int)
//    // char  *poiter = (char *) (5 *sizeof(char)) ep kieu du lieu, con tro tro den dia chi dau tien la kieu ki tu (char)
//    int *startPoint = poiter;//Ban chat mang la con tro , tro den dia chi dau tien.
//    for (int i = 0; i < size; ++i) {
//        printf("Nhap phan tu thu %d = ", i + 1);
//        scanf("%d", poiter + i); //cach 2
////        scanf("%d", poiter);
////        poiter++;
//    }
//    poiter = startPoint;
//    for (int i = 0; i < size; ++i) {
//        printf("%d ", *(poiter + i));//cach2
////        poiter++;
//    }
//}

int main() {
    int ArrayNumber[5];
    // printf("%d", sizeof(ArrayNumber));
    /* In ra la 20. Vi ArrayNumber khai bao 5 o nho kieu int ,ma 1 o nho kieu int la 4 byte trong may.
     *Vay nen khi in ra size cua Array se lay 5 x 4 la 20 */
    //printf("%d", sizeof(ArrayNumber)/ sizeof(int));
    /* in ra dung so size cua ArrayNumber */
    int sizeofArrayNumber = sizeof(ArrayNumber) / sizeof(int);//SizeOfArray = 20 / 4
    // 4 la size cua kieu int trong may. Tuc la 4 byte.
// Cach 1: Lam viec thong qua size cua mang
//    for (int i = 0; i < sizeofArrayNumber ; ++i) {
//        scanf("%d",&ArrayNumber[i]);
//    }
//    for (int i = 0; i < sizeofArrayNumber ; ++i) {
//        printf("%d ",ArrayNumber[i]);
//    }
    //Cach 2: lam viec qua con tro p;
    int *p = &ArrayNumber; // khai bao con tro p gan thay the cho con tro array.
    // tuc la dia chi ArrayNumber chinh la o nho dia chi
    p = ArrayNumber;
    // ArrayNumber la con tro ,tro den o nho dau tien cua mang duoc khai bao cap phat
    /* [ ] (o so 1) <- ArrayNumber
     * [ ]
     * [ ]
     * [ ]
     * [ ]
     */
//    for (int i = 0; i < sizeofArrayNumber; ++i) {
//        scanf("%d", p + i);
//    }
//    for (int i = 0; i < sizeofArrayNumber; ++i) {
//        printf("%d ", *(p + i));
//    }
//    // cach 3: lam viec voi mang thong qua con tro .
//    for (int i = 0; i < sizeofArrayNumber; ++i) {
//        scanf("%d", ArrayNumber + i);
//    }
//    for (int i = 0; i < sizeofArrayNumber; ++i) {
//        printf("%d ", *(ArrayNumber + i));
//    }
// cach 4:
    int *p2 = p;

    for (int i = 0; i < sizeofArrayNumber; ++i) {
        scanf("%d", p);
        p++;
    }
    p = p2;
    for (int i = 0; i < sizeofArrayNumber; ++i) {
        printf("%d ", *p);
        p++;
    }
}