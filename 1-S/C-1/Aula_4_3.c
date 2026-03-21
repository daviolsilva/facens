#include <stdio.h>
#include <math.h>

float h, w, resp;

int main() {
    printf("Coloque a sua altura e *DEPOIS* seu peso paiz\xc6o: ");
    scanf("%f %f",&h,&w);
    resp= w*pow(h,2);

    if (resp<18.5) {
        printf("\nVoc\x88 est\xa0 abaixo do peso  D:");
    }
    if (resp>=18.5 && resp<25) {
        printf("\nVoc\x88 \x82 saud\xa0vel!!! ;D");
    }
    if (resp>=25 && resp<30) {
        printf("\nVoc\x88 est\xa0 em sobrepeso!!! >:");
    }
    if (resp>=30 && resp<35) {
        printf("\nVoc\x88 est\xa0 em obesidade Grau 1!!!! O:");
    }
    if (resp>=35 && resp<40) {
        printf("\nVoc\x88 est\xa0 em obesidade Grau 2!!!! <0>: SEVEROOO!!!!!!!!!");
    }
    if (resp>= 40) {
        printf("\nVoc\x88 est\xa0 em obesidade Grau 3!!!!!!! 000: M\xe0RRBIDAA");
    }
}