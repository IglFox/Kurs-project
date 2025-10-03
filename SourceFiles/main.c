#include <stdio.h>
#include <stdlib.h>

#include "../HeaderFiles/functions.h"


int main() {
    int n;
    double eps;
    char choice = -1, choice2 = -1;
    showTitle();


    do {
        printf("1 - контрольный расчёт для n точек\n2 - расчёт парамтера с заданной точностью\n3 - запись данных в файл\n> ");
        scanf("%c%*c", &choice);

        switch (choice) {
            case '1':
                printf("Введите кол-во точек: \n> ");
                scanf("%d%*c", &n);
                controlCalc(n);
                break;
        
            case '2':
                printf("ВВедите точность (например 0.01)\n> ");
                scanf("%lf%*c", &eps);
                precisionCalc(eps);
                break;
            
            case '3':
                printf("Введите кол-во точек: \n> ");
                scanf("%d%*c", &n);
                writeInFiles(n);
                break;

            default:
                printf("Неправильный ввод.\n");
                break;
        }

        printf("Продолжать? (y/n): ");
        scanf("%c%*c", &choice2);

        if (choice2 == 'n') {
            break;
        }
        printf("\n\n");

    } while (1);

    return 0;

}