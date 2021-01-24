#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void) {
  
  /*********Ejercicio 1***********/
  int size = 1;
  char buffer[size];

  read(0, &buffer, size);

  printf("%s", buffer);

  /*******************************/

  /***********Ejercicio 2*********/
  // Para declarar 100 enteros lo que hariamos es declarar un array de tipo int de tamaño 100.
  //Como sabemos que un entero son 4 bytes y el tamaño del array son 100 enteros, multiplicamos el numero de enteros por los bytes que ocupa cada uno (100*4 = 400 bytes)

  /*******************************/


  /***********Ejercicio 3*********/

  int f = open("/numbers.dat", O_RDWR, 0644);
  int sz = 100;

  read(f, )





  close(f);



  /*******************************/



  return 0;
}