
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    if(argc == 2) {
        printf("%.2f C\n", atof(argv[1]));
        printf("%.2f F\n", ((atof(argv[1]) * 1.8) + 32));
        printf("%.2f K\n", (atof(argv[1]) + 273.15));
    } else if(argc == 3) {
        if(*argv[2] == 'C' | *argv[2] == 'c') {
            printf("%.2f F \n",(((atof(argv[1]) * 1.8) + 32)));
            printf("%.2f K \n", (atof(argv[1]) + 273.15));
        } else if(*argv[2] == 'F' | *argv[2] == 'f') {
            printf("%.2f C \n",((atof(argv[1]) - 32) / 1.8));
            printf("%.2f K \n",(((atof(argv[1]) - 32) / 1.8) + 273.15));
        } else if(*argv[2] == 'K' | *argv[2] == 'k') {
            printf("%.2f C \n",(atof(argv[1]) - 273.15));
            printf("%.2f F \n",(((atof(argv[1]) - 273.15) * 1.8) + 32));
        }
    } else
        printf("Введено неверное значение!\n");
    return 0;
}
