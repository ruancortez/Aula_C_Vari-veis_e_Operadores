/*
quadrado.cpp : calcula o quadrado de um número inteiro
Escrito por nome do autor - FAM Online
Data: 12/junho/20xx - Versão 1.0
#include <stdio.h> //Definição de diretivas de biblioteca para printf e scanf
#include <conio.h> //Definição de biblioteca para getch
main( ) //Função principal
{
  int num, quad; //Definição de variáveis
  printf ("Digite um valor inteiro"); //Mensagem que aparece em tela
  scanf ("%d, &num"); //Guarda valor digitado
  quad = num * num; //Calcula o quadrado do número
  printf ("O quadrado de %d = %d\n", num, quad); //Apresenta o resultado em tela
  printf("Pressione qualquer tecla para finalizar"); //Mensagem em tela
  getch( ); //Aguarda pressionar uma tecla
}
*/
//Variáveis locais = São as variáveis declaradas 
//dentro de uma função. Variáveis locais existem apenas 
//enquanto o bloco de comandos em que foram declaradas
//está sendo executada.
/*
void funcao1(void)
{
    int valor;
    valor = 10;
}
void funcao2(void)
{
    int valor;
    valor = 321;
}

A variável inteira valor é declarada duas vezes, uma vez dentro da função funcao1( ) e outra dentro da função funcao2( ).Neste exemplo, cada variável valor é reconhecida apenas pelo código do respectivo bloco de comandos da declaração da variável. Ou seja, qualquer manipulação da variável valor, dentro da função1() , está a tratar com o conteúdo 10 e a manipulação da variável valor, dentro da funcao2(), está a tratar o conteúdo 321.

Pelo fato de toda variável local ser criada e destruída a cada entrada e saída do bloco em que elas são declaradas, seu conteúdo é perdido quando o bloco deixa de ser executado. Quando uma função é chamada, suas variáveis locais são criadas e, ao retornar, elas são destruídas.
*/
/* Parâmetros formais são as variáveis que receberão os valores dos argumentos tratados pela função. Essas variáveis se comportam como qualquer outra variável local dentro da função. 
*/
/*
#include <stdio.h>
int operaValores( char operacao, int valor1, int valor2)
{
    int resultado = 0;

    if (operacao == 'A')
    {
        resultado = valor1 + valor2;
    }
    else
    {
        resultado = valor1 * valor2;
    }
    return resultado;
}
int main(void) {
    int operacao = operaValores('M', 2, 3);
    printf("O valor da Operação é:%d", operacao);
    return 0;
}
*/

//Variáveis globais
/* 
As variáveis globais são reconhecidas e podem ser manipuladas em toda a extensão do programa,
 ou seja, em todo o código. Adicionalmente, essas variáveis preservam o valor de seus conteúdos durante toda a execução do programa. 
 Essas variáveis devem ser declaradas fora de qualquer função do programa.
*/
/*
#include <stdio.h>
int contador = 100; //Declaração de variável Global "contador"
//
void funcao1AlteraContador()
{
    contador = contador + 10;
    printf("Neste momento #1 a variável contador = %d\n",contador);
}
void funcao2AlteraContador()
{
    contador = contador + 20;
    printf("Neste momento #2 a variável contador = %d\n",contador);
}
int main(void) {
    printf("Neste momento #0 a variável contador = %d\n",contador);
    funcao1AlteraContador();
    funcao2AlteraContador();
    contador = contador + 30;
    printf("Neste momento #3 a variável contador = %d\n",contador);
    return 0;
}
*/
//TRABALHANDO OPERADORES
/* A linguagem C é muito rica no tratamento de operadores,
 em que podemos encontrar quatro classes de operadores: 
 aritméticos, relacionais, lógicos e bit a bit, 
 além de um operador especial: Operador de atribuição.

//OPERADORES DE ATRIBUIÇÃO

A linguagem C disponibiliza operadores de atribuição, 
que podem ser utilizados dentro de qualquer expressão válida em C. 
A sintaxe do operador de atribuição é dada por:

Nome_da_variável = expressão;

Em que expressão pode ser tão simples como uma única constante,
 ou tão complexa quanto necessária. É importante destacar que o destino 
 (parte esquerda da atribuição), deve ser uma variável ou um ponteiro,
  e nunca uma função ou uma constante. 
  Em C é permitido que se atribua o mesmo valor a muitas variáveis 
  usando atribuições múltiplas em um único comando.

Atribuição	                     Tipos de Atribuições
codigoAluno = 1234;	                 Literal numérica
sexoAluno = ‘F’;	                 Tipo caractere
desconto = calculaDesconto();	     Atribuição com valor retornado de uma função
strcpy( linguagem, “linguagem C”);	 Atribuição para uma variável do tipo string (char linguagem [20];)
salario = proventos - desconto;	     Atribuição a partir de uma expressão aritmética
valor1 = valor2 = valor3 = 1000.00;	 Atribuição do valor 1000,00 para múltiplas variáveis em um só comando

//OPERADORES ARITMÉTICOS

Temos na linguagem C os cinco operadores aritméticos básicos: 
+ (adição), - (subtração), * (multiplicação) e / (divisão) 
e mais os operadores especiais: % (módulo da divisão-resto), 
++ (incremento) e -- (decremento). 
Podemos usar mais de um operador na mesma expressão. 
A precedência é igual à usada na matemática comum.

Operação	                            Resultado da Operação
operacao1 = 20 + 40 * 10;	            420
operacao2 = 20 + 400 / 2 + 50;	        270
operacao3 = (20 + 40) * 10;	            600
operacao4 = (1200 + 200) / (30 + 70);	14
operacao5 = 10 * 5 * 4 - 3 - 1;	1       96

//OPERADORES ARITMÉTICOS DE INCREMENTO E DECREMENTO

O incremento é representado pelos sinais ++, 
ou seja, ele aumenta em 1 o valor da variável 
que ele está acompanhando (seu operando). 
O conceito é semelhante para o sinal de --, 
com a diferença que ele diminui em uma unidade 
o valor da variável que acompanha (seu operando).

EXEMPLO: 

int iValor= 0;
iValor++;      //Neste momento iValor = 1
//É o mesmo que:
int iValor = 0;
iValor = iValor + 1; //Neste momento ivalor = 1

int dValor = 10;
dValor--;    //Neste momento dValor = 9
//É o mesmo que:
int dValor = 10;
dValor = dValor -1;   //Neste momento dValor = 9
*/

/*
OPERADORES RELACIONAIS E LÓGICOS

Quando falarmos Operador Relacional, 
o termo relacional refere-se às relações que os valores 
podem ter uns com os outros. E, ao falarmos Operador Lógico, 
o termo lógico se refere às maneiras como essas relações 
podem ser conectadas.

É muito importante o domínio do conceito da lógica booleana (
verdadeiro ou falso), pois, este conceito é a base dos conceitos 
dos operadores lógicos e relacionais.

Na Tabela 7 Operadores Relacionais e Operadores Lógicos. 
Fonte: Elaboração Própria." na página 30 temos a relação 
dos símbolos utilizados pela linguagem C para representar 
os operadores relacionais e lógicos.

Operadores Relacionais	    Operadores Lógicos
==	igualdade	            &&	e lógico
!=	diferença
>	maior que	            ||	ou lógico
<	menor que
>=	maior ou igual a	    !	não lógico
<=	menor ou igual a
*/
/*
#include <stdio.h>
int main()
{
    int iJ, iI;
    iJ = 18; iI = 60;
    int idade = 15;
    if((idade > iJ)&&(idade < iI)){
        //se isso for V ou se isso for V
        //A meia idade se caracteriza por qualquer pessoa que tenha
        //menos de 60 anos e mais de 17
        printf("A idade informada é de uma pesoa de meia-idade.");
    }
    else{
        if(idade >= iI){
            printf("\n A idade informada é de uma pessoa idosa.\n");
        }
        else{
            printf("\n A idae informada é de um jovem.\n");
        }
    }
    return 0;
}
*/
/*
//O OPERADOR TERNÁRIO

A linguagem C possui um operador que possibilita 
substituir certas sentenças if-then-else. 
É o operador ternário ?, e que possui a seguinte sintaxe:

Exp1 ? Exp2 : Exp3;

Onde Exp1, Exp2 e Exp3 são expressões e têm o seguinte comportamento: 
Exp1 é avaliada. Se for verdadeira, 
então Exp2 é avaliada e se torna o valor da expressão. 
Se Exp1 for falsa, então Exp3 é avaliada e se torna o valor da expressão.
*/
/*
#include <stdio.h>
int main(void) {
    int cod = 101;
    int resultado = cod > 100 ? 200 : 300;
    printf("Valor de resultado %d\n", resultado);
    return 0;
}
*/
/* 
À variável resultado é atribuído o valor de 200 pois,
neste caso, Exp1 é positivo. Se cod fosse menor do
que 100, a variável resultado teria recebido o valor 
300.

//Observe o código abaixo, resolvendo o mesmo problema, 
com a estrutura "if-then-else".
*/
/*
#include <stdio.h>
int main(void)
{
    int cod = 101;
    int resultado;
    if (cod > 100)
    {
        resultado = 200;
    }
    else {
        resultado = 300;
    }
    printf("Valor de resultado %d\n",resultado);
    return 0;
}
*/
/*PROGRAMA: SITUAÇÃO DO ALUNO SE É APROVADO OU NÃO
A PARTIR DAS SUAS QUATRO NOTRAS NO PERÍODO.
*/

#include <stdio.h>
float entradaDados(int numeroEntrada)
{   
    //O Objetivo desta função é obter uma entrada de entradaDados.
    //Em nosso caso irá obter uma nota de aluno digitado pelo teclado.
    float nota;
    printf("\n Entre com a nota # %d: ", numeroEntrada);
    scanf("%f",&nota);
    return nota;
}
//Aqui começa o programa - Função main() - Todo programa em C começa por aqui
int main(void)
{
    float n1, n2, n3, n4, media;//Declara as variáveis para receber as notas
    n1 = entradaDados(1);//chama a função para obter a nota #1
    n2 = entradaDados(2);//chama a função para obter a nota #2
    n3 = entradaDados(3);//chama a função para obter a nota #3
    n4 = entradaDados(4);//chama a função para obter a nota #4

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7.0)
    {
        printf("Aluno APROVADO com média %f : ",media);
    }
    else
    {
        printf("Aluno REPROVADO com média %f : ", media);
    }
    return 0;    
}



