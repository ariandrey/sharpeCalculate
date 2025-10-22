#include <stdio.h>

int main() {
    double getiri, risksiz, stdSapma, sharpe;

    printf("Yatirim getirisini (%%) girin: ");
    scanf("%lf", &getiri);

    printf("Risksiz faiz oranini (%%) girin: ");
    scanf("%lf", &risksiz);

    printf("Portfoyun standart sapmasini (%%) girin: ");
    scanf("%lf", &stdSapma);

    // Yuzde degerleri oran olarak kullanmak icin 100'e boluyoruz
    getiri /= 100.0;
    risksiz /= 100.0;
    stdSapma /= 100.0;

    sharpe = (getiri - risksiz) / stdSapma;

    printf("\nSharpe Orani: %.2f\n", sharpe);

    if (sharpe < 1)
        printf("Bu oran dusuk, yatirim fazla riskli olabilir.\n");
    else if (sharpe < 2)
        printf("Sharpe orani iyi seviyede.\n");
    else if (sharpe < 3)
        printf("Sharpe orani cok iyi.\n");
    else
        printf("Sharpe orani mukemmel!\n");

    return 0;
}

