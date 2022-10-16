#include<stdio.h>
#include<stdlib.h>

int pilih;
double C, F, k, R, CF, Ck, CR;
double Fahrenheit(double C);
double Kelvin(double C);
double Reamur(double C);

int main(void)
{
    do
    {
    printf("::::::::::::::::::::::::::::::\n");
    printf("-----------------------------\n");
    printf("--  KONVERSI SUHU CELSIUS  --\n");
    printf("-----------------------------\n\n");
    printf("[1] Celcius -> Fahrenheit \n");
    printf("[2] Celcius -> Kelvin \n");
    printf("[3] Celcius -> Reamur\n");
    printf("[4] Keluar\n\n");
    printf("-----------------------------\n");
    printf("Pilih Konversi Suhu Celcius : \n");
    printf("-----------------------------\n");
    scanf("%d", &pilih);
    printf("\n");
        switch (pilih)
        {
            case 1:
            pilih = 1;
            printf("-----------------------------\n");
            printf("[1] Konfersi Suhu Celcius -> Fahrenheit \n");
            printf("-----------------------------\n");
            printf("Suhu Celcius : ");
            scanf("%lf", &C);
            printf("Konfersi Suhu Celcius -> Fahrenheit adalah %.2lf F \n", Fahrenheit(C));
            break;

            case 2:
            pilih = 2;
            printf("-----------------------------\n");
            printf("[2] Konfersi Suhu Celcius -> Kelvin \n");
            printf("-----------------------------\n");
            printf("Suhu Celcius : ");
            scanf("%lf", &C);
            printf("Konfersi Suhu Celcius -> Kelvin adalah %.2lf F \n", Kelvin(C));
            break;

            case 3:
            pilih = 3;
            printf("-----------------------------\n");
            printf("[3] Konfersi Suhu Celcius -> Reamur \n");
            printf("-----------------------------\n");
            printf("Suhu Celcius : ");
            scanf("%lf", &C);
            printf("Konfersi Suhu Celcius -> Reamur adalah %.2lf F \n", Reamur(C));
            break;

            case 4:
            pilih = 4;
            printf("OK-deh GAPAPAH! \n");
            printf("\n");
            return(0);
            break;
        default:
        printf("Pilihan Tidak Tersedia! Silakan Masukan Pilihan Yang Ada \n");
        break;
        
        }
        
    }
    while (pilih!= 1||pilih!= 2||pilih!= 3||pilih!= 4);
        return (0);
}


        

double Fahrenheit(double C)
{
    CF = (1.8*C)+32;
    return CF;
}

double Kelvin(double C)
{
    Ck = C+273;
    return Ck;
}

double Reamur(double C)
{
    CR = 0.8*C;
    return CR;
}
