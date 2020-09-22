/* 
TOMADA DE DECISÃO

Tomada de Decisão é fazer com que o algoritmo tome uma determinada decisão, 
num determinado ponto do programa. Esta decisão deve ser baseada em uma condição avaliada pelo programa. 
Iremos abordar, nesta seção, as várias formas e as respectivas estruturas que um programa possui para tomada de decisão.
*/
/*
#include <stdio.h>
int main()
{
    float nota1, nota2, media;//na função declaramos a variável
    printf("\n Informe as duas notas obtidas: ");//declaramos o printf para trazer uma mensagem de feedback do aluno
    scanf("%f %f", &nota1, &nota2);//aqui as notas serão visualizadas
    media = (nota1+nota2)/2;// recebe a expressão aritmética para cálculo da nota
    if( media >= 7.0 ) printf("\n Aprovado");//se nota maior ou igual a 7 a condição é aprovado
    else printf("\n Reprovado");//se nota menor que 7 o aluno está reprovado
}
*/
/*
TRATAMENTO DE VERDADEIRO E FALSO
É natural, e muito comum, a necessidade de se trabalhar com o relacionamento de duas ou mais condições, 
ao mesmo tempo, na mesma instrução if, efetuando, desta forma, testes múltiplos. 
Para esses casos é necessário trabalhar com a utilização dos operadores lógicos, 
também conhecidos como operadores booleanos. 

para o operador booleano AND ter resultado verdadeiro, todas as proposições devem ser verdadeiras.

para o operador booleano OR ter resultado verdadeiro, basta uma das proposições ser verdadeira.
*/
/*
#include <stdio.h>
int main()
{
    int p,q;
    printf("Informe os Estados de 'p' e 'q' -Verdadeiro:1 ou Falso:0):");//Solicita dois valores (p) e (q)
    scanf("%d%d", p, q);//Recebe os dois valores na mesma linha
    printf("\n------------------");
    printf("\n(p)%d resulta %d", p, q, p && q);//Operador booleano AND
    printf("\n------------------");
	printf("\n(p)%d OR (q)%d resulta %d", p, q, p || q); //Operador booleano OR
	printf("\n------------------");
	printf("\n NOT (p)%d resulta %d", p, !p); //Operador booleano NOT (Nega valor de p)
	printf("\n------------------");
	printf("\n NOT (q)%d resulta %d", q, !q); //Operador booleano NOT (Nega valor de q)
	printf("\n------------------");
}
*/
/*
COMANDO DE SELEÇÃO: IF
A estrutura condicional ou de decisão simples serve para 
escolher um entre dois comandos alternativos.
if (condição) comando1; else comando2;

Seu comportamento dá-se na seguinte sequência:

1.Avalia a condição, que deve ser uma expressão lógica;
2.Se a condição for verdadeira, executa apenas o comando1 e segue para o final da estrutura;
3.Se não, executa apenas o comando2 e segue para o final da estrutura.

Exemplo de estrutura de if simples:
*/
/*
#include <stdio.h>
int main( )
{
    float nota1, nota2, media;
    printf("\n Informe as duas notas obtidas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;
    if ( media >= 7.0 ) printf ("\n Aprovado");
    else printf ( "\n Reprovado" );
}*/
//O programa solicita as duas notas obtidas pelo aluno, 
//calcula sua média e, em função desse valor, 
//decide se o aluno está ou não aprovado.
/*
Pode ser que um dos comandos alternativos, ou ambos, 
seja composto por mais de uma instrução. Por exemplo, 
se o programa anterior tivesse que exibir “Aprovado” 
e a mensagem complementar “Parabéns” ou “Reprovado” 
e a mensagem complementar “Tente Novamente”, então, 
cada alternativa seria composta por duas instruções: 
uma para exibir a situação do aluno e outra para 
mensagem complementar. Nesse caso, teríamos que usar blocos, 
agrupando as instruções em cada alternativa 
dentro de um par de chaves, onde teríamos a execução do bloco 
de comandos 1 para quando o resultado da seleção ( if) for verdadeiro 
e a execução do bloco de comandos 2, 
para quando o resultado da seleção for falso, 
conforme demonstrado no código abaixo:
*/
/*
#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    printf("\n Informe as duas notas obtidas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;
    if(media >= 7.0){//bloco 1 de comandos
        printf("\n Aprovado");
        printf("\n Parabéns");
    }
    else { //bloco  de comandos
        printf("\n Reprovado");
        printf("\n Tente novamente");
    }
}
*/
/*
COMANDO IF’S ANINHADOS

 É possível que, algumas vezes, 
 um desses comandos alternativos 
 (ou ambos) sejam também condicionais. 
 Temos aí o que se caracteriza que o 
 primeiro condicional é o principal e o 
 outro está aninhado ou encadeado.
 Todo comando de decisão deve convergir para um único ponto, 
 após esta ser atendida, tanto a condição verdadeira, 
 como a condição falsa.
 */
/*
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool cond1, cond21;
    cond1 = true; //vamos supor que cond1 seja verdadeiro
    cond21 = false; //vamos supor que cond21 seja falso
    if (cond1) //condição cond1
    {
        if (cond21)//condição cond2-1
        {
            printf("Valor de cond1 = %d (BLOCO-2-2) \n", cond1);//BLOCO-2-2
            printf("Valor de cond2 = %d (BLOCO-2-2) \n", cond21);//BLOCO-2-2
        }
        else //falso de condição cond-2-1
        {
            printf("Valor de cond1 = %d (BLOCO-2-1) \n", cond1);//BLOCO-2-1
            printf("Valor de cond2 = %d (BLOCO-2-1) \n",cond21);//BLOCO-2-1
        }
    }//PONTO DE ENCONTRO P2-1
    else//falso da condição cond-1
    {
        printf("Valor de cond1 = %d (BLOCO-1) \n", cond1);//BLOCO-1
    }//PONTO DE ENCONTRO P1-0
    printf("Valor ded cond1 = %d (BLOCO-3) \n", cond1);//BLOCO-3
    printf("Valor de cond1 = %d (BLOCO-3) \n", cond21);//BLOCO-3
    return 0;
}
*/
/*
A ESCALADA DE IF-ELSE-IF
Uma necessidade comum em programação é a solução 
para um problema que requer sucessivas decisões, 
que tem como solução uma estrutura if-else-if 
(uma forma de ifencadeado). 
if (expressão) bloco de comando;
else
 if(expressão) bloco comando;
 else
  if (expressão) bloco comando;
  ...
  else(bloco comando);

Desenvolva um programa para obter a idade de uma pessoa. 
Verificar em que classificação etária esta pessoa se encontra e mostrar na tela. 
Considere as seguintes faixas, 
relativas às faixas etárias: de 0 a 15 – Criança; 
de 16 a 21-Adolescente; de 22 a 59-Adulto; 
igual ou maior a 60 anos – Terceira idade.
*/
/*
#include <stdio.h>
int main(void)
{
    int idade;
    printf ("\n Entre com a Idade: ");
    scanf ("%d",&idade);
    if (idade >= 0 &idade < 16)
        printf("\n É uma Criança");
            else if (idade >= 16 &idade < 22)
                printf("\n É um Adolescente");
                    else if (idade >= 22 &idade < 60)
                        printf ("\n É um Adulto");
                            else
                                printf("\n É terceira idade");
    printf("\n Este comando está fora da cadeia de ifs");
    return 0;
}
*/
/*
O OPERADOR TERNÁRIO?

O ? é chamado de operador ternário porque requer três operandos. 
Ele verifica uma condição e retorna um dentre dois valores 
pré-definidos em sua estrutura. Esta é uma notação chamada inline para, 
nas vezes em que seja necessário, 
avaliar expressões e decidir por um dentre dois valores.

Exp1 ? Exp2 : Exp3;

Onde Exp1, Exp2 e Exp3 são expressões. 
Esta estrutura de decisão tem o seguinte mecanismo: 
Exp1 é avaliada. Se for verdadeira, 
então Exp2 é avaliada e se torna o valor da expressão. 
Se Exp1 for falsa, então Exp3 é avaliada e se torna o valor da expressão, 
em outras palavras: O Valor Lógico da expressão é verdadeiro? Se sim, 
retorna o primeiro valor; se não, retorna o segundo valor.

Programa 1 - Resolvido por estrutura de if
*/
/*
#include <stdio.h>
int main(void)
{
    int valor, valor2;
    printf("Informe um VALOR numérico: ");
    scanf("%d",&valor);
        if(valor < 0)
            valor2 = 0;
        else
            valor2 = valor;
        printf("\n Resolvido com estrutura de if ");
        printf("\n-------------------");
        printf("\n O valor de valor2 é: %d \n\n", valor2);
        return 0;       
}
*/
/*
Programa 2 - Resolvido por Operador Ternário ?
*/
/*
#include <stdio.h>
int main(void)
{
    int valor, valor2;
    printf("Informe um número: ");
    scanf("%d", &valor);
    valor2 = (valor < 0) ? 0 : valor;//Resolvido em uma única linha
    printf("\n Resolvido com operador ternário ?");
    printf("\n--------------------");
    printf("\n O valor de valor2 é: %d \n\n ", valor2);
    return 0;
}
*/
/*
SWITCH
Temos aqui um comando interno de solução múltipla, 
o comando switch, que nos permite testar sucessivamente 
o valor de uma expressão a partir de uma lista constantes inteiras ou de caractere. 
O conteúdo de uma variável é comparado com um valor constante, e, 
caso a comparação seja verdadeira, um determinado comando é executado. 
O comando switch tem a seguinte forma:

switch (expressão)
{
 case constante1:
  bloco de comandos
  break;
 case constante2:
  bloco de comandos
  break;
 case constante3:
  bloco de comandos
  break;
  ...
default:
 bloco de comandos
}

O valor da expressão é testado, na ordem, 
contra os valores das constantes especificadas 
no comando case. Quando uma coincidência for 
encontrada, a sequência de comandos associada 
àquele case será executado. Importante ressaltar 
que o comando break tem a missão de limitar a 
sequência de execução até onde se encontra, 
ou em outras palavras, o comando break faz um 
“salto” para a linha seguinte ao comando switch 
(logo ao fechamento de chave “}”). 
O comando default é opcional e será executado 
se nenhuma coincidência for detectada.

Um uso muito comum do comando switch é na entrada 
de dados via teclado, como por exemplo na seleção 
de menu.

• O comando switch somente pode testar igualdade, 
pois este não pode avaliar um expressão lógica ou 
relacional.
• Duas constantes case no mesmo switch não podem 
ter valores idênticos

O código abaixo exemplifica a utilização do comando 
switch, em que podemos verificar a seleção de menu 
de um programa que trata um cadastramento de cliente.
*/
/*
#include <stdio.h>
char menu(void) {
    char opcaoDigitada;
    printf("\n* CADASTRO DE CLINTES *");
    printf("\n* *");
    printf("\n* 1 - Consulta *");
    printf("\n* 2 - Alteração *");
    printf("\n* 3 - Inclusão *");
    printf("\n* 4 - Exclusão *");
    printf("\n* 0 - Sair *");
    printf("\n*-----------------*");
    printf("\n* Selecione a opção: *");
    opcaoDigitada=getchar();//Lê do teclado a opção
    return opcaoDigitada;
}
int main(void) {
    char opcao =  menu();
    switch(opcao)
    {
        case '1':
            printf("\n Você escolheu Consulta");
            break;
        case '2':
            printf("\n Você escolheu Alteração");
            break;
        case '3':
            printf("\n Você escolheu Inclusão");
            break;
        case '4':
            printf("\n Você escolheu Exclusão");
            break;
        case '0':
            printf("\n Você escolheu SAIR");
            break;
        default:
            printf("Opção INVALIDA");
    }
    return 0;
}
*/
/*
PROGRAMAÇÃO COM LAÇOS
Os comandos de controle de laço, também conhecidos como comandos de iteração, 
são a alma da programação, pois estes proporcionam ao programador o controle 
dos ciclos necessários em um programa para resolver os vários problemas computacionais. 
Por exemplo, imagine uma aplicação que tem como objetivo entrada de dados a partir de um menu, 
no qual o usuário poderá fazer várias ações, e quantas vezes forem necessárias. 
Ou seja, um laço de repetição de ações. 

O LAÇO FOR

Esta é uma estrutura de repetição com contador (sentinela) e tem seu funcionamento controlado por uma variável que conta o número de vezes que o comando é executado. A forma básica é deste comando é:

for (inicialização; condição; incremento) comando;

A inicialização é uma expressão que atribui um valor inicial ao contador, a
 condição verifica se a contagem chegou ao fim e o incremento 
 modifica o valor do contador. A condição determina o fim da repetição do comando associado ao for . 
 Enquanto a condição estiver no estado “verdadeira”, 
 o bloco de comando é executado com o posterior incremento do contador.

Exemplo de comando for:
*/
/*
#include <stdio.h>
int main(void) 
{   

    printf("\n Exemplo de estrutura de repetição for");
    printf("\n*------------------*");
    for(int contador= 1; contador<= 10; contador++);
    {
        printf("\n O Valor do contador é = %d",contador);

    }
    return 0;    
}
*/
/*
Faça um programa que deverá produzir uma tabuada 
para um número que seja de 1 a 10. 
Deverá ser solicitado e validado um número (de 1 a 10). 
Se o número informado estiver fora do intervalo, encerre o programa. 
Para o referido número válido, produza a tabuada fazendo: n x 1; n x 2...até nx10.
O resultado da multiplicação deverá ser apresentado em tela, 
um por um. Finalize o programa quando atingir a décima multiplicação.
*/
/*
#include <stdio.h>
int entradaDados()
{
    int numeroEntrada;
    printf("\n Informe o número base para tabuada ");
    scanf("%d", &numeroEntrada);
    return numeroEntrada;//Retorna o valor digitado pelo usuário
}
int main(void)
{
    int numeroDigitado = entradaDados();
    int controle = controle;
    if(numeroDigitado < 1 || numeroDigitado > 10)
    {   
        printf("\n Número informado é inválido (Fora do intervalo 1-10)");
        exit(0);//termina o programa
    }
    printf("\n*---------------------*");
    printf("\n Você selecionou a tabuada do %d", numeroDigitado);
    printf("\n *--------------------*");
    for(int controle = 1; controle <= 10; controle++);
    {
        printf("\n %d x %d = %d", controle, numeroDigitado, numeroDigitado * controle);
    }
    return 0;
}
*/
/*
O LAÇO WHILE
A estrutura de repetição while, assim como a estrutura for, 
permite ao programador uma repetição controlada no fluxo da lógica do programa. 
Esta estrutura possui uma precondição para que o bloco de comando seja executado.

Em linguagem C, a estrutura while possui a seguinte sintaxe:

while( condição ) comando;

Seu funcionamento é controlado por uma única expressão (condição), 
cujo valor deve ser verdadeiro para que o bloco de comando seja repetido. 
A repetição deixa de ser executada somente quando sua condição tornar-se falsa.
*/
/*
#include <stdio.h>
#include <stdlib.h>
int entradaDados()
{
    int numeroEntrada;
    printf("\n Informe o número base para tabuada ");
    scanf("%d", &numeroEntrada);
    return numeroEntrada;//Retorna o valor digitado pelo usuário
}
int main(void)
{
    int numeroDigitado = entradaDados();
    int controle = 7;
  
    if(numeroDigitado < 1 || numeroDigitado > 10)
    {   
        printf("\n Número informado é inválido (Fora do intervalo 1-10)");
        exit(0);//termina o programa
    }
    printf("\n*---------------------*");
    printf("\n Você selecionou a tabuada do %d", numeroDigitado);
    printf("\n *--------------------*");
    for(int controle = 1; controle <= 10; controle++);
    {
        printf("\n %d x %d = %d", controle, numeroDigitado, numeroDigitado * controle);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdbool.h>
float nota1, nota2, nota3, nota4; //Variaveis GLOBAIS
//*---------------------------------------------------------------*
// Função para obtenção das quatro notas
//*--------------------------------------------------------------*
int entradaNotas()
{
	for (int controle = 1; controle <= 4; controle++)
	{
	printf(“\n Informe a nota %d = “, controle);
	switch (controle)
	{
	    case 1:
	        scanf(“%f”, nota1);
	        break;
	    case 2:
	        scanf(“%f”, nota2);
	        break;
	    case 3:
	        scanf(“%f”, nota3);
	        break;
	    case 4:
	        scanf(“%f”, nota4);
	        break;
	    }
	} //fim da estrutura for iniciada na linha 9
} //Aqui termina a funcao entradaOpcao()
//*------------------------------------------------------*
// Função para obter do usuário
//*------------------------------------------------------*
bool entradaOpcao()
	{
	int opcaoDigitada;
	int digitacaoOK= 1;
	printf(“\n Você deseja Calcular outra média? (1=sim/0=Não)”);
	while (digitacaoOK == 1)
	{
	    scanf(“%d”, opcaoDigitada); //Le do teclado a opcao
	    if (opcaoDigitada == 1 || opcaoDigitada == 0 )
	    { digitacaoOK = 0;}
	    else {
	    digitacaoOK = 1;
	    printf(“\n Opção invalida (Deve ser 1-Sim 0=Não):%d “, opcaoDigitada);
	    }
	} //Fim da estrutura de repetição while iniciada na linha 37
	if (opcaoDigitada == 1 )
	{
	return true; }
	else{
	    return false;}
} //Aqui termina a função entradaOpcao()
//*------------------------------------------------------*
//Função principal do programa
//*------------------------------------------------------*
	int main(void)
	{
	float media, mediaTurma;
	float acumulaMedia= 0;
	int qtdAlunos= 0;
	bool continuaProcessamento = true;
	while (continuaProcessamento)
	{
	    entradaNotas(); //Chama a função para obter as 4 notas
	    media = (nota1+nota2+nota3+nota4)/ 4;
	    printf(“\n *---------------------*”);
	    acumulaMedia = acumulaMedia + media;
	    qtdAlunos = qtdAlunos + 1;
	    if (media >= 7.0)
	    {
	    printf(“\n Este Aluno foi APROVADO com média = %.2f”, media);}
	    else {
	    printf(“\n Este Aluno foi REPROVADO com média = %.2f”,media);
	    }
	continuaProcessamento = entradaOpcao(); /*Chama função para verificar se usuario quer continuar*/
/*	} //Fim da estrutura de repetição while iniciada na linha 62/*
	mediaTurma = acumulaMedia / qtdAlunos;
	printf(“\n *===============================*”);
	printf(“\n A média da Turma foi = ٪.٢f», mediaTurma);
	printf (“\n Obrigado por usar o sistema”);
	return 0;
}
*/

