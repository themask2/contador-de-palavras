/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

 char c = '1', ant1, ant2; //caracter de armazenamento, anterior 1 e anterior 2
 int n = 0, flag = 0;// numero de palavras, flag que indica o fim da contagem por palavra

 while (c != '\n') {
 	scanf("%c", &c);

 	if (c == ' ') {
 		flag = 0;
 	}
 	if (c == '-') {
 		flag = 0;
 	}
 	if (c == ',') { 
 		flag = 0;
 	}
 	if (c == '.') { 
 		flag = 0;		
 	}
	if ( ((ant2 >= '0') && (ant2 <= '9')) && (ant1 == ',') && ((c >= '0') && (c <= '9')) ) { //numero,numero caso especial onde temos um ponto flutuante
		n--;
	}
	if ( ((ant2 >= '0') && (ant2 <= '9')) && (ant1 == '.') && ((c >= '0') && (c <= '9')) ) { //numero.numero caso especial onde temos um ponto flutuante
		n--;
	}


 	if ( ( ((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) ) && (!flag) ) {
 		n++;
 		flag = 1;
	}
	
 	ant2 = ant1;
 	ant1 = c;

 }



 printf("%d\n", n);
 return 0;
}
