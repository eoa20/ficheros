/*----------------------------------------------------------------
|  Autor:eduardo ovalles almonte   Matricula: 1-18-0795          |
|  Fecha:   14/12/2024                           Version: C	++	 |
|-----------------------------------------------------------------|
|  Descripcion del Programa: Escribir  un programa que vaya 
leyendo las frases que el usuario teclea y las guarde en un 
fichero de texto llamado registroUsuario.txt. Terminara cuando
 la frase introducida sea Finalizar, esa frase no puede guardarse
  en el fichero.                                  |
| ----------------------------------------------------------------*/

//Bibliotecas
#include <stdio.h>
#include <string.h>
 
int main()
{
   // Puntero para manejar el archivo llamado Registro
   FILE* Registro; 
   // Variable para comparar con la entrada del usuario para cerrar el programa
   char fin[] = "fin";  
   // Cadena para almacenar las frases ingresadas por el usuario
   char frase[100];
   // Abre el archivo en modo de escritura 
   Registro = fopen("registro_de_usuario.txt", "wt");
   // Mensaje inicial para el usuario
   printf("Programa para almacenar frases , si quieres salir escribe 'fin'."); 
   // Bucle para leer frases y escribirlas en el archivo
   do
   {
      // Solicitar al usuario que escriba una frase
      printf("\nEscriba una frase: ");
      gets(frase); 
      // Verifica si la frase escrita por el usuario es "fin"
      if (strcmp(frase, fin) == 0) // el stromp es un comparador 
         break; // Si es "fin", termina el bucle

      // Escribe la frase ingresada por el usuario en el archivo
      fprintf(Registro, "%s\n", frase);
   }
   while (strcmp(frase, fin) != 0); // Continua mientras la frase no sea fin   
   // Cierra el archivo para guardar los datos correctamente
   fclose(Registro);
   // Mensaje final indicando que el archivo se ha guardado
   printf("El registro se guardo como 'registro_de_usuario.txt'.\n");
   return 0; // Fin del programa
}
