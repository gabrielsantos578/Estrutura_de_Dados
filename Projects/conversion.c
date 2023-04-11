#include <stdio.h>
#include <math.h>
#include <string.h>

void converteDecimalBinario(int d);
void converteDecimalHexadecimal(int d);
void converteDecimalOctal(int d);

int converteBinarioDecimal(int r);
void converteBinarioHexadecimal();
void converteBinarioOctal();

int converteHexadecimalDecimal(int r);
void converteHexadecimalBinario();
void converteHexadecimalOctal();

int converteOctalDecimal(int r);
void converteOctalBinario();
void converteOctalHexadecimal();

void encerrarPrograma();



//////////// PRINCIPAL ////////////

int main () {

    int opcao, tolerancia=0;
    
    while (1) {
        
        printf("------------- BEM-VINDO --------------\n");
        printf("\n");
        printf("Escolha uma das opções: \n");
        printf("\n");
        printf("[1] Decimal - Binário.\n");
        printf("[2] Decimal - Hexadecimal.\n");
        printf("[3] Decimal - Octal.\n");
        printf("\n");
        printf("[4] Binário - Decimal.\n");
        printf("[5] Binário - Hexadecimal.\n");
        printf("[6] Binário - Octal.\n");
        printf("\n");
        printf("[7] Hexadecimal - Decimal.\n");
        printf("[8] Hexadecimal - Binário.\n");
        printf("[9] Hexadecimal - Octal.\n");
        printf("\n");
        printf("[10] Octal - Decimal.\n");
        printf("[11] Octal - Binário.\n");
        printf("[12] Octal - Hexadecimal.\n");
        printf("\n");
        printf("[0] Encerrar o Programa.\n");
        printf("\n");
        printf("Informe a opção que deseja: ");
        scanf("%d", &opcao);
        printf("\n");
        
        if (opcao == 1) {
            
            converteDecimalBinario(0);
            
        } else if (opcao == 2) {
            
            converteDecimalHexadecimal(0);
            
        } else if (opcao == 3) {
            
            converteDecimalOctal(0);
            
        } else if (opcao == 4) {
            
            converteBinarioDecimal(0);
            
        } else if (opcao == 5) {
            
            converteBinarioHexadecimal();
            
        } else if (opcao == 6) {
            
            converteBinarioOctal();
            
        } else if (opcao == 7) {
            
            converteHexadecimalDecimal(0);
            
        } else if (opcao == 8) {
            
            converteHexadecimalBinario();
            
        } else if (opcao == 9) {
            
            converteHexadecimalOctal();
            
        } else if (opcao == 10) {
            
            converteOctalDecimal(0);
            
        } else if (opcao == 11) {
            
            converteOctalBinario();
            
        } else if (opcao == 12) {
            
            converteOctalHexadecimal();
            
        } else if (opcao == 0) {
            
            encerrarPrograma();
            break;
            
        } else {
            
            printf("A opção informada não existe.\n");
            printf("\n");
            tolerancia++;
            
            if (tolerancia >= 3) {
                printf("Use o software adequadramente!\n");
                printf("\n");
                printf("--------------------------------------\n");
                printf("\n");
                break;
            }
            
        }
        
    }
    
    return 0;

};





//////////// DECIMAL ////////////

void converteDecimalBinario (int d) {
    
    int i=0, b=0;
    int num, inteiro;
    double virgula, numero;
    int binario[100000];
    
    if (d != 0) {
        
        num = d;
        
    } else {
    
    printf("Informe o número: ");
    scanf("%d", &num);
    printf("\n");
    printf("%d (decimal) = ", num);
    
    }
    
    while (1) {
        
        inteiro = num / 2;
        virgula = num;
        virgula = virgula / 2;
        numero = virgula - inteiro;
        
        if (num == 0) { 
            break;
            
        } else if (numero == 0) {
            
            binario[i] = 0;
            b++;
            
        } else if (numero != 0) {
            
            binario[i] = 1;
            b++;
            
        }
        
        num = num / 2;
        i++;
        
    }
    
    for (i = (b-1); i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf(" (binario)\n");
    
    printf("\n");
    
};



void converteDecimalHexadecimal(int d) {
    
    char hexadecimal[100000];
    int decimal=0, resto;
    
    if (d != 0) {
        
        decimal = d;
        
    } else {
    
    printf("Informe o número: ");
    scanf("%d", &decimal);
    printf("\n");
    printf("%d (decimal) = ", decimal);
    
    }
    
    for (int i = 0; i > -1; i++) {
        
        resto = decimal % 16;
        decimal /= 16;
        
        if (decimal < 16) {
            
        if (resto == 10) {
            hexadecimal[i] = 'a';
        } else if (resto == 11) {
            hexadecimal[i] = 'b';
        } else if (resto == 12) {
            hexadecimal[i] = 'c';
        } else if (resto == 13) {
            hexadecimal[i] = 'd';
        } else if (resto == 14) {
            hexadecimal[i] = 'e';
        } else if (resto == 15) {
            hexadecimal[i] = 'f';
        } else {
            hexadecimal[i] = resto+'0';
        }
        
        if (decimal == 10) {
            hexadecimal[i+1] = 'a';
        } else if (decimal == 11) {
            hexadecimal[i+1] = 'b';
        } else if (decimal == 12) {
            hexadecimal[i+1] = 'c';
        } else if (decimal == 13) {
            hexadecimal[i+1] = 'd';
        } else if (decimal == 14) {
            hexadecimal[i+1] = 'e';
        } else if (decimal == 15) {
            hexadecimal[i+1] = 'f';
        } else {
            hexadecimal[i+1] = decimal+'0';
        }
        
        /*printf("%c hex\n", hexadecimal[i]);
        printf("%c hex\n", hexadecimal[i+1]);
        printf("%d res\n", resto);
        printf("%d dec\n", decimal);*/
        
        break;
            
        } else {
            
        if (resto == 10) {
            hexadecimal[i] = 'a';
        } else if (resto == 11) {
            hexadecimal[i] = 'b';
        } else if (resto == 12) {
            hexadecimal[i] = 'c';
        } else if (resto == 13) {
            hexadecimal[i] = 'd';
        } else if (resto == 14) {
            hexadecimal[i] = 'e';
        } else if (resto == 15) {
            hexadecimal[i] = 'f';
        } else {
            hexadecimal[i] = resto+'0';
        }
            
        }
        
        /*printf("%c hex\n", hexadecimal[i]);
        printf("%d res\n", resto);
        printf("%d dec\n", decimal);*/
        
    }
    
    for (int i = (strlen(hexadecimal) - 1); i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    
    printf(" (hexadecimal)\n");
    printf("\n");
    
};



void converteDecimalOctal (int d) {
    
    int octal[100000];
    int decimal=0, resto, ind=-1;
    
    if (d != 0) {
        
        decimal = d;
        
    } else {
    
    printf("Informe o número: ");
    scanf("%d", &decimal);
    printf("\n");
    printf("%d (decimal) = ", decimal);
    
    }
    
    for (int i = 0; i > -1; i++) {
        
        if (decimal < 8) {
            
            octal[i] = decimal;
            ind++;
            /*printf("%d oc\n", octal[i]);*/
            break;
            
        } else {
            
            resto = decimal % 8;
        decimal /= 8;
        
        if (decimal < 8) {

            octal[i] = resto;
            
            if (decimal != 0) {
                octal[i+1] = decimal;
            }
        
        /*printf("%d oc\n", octal[i]);
        printf("%d oc\n", octal[i+1]);
        printf("%d res\n", resto);
        printf("%d dec\n", decimal);*/
        
        ind++;
        ind++;
        
        break;
            
        } else {
            
            octal[i] = resto;
            ind++;
            
        }
        
        /*printf("%d oc\n", octal[i]);
        printf("%d res\n", resto);
        printf("%d dec\n", decimal);*/
            
        }
        
        
    }
    
    /*ind = strlen(octal);
    ind = ind - 1;
    printf("%d ind\n", ind);*/
    
    for (int i = ind; i > -1; i--) {
        printf("%d", octal[i]);
    }
    
    printf(" (octal)\n");
    printf("\n");
    
};





//////////// BINARIO ////////////

int converteBinarioDecimal (int r) {
    
    int num, decimal=0;
    
    printf("Informe o número: ");
    scanf("%d", &num);
    printf("\n");
    printf("%d (binario) = ", num);
    
    if (num == 0) {
        
    } else {
        
        int c=0, cs=1, val;
    
    while (1) {
        
        val = num / cs;
        
        if (val == 1) {
            break;
            
        } else {
            c++;
            cs *= 10;
            
        }
        
    }
    
    int binario[c+1];
    
    for (int i=0; i <= c; i++) {
        
        int n;
        
        n = num / cs;
        
        if (n == 1) {
            binario[i] = 1;
            num = num - (n*cs);
        } else {
            binario[i] = 0;
        }
        
        cs = cs / 10;
        
    }
    
    int ind=c;

    for (int i=0; i <= c; i++) {
        
        decimal += (pow(2, i) * binario[ind]);
        ind--;
        
    }
        
    }
    
    if (r != 0) {
        return decimal;
    } else {
        printf("%d (decimal)\n", decimal);
        printf("\n");
    }
    
};



void converteBinarioHexadecimal() {
    
    converteDecimalHexadecimal(converteBinarioDecimal(1));
    
    
};



void converteBinarioOctal() {
    
    converteDecimalOctal(converteBinarioDecimal(1));
    
};





//////////// HEXADECIMAL ////////////

int converteHexadecimalDecimal(int r) {
    
    char hexadecimal[100000], ch=' ';
    int decimal=0, cd, ind=0;
    
    printf("Informe o número: ");
    scanf("%s", hexadecimal);
    ind = (strlen(hexadecimal) - 1);
    printf("\n");
    
    for (int i = 0; i <= ind; i++) {
        printf("%c", hexadecimal[i]);
    }
    
    printf(" (hexadecimal) = ");
    
    for (int i = 0; i < strlen(hexadecimal); i++) {
        
        ch = hexadecimal[i];
        
        if (ch == '0') {
            cd = 0;
        } else if (ch == '1') {
            cd = 1;
        } else if (ch == '2') {
            cd = 2;
        } else if (ch == '3') {
            cd = 3;
        } else if (ch == '4') {
            cd = 4;
        } else if (ch == '5') {
            cd = 5;
        } else if (ch == '6') {
            cd = 6;
        } else if (ch == '7') {
            cd = 7;
        } else if (ch == '8') {
            cd = 8;
        } else if (ch == '9') {
            cd = 9;
        } else if (ch == 'a') {
            cd = 10;
        } else if (ch == 'b') {
            cd = 11;
        } else if (ch == 'c') {
            cd = 12;
        } else if (ch == 'd') {
            cd = 13;
        } else if (ch == 'e') {
            cd = 14;
        } else if (ch == 'f') {
            cd = 15;
        }
        
        decimal = decimal + (cd * pow(16, ind));
        
        /*printf("%d decimal\n", decimal);
        printf("%d cd\n", cd);
        printf("%c ch\n", ch);
        printf("%d ind\n", ind);
        printf("%g pow\n", pow(16, ind));*/
        
        ind--;
        
    }
    
    if (r != 0) {
        return decimal;
    } else {
        printf("%d (decimal)\n", decimal);
        printf("\n");
    }
    
};



void converteHexadecimalBinario() {
    
    converteDecimalBinario(converteHexadecimalDecimal(1));
    
};



void converteHexadecimalOctal() {
    
    converteDecimalOctal(converteHexadecimalDecimal(1));
    
};





//////////// OCTAL ////////////

int converteOctalDecimal(int r) {
    
    char octal[100000], ch=' ';
    int decimal=0, cd, ind=0;
    
    printf("Informe o número: ");
    scanf("%s", octal);
    ind = (strlen(octal) - 1);
    printf("\n");
    
    for (int i = 0; i <= ind; i++) {
        printf("%c", octal[i]);
    }
    
    printf(" (otcal) = ");
    
    for (int i = 0; i < strlen(octal); i++) {
        
        ch = octal[i];
        
        if (ch == '0') {
            cd = 0;
        } else if (ch == '1') {
            cd = 1;
        } else if (ch == '2') {
            cd = 2;
        } else if (ch == '3') {
            cd = 3;
        } else if (ch == '4') {
            cd = 4;
        } else if (ch == '5') {
            cd = 5;
        } else if (ch == '6') {
            cd = 6;
        } else if (ch == '7') {
            cd = 7;
        }
        
        decimal = decimal + (cd * pow(8, ind));
        
        /*printf("%d decimal\n", decimal);
        printf("%d cd\n", cd);
        printf("%c ch\n", ch);
        printf("%d ind\n", ind);
        printf("%g pow\n", pow(16, ind));*/
        
        ind--;
        
    }
    
    if (r != 0) {
        return decimal;
    } else {
        printf("%d (decimal)\n", decimal);
        printf("\n");
    }
    
};



void converteOctalBinario() {
    
    converteDecimalBinario(converteOctalDecimal(1));
    
};



void converteOctalHexadecimal() {
    
    converteDecimalHexadecimal(converteOctalDecimal(1));
    
};





//////////// ENCERRAR ////////////

void encerrarPrograma () {
    
    printf("Programa Encerrado.\n");
    printf("\n");
    printf("--------------------------------------\n");
    printf("\n");
    
};




