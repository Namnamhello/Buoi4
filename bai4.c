#include <stdio.h>

struct information {
    char name[30];
    int age;
    float wage;
};

enum work {
    nhan_vien,
    truong_phong,
    giam_doc
};
int main(){
    
    struct information info;
    enum work w;
    
    printf("nhap thong tin cho nhan vien \n");
    printf ("Nhap ten cua nhan vien: ");
    gets(info.name);
    printf("Nhap tuoi cua nhan vien: ");
    scanf("%d", &info.age);
    printf("Nhap luong cua nhan vien: ");
    scanf("%f", &info.wage);
    printf("Chon vi tri cong viec (0: Nhan vien, 1: Truong phong, 2: Giam doc): " );
    scanf("%d",&w);
    printf("\n");
    
    printf("Thong tin nhan vien : \n");
    printf("Ten: %c ");
    for (int i=0;i<strlen(info.name);i++){
        printf("%c",info.name[i]);
    }
    printf("\n");
    printf("Luong: %.2f \n", info.wage);
    printf("Vi tri: ");
    switch (w){
        case 0 : printf("Nhan vien");break;
        case 1 : printf("Truong phong");break;
        case 2 : printf("Giam doc");break;
    }
    return 0;

}