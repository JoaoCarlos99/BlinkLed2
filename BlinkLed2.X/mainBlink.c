/*
 * File:   mainBlink.c
 * Author: 20184384
 *
 * Created on 2 de Mar�o de 2020, 10:22
 */


#include <xc.h>               // Inclui biblioteca padr�o do compilador XC8.
                              // Para microcontroladores Microchip.
#include "config.h"           // Inclui arq. de config. (biblioteca) local.

void main(void)               // Fun��o principal = main.
{                     
    PORTDbits.RD0 = 0;        // Inicia RD0 com valor 0.
    TRISDbits.TRISD0 = 0;     // Inicia RD0 com saida.
    
    while( 1 )                // La�o de repeti��o infinito.
    {  
     PORTDbits.RD0 = 1;       // Liga RD0.
    __delay_ms(500);          // Espera 500ms.
    PORTDbits.RD0 = 0;        // Desliga RD0.
    __delay_ms(500);          // Espera 500ms.
    }                         // Fim do la�o de repeti��o.
    return;                   // Caracteristica main como uma fun��o sem retorno.
}                             // Fim do bloco de fun��o main.