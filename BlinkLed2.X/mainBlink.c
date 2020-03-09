/*
 * File:   mainBlink.c
 * Author: 20184384
 *
 * Created on 2 de Março de 2020, 10:22
 */


#include <xc.h>               // Inclui biblioteca padrão do compilador XC8.
                              // Para microcontroladores Microchip.
#include "config.h"           // Inclui arq. de config. (biblioteca) local.

void main(void)               // Função principal = main.
{                     
    PORTDbits.RD0 = 0;        // Inicia RD0 com valor 0.
    TRISDbits.TRISD0 = 0;     // Inicia RD0 com saida.
    
    while( 1 )                // Laço de repetição infinito.
    {  
     PORTDbits.RD0 = 1;       // Liga RD0.
    __delay_ms(500);          // Espera 500ms.
    PORTDbits.RD0 = 0;        // Desliga RD0.
    __delay_ms(500);          // Espera 500ms.
    }                         // Fim do laço de repetição.
    return;                   // Caracteristica main como uma função sem retorno.
}                             // Fim do bloco de função main.