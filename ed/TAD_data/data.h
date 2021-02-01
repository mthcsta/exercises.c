/*TAD DATA (dd,mm,aaaa)*/
/* TIPO DE DADO exportado */
struct data {
  int dia;
  int mes;
  int ano;
};
typedef struct data Data;
/* OPERAÇÕES Exportadas */
/* lê data */
void le_data (Data *d);
/* Valida data */
int valida_data(Data d);
/* Imprime data */
void imprime_data(Data d);
/* Calcula dias */
int dias_total_data(Data d);
/* Compara datas */
int compara_datas(Data d1, Data d2);
/* data da pascoa */
Data pascoa_data(int ano);
/* captura um tipo data */
Data new_data(int dia, int mes, int ano);
