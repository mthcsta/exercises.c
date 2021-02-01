#include <stdio.h>
#include <stdlib.h>
#include "data.h"

/* lê data */
void le_data(Data *data) {
  printf("Dia:"); 
  scanf("%d",&data->dia);
  
  printf("Mes:"); 
  scanf("%d",&data->mes);
  
  printf("Ano:"); 
  scanf("%d",&data->ano);
}

/* Valida data */
int valida_data(Data data) {
  return !(
       (data.dia < 1) || (data.dia > 31)      // checa dia
    || (data.ano < 1) || (data.ano > 2100)    // checa ano
    || (data.mes < 1) || (data.mes > 12)      // checa mes
  );
}

/* Imprime data */
void imprime_data(Data data) {
  printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
}

/* Calcula dias */
int dias_total_data(Data data) {
  return (data.dia) + ((data.mes-1)*30) + (data.ano*365);
}

/* Compara datas */
int compara_datas(Data data1, Data data2) {
  return abs(dias_total_data(data1) - dias_total_data(data2));
}

/* data da pascoa */
Data pascoa_data(int ano) {
  int mes, dia, c, n, k, i, j, l;

  c = (ano / 100);
  n = ano - 19*(ano/19);
  k = (c-17)/25;
  i = c - c/4 - ((c-k)/3) + (19*n) + 15;
  i = i - (30*((i/30)));
  i = i - (i/28) * (1 - ((i/28))) * (29 / (i + 1)) * ((21-n) / 11);
  j = ano + ano/4 + i + 2 - c + c/4;
  j = j - (7*((j/7)));
  l = i - j;
  mes = 3 + ((l+40) / 44);
  dia = l + 28 - (31 * (mes/4));

  return new_data(dia, mes, ano);
}

/* captura um tipo data */
Data new_data(int dia, int mes, int ano) {
  Data data = { dia, mes, ano };
  return data;
}