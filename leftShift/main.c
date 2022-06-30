#include <stdio.h>

int shift_left(int num, int qnt_bits){
    int number = num; //insiro o numero inicial
    int quant =qnt_bits; //quantidade de bits
    int bits=0;
    
     for(int i=0; i<=31;i++){
        if(num & (1<<i)){
            bits++;
        number = number & (~(1<<i));           
        }
    }    
    int x = quant-bits; 
     for(int j=quant-1; j>=0;j--){ //decremento pra alocar os 1 da esquerda pra direita
        if(j>= (quant-bits))
           number = number | ((1<<j));  
        }
        return number;
}

int main(){

    int iNum = 0;
    int quant = 0;

    //insira o numero a ser avaliado
    //insira a quantidade de bits que esse numero possui
    scanf("%d %d", &iNum, &quant);

    int x = shift_left(iNum,quant);
    
    
    printf("%d ", x);

}