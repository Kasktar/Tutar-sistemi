#include <cstdio>

int main() {
    double urunTutari, odenenPara;
    
    
    printf("Urun tutarini ve odenen parayi girin (Orn: 18.70 20.00):\n> ");
    scanf("%lf %lf", &urunTutari, &odenenPara);

    
    int paraUstuKurus = (int)((odenenPara - urunTutari) * 100 + 0.5);

    printf("\nToplam Para Ustu: %.2f TL (%d kurus)\n\n", paraUstuKurus / 100.0, paraUstuKurus);

    int p = paraUstuKurus;

    int a200 = p / 20000; p %= 20000;
    int a100 = p / 10000; p %= 10000;
    int a50  = p / 5000;  p %= 5000;
    int a20  = p / 2000;  p %= 2000;
    int a10  = p / 1000;  p %= 1000;
    int a5   = p / 500;   p %= 500;
    int a1   = p / 100;   p %= 100;
    int k50  = p / 50;    p %= 50;
    int k25  = p / 25;    p %= 25;
    int k10  = p / 10;    p %= 10;
    int k5   = p / 5;     p %= 5;
    int k1   = p / 1;     p %= 1;

    printf(" Para Ustu Dagilimi \n");
    printf("- %d adet 200 TL Banknot\n", a200);
    printf("- %d adet 100 TL Banknot\n", a100);
    printf("- %d adet 50 TL Banknot\n", a50);
    printf("- %d adet 20 TL Banknot\n", a20);
    printf("- %d adet 10 TL Banknot\n", a10);
    printf("- %d adet 5 TL Banknot\n", a5);
    printf("- %d adet 1 TL Madeni Para\n", a1);
    printf("- %d adet 50 Kurus\n", k50);
    printf("- %d adet 25 Kurus\n", k25);
    printf("- %d adet 10 Kurus\n", k10);
    printf("- %d adet 5 Kurus\n", k5);
    printf("- %d adet 1 Kurus\n", k1);

    int toplamKupurSayisi = a200 + a100 + a50 + a20 + a10 + a5 + a1 + k50 + k25 + k10 + k5 + k1;
    printf("\nMusteriye verilen toplam para sayisi: %d\n", toplamKupurSayisi);

    return 0;
}
