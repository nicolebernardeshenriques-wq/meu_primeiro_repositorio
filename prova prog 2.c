#include <stdio.h> #include <string.h>

#define MAXIMO 3 HORASNODIA 3 LIMITEUMIDADE 100
{
typedef struct
    char [10] char [50];
    int contagemAlarme; int semAlarme;

}
equipamento;

int main()
equipamento equipamentos[MAXIMO]; //.codigo .nome
float umidades [MAXIMO][HORASNODIA]={0};
int totalAlarmes=0;
{
for (int i = 0; i < MAXIMO; i++) 
printf("infomre o codigo do equipamento %d:",i + 1);
scanf ("%s"equipamentos[i].codigo);

printf("infomre o nome do equipamento %d:",i + 1);
scanf ("%s"equipamentos[i].nome);

equipamentos[i].contagem alarme = 0;
equipamentos[i].semAlarme = 1;
}
{
for (int hora =0; hora <HORASNODIA;hora++)
for (int i =0; i< MAXIMO; i++)
printf ("informe a umidade do equip%s (%s)\n",equipamentos[i].codigo, equipamentos[i].nome, hora + 1);
equipamentos[i].contagemAlarme++;
equipamentos[i].semAlarme = 0;
totalAlarmes++;

int maxAlarmes = 0;
    int indexMaxAlarme = 0;
    printf("\nResumo dos alarmes:\n");
    for (int i = 0; i < MAXIMO; i++) {
        if (equipamentos[i].contagemAlarme > maxAlarmes) {
            maxAlarmes = equipamentos[i].contagemAlarme;
            indexMaxAlarme = i;
        }
        
        if (equipamentos[i].semAlarme) {
            printf("O equipamento %s (%s) não teve nenhum acionamento de alarme.\n", equipamentos[i].codigo, equipamentos[i].nome);
        }
    }

    printf("O total de alarmes acionados foi: %d\n", totalAlarmes);
    printf("O equipamento com mais acionamentos de alarme foi: %s (%s) com %d alarmes.\n", 
           equipamentos[indexMaxAlarme].codigo, equipamentos[indexMaxAlarme].nome, maxAlarmes);
    
    return 0;
          
            

   
}












