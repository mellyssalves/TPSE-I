#include <stdio.h>
#include <stdbool.h>

    int countBits(bool w, unsigned int value){
        int bit = w; // bit a ser procurado
        int num = value; // valor a ser inserido
        int cont = 0; //variavel contadora
        int i = 0;
    
    if(bit == 1){
        for(i=0; i<=31; i++){
        if((num &(1<<i))){
        cont++;
        }
    }
}
    else if(bit == 0){
        for(i=0; i<=31; i++){
        if(!(num & ((1<<i)))){
        cont++;
        }
    }
}   
        return cont;

}
int main(){
    
    int x=0; //bit procurado
    int n=0; //valor inserido
   

    scanf("%d", &x);
    scanf("%d", &n);
    int quant= countBits(x,n);
    printf("%d\n",quant);
}