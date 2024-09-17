#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>


 int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }

int random ( int n )
{
return ((unsigned long)rand()*n) >> 15;
}

 
void escribe(int color,int x, int y)

{

            gotoxy(x,y);

            textcolor(color);

//          printf("%s",cadena);

 

}
 

int main()

{

        

 char matriz[10][20]={"helicoptero","naranja","helice","jardinero","electricista","calendario","taladro","cometa","saltamontes","antena"};

 int plantilla[1][20],abc=0,x=37,y=21;

 char abecedario[34];

 int palabra,numpalabras=10,adivina,fallos,longpalabra,longadivina,salir;

 char repetir='s';

 int acierto; //Variable booleana: 1 significa que acert¢ una

                                                            // o m s letras, 0 que no

 int i,j;

 char letra[1];

 

 

 //////// PRESENTACION MENU PRINCIPAL

 ///////////////////////////////////////

 

 clrscr();

 printf("\n\t=======================================");

 printf("\n\t           JUEGO DEL AHORCADO");

 printf("\n\t=======================================");

 printf("");

 printf("\n\tInstrucciones: El ordenador pensar  una palabra y t£ tienes 10");

 printf("\n\tintentos para acertarla. En cada intento podr s elegir una letra.");

 printf("\n\tSi la palabra a adivinar la contiene, aparecer  en su corres-");

 printf("\n\tpondiente posici¢n. Sino, tendr s un intento menos.Hasta agotar");

 printf("\n\tlos 10. ­­­­BUENA SUERTE!!!");

 printf("\n\n");

 printf("\nPulsa una tecla para empezar...");

 getch();

             //Busca una palabra aleatoriamente

  do

  {

             clrscr();

             srand(time(0));

             acierto=0;

             fallos=0;

             longpalabra=0;

             longadivina=0;

             salir=0;

             adivina=random_number(0,9) ;//random(numpalabras-1)+1;
             
     printf("Min : 1 Max : 40 %d\n     %s", adivina,matriz[adivina]);
             
 getch();
             

             for (i=0;matriz[adivina][i]!='\0';i++)

             {

                        plantilla[1][i]=0;

                        longpalabra++;

             }

             plantilla[1][i]='\0';

//          gotoxy(12,13);

             escribe(15,12,13);

             cprintf("Palabra a adivinar: ");

 

             //Presentamos la linea inicial punteada con tantos espacios como letras

             for (i=0;matriz[adivina][i]!='\0';i++)

             {

                        printf(" _ ");

 

             }

                        do

                        {

                                   //gotoxy(10,15);

                                   escribe(15,10,15);

                                   cprintf("1   Introduce una letra: "); scanf("%s",&letra);

                                   //gotoxy(12,13);

                                   escribe(15,12,13);

                                   cprintf("2   Palabra a adivinar: ");

                                   for (i=0;matriz[adivina][i]!='\0';i++)

                                   {




                                               if (matriz[adivina][i]==letra[0])

                                               {

                                                           plantilla[1][i]=1;

                                                           printf(" %c ",matriz[adivina][i]);

                                                           acierto=1;

                                               }

                                               else

                                               {

                                                           if (plantilla[1][i]==1)

                                                           {

                                                                       printf(" %c ",matriz[adivina][i]);

                                                           }

                                                           else

                                                           {

                                                                       printf(" + ");

                                                           }

                                               }

                                   }

                                   //gotoxy(21,21);

                                   escribe(15,21,21);

                                   cprintf("Letras cogidas: ");

                                   abecedario[abc]=letra[0];

                                   x++;

                                   //gotoxy(x,y);

                                   escribe(15,x,y);

                                   printf("%c",abecedario[abc]);

                                   abc++;

                                   if (acierto==0)

                                   {

                                               fallos++;

                                               switch (fallos)

                                               {

                                                           case 1:

                                                                       escribe(6,5,9);

                                                                       cprintf("___________");

                                                           break;

                                                           case 2:

                                                                       escribe(6,5,8);

                                                                       cprintf("|");

                                                                       escribe(6,5,7);

                                                                       cprintf("|");

                                                                       escribe(6,5,6);

                                                                       cprintf("|");

                                                                       escribe(6,5,5);

                                                                       cprintf("|");

                                                                       escribe(6,5,4);

                                                                       cprintf("|");

                                                                       escribe(6,5,3);

                                                                       cprintf("|");

                                                                       escribe(6,5,2);

                                                                       cprintf("|");

                                                           break;

                                                           case 3:

                                                                       //gotoxy(5,1);

                                                                       escribe(6,5,1);

                                                                       cprintf("__________");

                                                           break;

                                                           case 4:

                                                                       //gotoxy(11,2);

                                                                       escribe(6,11,2);

                                                                       cprintf("|");

                                                           break;

                                                           case 5:

                                                                       //gotoxy(11,3);

                                                                       escribe(11,11,3);

                                                                       cprintf("0");

                                                           break;

                                                           case 6:

                                                                       //gotoxy(9,4);

                                                                       escribe(11,9,4);

                                                                       cprintf("--+--");

                                                           break;

                                                           case 7:

                                                                       //gotoxy(11,5);

                                                                       escribe(11,11,5);

                                                                       cprintf("|");

                                                           break;

                                                           case 8:

                                                                       //gotoxy(10,6);

                                                                       escribe(11,10,6);

                                                                       cprintf("/");

                                                           break;

                                                           case 9:

                                                                       //gotoxy(12,6);

                                                                       escribe(11,12,6);

                                                                       cprintf("\\");

                                                           break;

                                               }

                                   }

                                   longadivina=0;

                                   for (j=0;plantilla[1][j]!='\0';j++)

                                   {

                                               if (plantilla[1][j]==1)

                                                           longadivina=longadivina+plantilla[1][j];

                                   }

                                   acierto=0;

                                   if (fallos==9)

                                               salir=1;

                                   if (longadivina==longpalabra)

                                               salir=1;

                        }

                        while (salir==0);

                        if (fallos==9)

                        {

                                   gotoxy(35,5);

                                   printf("LO SIENTO...... No acertaste.");

                                   gotoxy(35,7);

                                   printf("La palabra era ");puts(matriz[adivina]);

                                   gotoxy(35,9);

                                   printf("¨Quieres intentarlo otra vez?(s/n) ");

                                   repetir=getch();

                        }

                        else

                        {

                                   gotoxy(35,5);

                                   printf("­­­FELICIDADES!!! Acertaste!!");

                                   gotoxy(35,7);

                                   printf("¨Quieres intentarlo otra vez?(s/n) ");

                                   repetir=getch();

                        }

            }

            while (repetir=='s');

}
