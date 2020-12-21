#include<stdio.h>
void luasling(void);
void keliling(void);
void volmtabu(void);
int main(void)
{
    int menu;
    printf("Pilih mana yang akan Anda hitung\n");
    printf("1. Luas lingkaran\n");
    printf("2. Keliling lingkaran\n");
    printf("3. Volume tabung\n");
    printf("Pilih: ");
    scanf("%d", &menu);
    switch (menu) {
    case 1:
        luasling();
        break;
    case 2:
        keliling();
        break;
    case 3:
    	volmtabu();
    	break;
    }
    return 0;
}

void luasling()
{
    int r;
    printf("Jari-jari: ");
    scanf("%d", &r);
    printf("Luas lingkaran adalah %f \n", 3.14*r*r);
}
void keliling()
{
	int r;
    printf("Jari-jari: ");
    scanf("%d", &r);
    printf("Keliling lingkaran adalah %f \n", 3.14*2*r);
}
void volmtabu()
{
	int r,t;
    printf("Jari-jari: ");
    scanf("%d", &r);
    printf("Tinggi: ");
    scanf("%d", &t);
    printf("Volume tabung adalah %f \n", 3.14*r*r*t);
}
