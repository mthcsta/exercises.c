/**
 ** Preencha um evento para uma agenda com seu nome, local,
 ** data e hora; retorne esse evento em impresso
**/
#include <stdio.h>

struct str_horario
{
    int hora, minuto;
};
struct str_data
{
    int dia, mes, ano;
    struct str_horario hora;
};
struct str_agenda
{
    char nome_evento[50], local_evento[50];
    struct str_data data;
};

struct str_agenda LeStruct(){
    struct str_agenda agenda;

    printf("Entre o nome do evento: ");
    fgets(agenda.nome_evento, 50, stdin);

    printf("Entre o local do evento: ");
    fgets(agenda.local_evento, 50, stdin);

    printf("Entre a data do evento (dia mes ano): ");
    scanf("%d%d%d",
          &agenda.data.dia,
          &agenda.data.mes,
          &agenda.data.ano);

    printf("Entre a hora do evento (hora minuto): ");
    scanf("%d%d",
          &agenda.data.hora.hora,
          &agenda.data.hora.minuto);

    return agenda;
}

void ImprimeStruct(struct str_agenda agenda){

    printf("\n\nImpressao do evento:\n");

    printf("Evento: %s", agenda.nome_evento);
    printf("Local: %s", agenda.local_evento);
    printf("Data do evento: %d/%d/%d, as %d:%d\n\n",
           agenda.data.dia, agenda.data.mes, agenda.data.ano,
           agenda.data.hora.hora, agenda.data.hora.minuto);

    return;
}

int main(){
    ImprimeStruct(LeStruct());
    return 0;
}

