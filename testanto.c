/*
#include<stdio.h>
#include<stdlib.h>
//Exemplo simples de Matriz
int main(void)
{
	float amotraTemperatutaTrimestral[3][4]=
	{ {25.4, 27.09, 28.90, 29.50},
	{21.8, 20.05, 22.90, 20.90},
	{28.8, 20.10, 17.70, 19.00} };
	printf("\n Exemplo de acesso a Matriz Bidimensional");
	printf("\n *-----------------------------*");
	for (int indice_i=0; indice_i < 3; indice_i++)
	{
		//laço repetição para controlar as 3 linhas da matriz
		printf("\n *--------Temperaturas do Mes : %d ---------*", indice_i+1);
		for (int indice_j=0; indice_j < 4; indice_j++)
		{
			//laço repetição para controlar as 4 colunas da matriz
			printf("\n Temperatura %d = %.2f", indice_j+1,
					amotraTemperatutaTrimestral[indice_i][indice_j]);
		}
	}	
	return 0;
}
*/
/*
Vetores Unidimensionais
Uma matriz ou vetor é uma coleção de variáveis de um mesmo tipo, 
que compartilham o mesmo nome e que ocupam posições consecutivas 
de memória, em que o endereço mais baixo corresponde ao primeiro 
elemento e o mais alto, ao último elemento. 
Um elemento específico em um vetor é acessado por meio de um 
índice.

Se v é um vetor com n posições, 
seus elementos são v[0], v[1], v[2], ..., v[n−1].
Em C os vetores são sempre indexados a partir de zero e, 
portanto, o último elemento de um vetor de tamanho n 
ocupa a posição n−1 do vetor.
Para criar um vetor, basta declarar uma variável 
com sufixo [n], sendo n uma constante indicando o número 
de elementos a serem alocados no vetor.

Em C a sintaxe para a declaração de um vetor e:

tipo nome_var [tamanho];

Onde: tipo declara o tipo de base do vetor, 
que é o tipo de cada elemento do vetor; 
nome_var é o nome pelo qual faremos referência ao vetor; 
tamanho define quantos elementos o vetor irá guardar.

Por exemplo: para declarar um vetor de 100 elementos, 
chamado amostraTemperatura e do tipo decimal (double), 
utilizamos o seguinte comando em linguagem C:

double amostraTemperatura[100];

A quantidade de armazenamento necessário para guardar 
um vetor está diretamente ligado com o seu tamanho e seu tipo. 
Para um vetor unidimensional, o tamanho total em bytes 
é calculado pela fórmula:

total em bytes = sizeof(tipo) * tamanho do vetor

Vetores unidimensionais são, essencialmente, listas de informações 
do mesmo tipo, que são armazenadas em posições contíguas de 
memória. Partindo-se do princípio que um programa, 
ao ser alocado em memória, ocupa um espaço a partir de um 
determinado endereço de memória, vamos supor que declaremos 
um vetor chamado notas de 5 posições. 
Vamos supor que o início deste vetor esteja no 
endereço 1000 de memória, observe na Figura 2 como este 
vetor ocupara o espaço.

Elemento-----------> nota[0] nota[1] nota[2] nota[3] nota[4]
Endereço-----------> 1000	  1001 	  1002    1003    1004
Rempresentação na memória do vetor de 5 elementos.

Exemplos de manipulação de vetores unidimensionais
Vetores são automaticamente zerados pelo compilador. 
Mas, se for desejado, podemos inicializá-los explicitamente 
no momento em que os declaramos. 
Nesse caso, os valores iniciais devem ser fornecidos 
entre chaves e separados por vírgulas (Linha 4). 

O código abaixo ilustra esta situação:
*/
/*
#include <stdio.h>
int main(void)
{
	float notas[4] = {4.5, 5.0, 4.0, 6.0};
	float soma = 0;
	for (int indice; indice < 4; indice++)
	//laço de repetição para acessar as 4 posições do vetor
	{
	soma = soma + notas[indice];
	}
	printf ("\n A média das notas é: %.2f", ( soma/4 ));
	return 0;
}
*/
/*
Agora vamos exemplificar como incluir valores no vetor de 
forma dinâmica. Partindo do exemplo anterior, o programa 
abaixo irá solicitar 4 notas; armazená-las em um vetor e 
obter a média aritmética das notas, mostrando na tela.

Note que foram utilizados dois laços de repetição for: 
O laço da linha 8 obtém as notas a partir da digitação, 
pelo teclado, as coloca no vetor “notas”. O laço da linha 14 
essa cada posição do vetor “notas” do vetor notas para fazer 
o cálculo da média.
*/
/*
#include <stdio.h>
int main(void)
{
	float notas[4];//Vetor para receber as notas digitadas
	float soma = 0;
	printf("\n Exemplo de inicialização dinâmica de vetor");
	printf("\n *----------------------------------------*");
	for (int indice1 = 0; indice1 < 4; indice1++)
		//laço repetição para solicitar 4 notas
	{
		printf("\n Informe a nota %d = ",indice1+1);
		scanf("%f", &notas[indice1]);//Lê do teclado a opção
	}
	for (int indice2 = 0; indice2 < 4; indice2++)
		//laço de repetição para acessar as 4 posições do vetor - Acumula na variável soma cada nota do vetor
	{
		soma = soma + notas[indice2];
	}
	printf("\n A média das notas é: %f", (soma / 4));
	return 0;
}
*/
/*
Strings

O uso mais comum de vetores unidimensionais é como string 
de caracteres. A string é talvez uma das mais importantes 
formas de armazenamento de dados na maioria das linguagens 
de programação. Em C, entretanto, ela não é um tipo de dado 
básico, pois uma string é uma série de caracteres terminada 
com um caractere nulo, representado por ‘\0’.

Na forma de uma constante, a string aparece como uma série 
de caracteres delimitada por aspas; como por exemplo, 
“azul e branco”. 
Devido à necessidade do ‘\0’, os vetores que armazenam strings devem ter sempre uma posição a mais do que o número de caracteres a serem armazenados.

Saiba Mais
O caracter nulo ‘\0’ é o primeiro da tabela ASCII e tem 
código igual a zero.
Cuidado para não confundi-lo com o caracter ‘0’, que tem 
código ASCII 48.
No código abaixo, podemos comprovar a quantidade de bytes 
alocados para a string “azul e branco”. Se contarmos a 
quantidade de caracteres, temos 13 caracteres (Os espaços 
também são caracteres). Porém, o compilar gera automaticamente 
o tamanho de 15, pois, o caractere \0 foi colocado 
automaticamente ao final.
*/
/*
#include <stdio.h>
int main(void) {
	printf("\n Programa para mostrar o tamanho de uma string");
	printf("\n *-------------------------------------------*");
	printf("\n Espaço alocado = %ld bytes", sizeof("azul e branco"));
}
*/
/*
Manipulação de strings
A linguagem C disponibiliza funções de manipulação de strings, conforme listada na Tabela 1:

Tabela : Funções para manipulação de string. 
Função			Objetivo						Exemplo					Comentário
strcpy		copiar strings						strcpy(s1, s2)			Copia s2 em s1
strcat		Concatenar strings					strcat(s1, s2)			Concatena s2 ao final de s1
strlen()	Descobrir o tamanho de uma string	strlen(s1)				Retorna o tamanho da string s1
strcmp()	Comparar strings					strcmp(s1, s2,tamanho)	Retorna 0 se s1 e s2 forem iguais; Menor que 0 se s1<s2 e Maior que 0 se s1 > s2
Para utilização dessas funções, faz-se necessário a inclusão da biblioteca string, 
utilizando-se o comando #include <string.h>.

Temos, abaixo, um código que exemplifica a utilização da função que faz a cópia de 
strings(strcpy) e retorna o tamanho da string(strlen):
Para utilização dessas funções, faz-se necessário a inclusão 
biblioteca string, utilizando-se o comando 
#include <string.h>.

Temos, abaixo, um código que exemplifica a utilização da 
função que faz a cópia de strings(strcpy) e retorna o 
tamanho da string(strlen):
*/
/*
#include <stdio.h>
#include <string.h>// necessário para strcpy
int main(void)
{
	char nome[15];
	strcpy(nome, "Fulano de Tal");
	//strcpy(string_destino, string_origem);
	//note que a string de destino é nome
	//a string de origem é "Fulano de Tal"
	printf("\n Exemplo de copia de string");
	printf("\n *------------------------*");
	printf("\n Nome = %s", nome);
	printf("\n O tamanho da string 'nome' é %li", strlen(nome));
	return 0;
}
*/
/*
Comparação entre duas strings
Como a string não é um tipo de dados básico da linguagem C, 
operações simples, como atribuição e comparação, não podem 
ser feitas diretamente com os operadores disponíveis. 
A comparação entre duas strings pode ser feita de duas formas: 
1-) Percorrendo os vetores e comparar seus caracteres correspondentes, um a um ou 
2-) utilizar a função strncmp().

O código abaixo faz a comparação entre duas strings str1 e str2. 
Para isso, utilizamos a função strncmp() – observe a linha 10. 
Note que a estrutura do comando: strcmp(s1, s2,tamanho), 
onde o campo “tamanho” é a quantidade caracteres comparados. 
Em nosso caso, foram comparados os 8 caracteres.
*/
/*
#include<stdio.h>
#include<string.h>
int main ()
{
	char *str1 = "banana2";
	char *str2 = "banana1";
	int ret;
	printf("\n Manipulação de String : Comparação de duas strings");
	printf("\n *------------------------------------------------*");
	ret = strncmp(str1, str2, 8);//Compara as 8 posições das duas strings
	if (ret > 0)
	{
		printf("\n str1 é maior");
	}
	else if(ret < 0)
	{
		printf("\n str2 é maior");
	}
	else
	{
		printf("\n As duas palavras são iguais");
	}
	return (0);
}*/
/*
Observe o resultado do código analisado na Figura 8. 
A variável str1 é maior que a variável str2, 
pois a função comparou caractere por caractere e 
detectou diferença na oitava posição. 
Importante destacar que, se a comparação fosse somente 
das 7 posições, o resultado sairia pela igualdade 
(linha 21 do programa).*/

/*
MATRIZ

Uma matriz é uma coleção homogênea bidimensional, 
cujos elementos são distribuídos em linhas e colunas. 
Para ter acesso aos elementos da matriz, devemos considerar 
ue se M é uma matriz m×n, então, podemos indexar suas linhas 
e 0 a m−1 e suas colunas de 0 a n−1. 
Portanto para acessar um elemento em particular de M, 
escrevemos M[i][j], onde i é o número da linha e j é 
o número da coluna que o elemento ocupa.

*ATENÇÃO*

Do ponto de vista técnico, a linguagem não suporta diretamente matrizes e, para criar uma matriz, devemos declarar um vetor cujos elementos são vetores, ou seja, vetores de vetores unidimensionais.
Em C a sintaxe para a declaração de uma matriz bidimensional é:

tipo nome_var [tamanho de i] [tamanho de j];

Onde: tipo declara o tipo de base da matriz, que é o tipo 
de cada elemento do vetor; nome_var é o nome pelo qual 
faremos referência à matriz; tamanho de i define quantos 
elementos a vetor i irá guardar e tamanho de j define 
quantos elementos o vetor j irá guardar.

Inicialização de Matriz
Vamos imaginar a seguinte situação:

Você deverá produzir um programa para mostrar as 4 maiores 
temperaturas do último trimestre.
Solução:

Vamos declarar a matriz que deverá CONTER a tabela com as 
seguintes características: Uma matriz com 3 linhas e 4 
colunas, chamada amostraTemperaturaTrimestral.

Abaixo temos a codificação do programa. Pedimos uma especial 
enção às linhas 5, 6, 7 e 8, pois são exatamente as linhas 
onde se localizam a especificação da matriz dimensional 
desejada, cujo nome para referência é amostraTemperaturaTrimestral, 
e que foi declarada para ter 3 colunas [3] e 4 linhas [4]. 
Observe também que, no mesmo comando, inicializamos a matriz 
com os dados desejadas (tabela de temperaturas). Para tal, 
abrimos chave { (linha 6), para conter o conjunto de vetores 
com as 4 temperaturas de cada mês. Na linha 8 fechamos 
chave }, onde termina a especificação da matriz.

Para acessar os dados da matriz, utilizamos dois índices, 
indice_i e indice_j, que apontam respectivamente para linha 
e coluna da matriz.

Para percorrer as linhas da matriz, declaramos o laço de 
repetição for na linha 11. Note que, na declaração deste laço, 
limitamos índice_i a 3, pois, conforme especificação, 
correspondem aos 3 últimos meses.

Para percorrer as colunas da matriz, declaramos o laço de 
repetição for na linha 15. Note que na declaração deste laço, 
limitamos índice_i a 4, pois, conforme especificação, 
correspondem aos 3 últimos meses. Observe também que tivemos 
a preocupação de identificar, de forma separada, cada mês de 
referência (linha 14); esta informação é obtida a partir do 
próprio índice(índice_i). Também identificamos a sequência 
de temperatura a partir do índice de coluna (índice_j).*/
/*
#include <stdio.h>
int main(void)
{
	//vetor para receber as notas digitadas
	float amotraTemperatutaTrimestral[3][4] =
	{ {25.4, 27.09, 28.90, 29.50},
	{21.8, 20.05, 22.90, 20.90},
	{18.8, 20.10, 17.70, 19.00} };
	printf("\n Exemplo de acesso a Matriz Bidimensional");
	printf("\n *--------------------------------------*");
	for(int indice_i = 0; indice_i < 3; indice_i++)
	{
		//laço repetição para contralar as 3 linhas da matriz
		printf("\n *----------Temperaturas do Mês : %d------*", indice_i + 1);
		for (int indice_j= 0; indice_j < 4; indice_j++)
		{
		//laço repetição para controlar as 4 colunas da matriz
		printf("\n Temperatura %d = %.2f", indice_j+1,
		amotraTemperatutaTrimestral[indice_i][indice_j]);
		}
	}
	return 0;
}
*/
/*
Fique Atento
Na declaração dos dois laços de repetição, foram iniciados seus 
respectivos índices com valor 0 (zero), pois a posição “0” do vetor 
corresponde à primeira posição. Exemplo amostraTemperaturaTrimestral 
[0][0] corresponde à primeira temperatura do primeiro mês 
(No nosso caso é o valor 25.4)*/
/*
INICIALIZAÇÃO DINÂMICA DE MATRIZ

Para inicializar de forma dinâmica uma matriz, 
é necessário que utilizemos dois laços de repetição: 
O laço externo controla as linhas, enquanto o laço interno 
controla as colunas. Demonstramos esta operação, tendo como 
base nosso último programa desenvolvido, com a seguinte 
adaptação: As temperaturas agora são digitadas 
(informadas pelo teclado). Observe o código abaixo e seus 
comentários logo em seguida:*/
/*
#include <stdio.h>
//variáveis GLOBAIS
//veor para receber as temperaturas digitadas
float amostraTemperatutaTrimestral[3][4];
void entradaTemperaturas()
{
	for (int indice1 = 0; indice1 < 3; indice1++)
	{
		for(int indice2 = 0; indice2 <4; indice2++)
		{
			printf("\n Informe a temperatura #%d para o MÊS #%d: ", indice2 + indice1, indice1 + 1);
			scanf("%f", &amostraTemperatutaTrimestral[indice1][indice2]);
		}
	}
}
int main(void)
{
	entradaTemperaturas();
	printf("\n Exemplo de acesso a Matriz Bidimensional");
	printf("\n *--------------------------------------*");
	for( int indice_i = 0; indice_i < 3; indice_i++)
	{
		printf("\n*-----Temperaturas do Mês: %d-----*", indice_i+1);
		//laço de repetição para solicitar 4 notas
		for (int indice_j = 0; indice_j < 4; indice_j++)
		{
			printf("\n Temperatura %d = %.2f", indice_j + 1,
			amostraTemperatutaTrimestral[indice_i][indice_j]);
		
		}
	}
return 0;
}
*/
/*
Comentários:

O programa possui uma função entradaTemperaturas() que solicita 
a entrada das quatro temperaturas. Note que esta função é o 
primeiro comando (linha 18) da função main().

Na função de entrada de temperatura temos dois laços de repetição:

O comando de repetição da linha 7 – Controla as linhas da matriz (de 1 a 3 meses)
O comando de repetição da linha 9 – Controla as colunas da matriz (de 1 a 4 temperaturas)
Depois que termina o ciclo de entrada de dados, o programa volta ao seu ciclo, na linha 19. 
Em seguida, na linha 21, temos o comando para controle do laço de repetição 
dos meses que contêm as temperaturas. Na linha 25, temos o controle do laço de 
repetição da impressão das quatro temperaturas.*/

/*
PONTEIROS

O correto entendimento do uso de ponteiros é muito crítico 
para que tenhamos sucesso em programação na linguagem C, 
pois a utilização de ponteiros aumenta a eficiência de certas rotinas, 
usam-se ponteiros em alocação de dinâmica de memória e finalmente, 
com o uso de ponteiros as funções podem modificar seus argumentos.

O Que São Ponteiros?
Um ponteiro é uma variável que contém uma referência a um endereço de memória. 
Este endereço é normalmente a posição de uma outra variável na memória.

Variáveis de Ponteiros
Para uma variável conter um ponteiro, esta deve ser declarada como tal, ou seja, tipo, o caráter * (asterisco) e o nome da variável:

tipo * nome;

Onde: tipo é qualquer tipo válido em C e nome é o nome da variável ponteiro. Exemplo: char *p;

O Operadores de Ponteiros
O C possui dois operadores especiais de ponteiros, representados pelos caracteres 
* e &. O operador & é um operador unário que devolve o endereço na memória de seu operando. 
Por exemplo: somaParcial = &soma; coloca na variável somaParcial o endereço da 
memória que contém a variável soma. A variável somaParcial não recebe o valor que 
contém a variável soma. Devemos entender esta operação da seguinte forma: 
somaParcial recebe o endereço de soma.

Por exemplo: Supondo que a variável soma utiliza a posição de memória 3003 para armazenar seu valor, 
por exemplo 4500. Logo, após a atribuição feita em nosso exemplo, 
somaParcial terá o valor 3003 (endereço de memória), e não 4500 (valor da variável).

Fique Atento
Se o tipo de um ponteiro p é diferente do tipo de uma variável v, 
então, o endereço de v não deve ser atribuído a p, ou seja, 
p e &v não são compatíveis de atribuição.
Temos, no código abaixo, um exemplo da utilização de ponteiros. 
Note que na linha 5 fazemos a declaração da variável ponteiro *somaParcial. 
Importante destacar que esta variável não contém o valor 50 (soma de 20+30). 
Ela contém o endereço de memória da variável soma (Esta sim contém o valor 50). 
Portanto, o comando printf da variável *somaParcial (linha 9) o 
resultado que está no endereço apontado pela variável soma.
*/
/*
#include <stdio.h>
int main(void)
{
	int soma = 20 + 30;
	int * somaParcial = &soma;
	printf("\n Teste de utilização de uso de Ponteiros");
	printf("\n *-------------------------------------*");
	printf("\n Valor da variável soma = %i", soma);
	printf("\n Valor da variável *somaParcial = %i", * somaParcial);
	return 0;
}*/
/*
RECURSÃO

Até o momento, tratamos de programas estruturados com funções 
que chamam funções de forma hierárquica, ou seja, uma função que é chamada, 
ao terminar, devolve o controle para a função que a chamou. 
Para muitos problemas, é útil ter as funções a chamar umas às outras. 
Uma função recursiva é uma função que chama a si mesma. A recursividade é um 
princípio que nos permite obter a solução de um problema a partir 
da solução de uma instância menor de si mesmo.

Toda recursividade é composta por um caso base e pelas chamadas recursivas, onde

Caso base: é o caso mais simples. É usada uma condição em que se resolve o problema com facilidade;
Chamadas Recursivas: procuram simplificar o problema de tal forma que convergem para o caso base.
Um exemplo prático é um cálculo matemático popular: O fatorial de um número n inteiro não negativo, 
escrito n! (e pronunciado com “n fatorial”), é o produto

n.(n-1).(n-2)…1

Com 1! Igual a 1 e 0! Definido como 1. Por exemplo, 5! É o produto

5 .4 .3 .2 .1=125

Lembrando que o fatorial de um número pode ser resolvido iterativamente 
(não recursivamente) pelo laço de repetição for, conforme demonstrado no quadro abaixo:

numero = 5;

fatorial = 1;

for (int contador = numero; contador > = 1; contador--)

fatorial *= contador;
Porém, nosso foco é demonstrar uma solução utilizando a recursividade. 
Portanto, chegaremos a uma definição recursiva da função fatorial observando o seguinte relacionamento:

n!=n.(n-1)!

Por exemplo: 5! É equivale à relação Como mostrado abaixo:

5!=5.4.3.2.1

5!=5.(4.3.2.1)

5!=5(4!)
Agora, acompanhe o código C que implementa lógica de recursividade:
*/
/*
//Cálculo de fatorial com função recursiva
#include <stdio.h>
//Função recursiva que calcula o fatorial
//de um número inteiro n
double fatorial(int entrada)
{
	double vfatorial;
	printf("\n Sequência de chamadas recursivas = %d", entrada);
	// Caso base: Fatorial de n <= 1 retorna 1
	if(entrada <= 1)
		return(1);
	else
	{
	//Chamada recursiva
		vfatorial = entrada * fatorial(entrada - 1);
		printf("\n Valores Retornados = %2.f", vfatorial);
		return(vfatorial);
	}
}
int main(void)
{
	int numero;
	double f;
	printf("\n Digite o número que deseja calcular o fatorial: ");
	scanf("%d", &numero);
	printf("\n Programa Cálculo de Fatorial");
	printf("\n *--------------------------*");
	//chamada da função fatorial
	f = fatorial(numero);
	printf("\n Fatorial de %d = %.0lf", numero, f);
	return 0;
}
Para ser útil, uma função recursiva deve ter um ponto de 
parada, ou seja, deve ser capaz de interromper as 
chamadas recursivas e executar em tempo finito.
Funções (também chamada de sub-rotinas) são blocos de 
códigos escritos na linguagem C. As funções são a alma da 
programação em C, pois é onde ocorrem todas as atividades do programa. 
Podemos afirmar que um programa em C é uma sequência de execução de funções.
*/
/*
DECLARAÇÃO DE FUNÇÕES

A forma geral da declaração de uma função é:

especificador_de_tipo nome_da_função (lista de parâmetros)

{

corpo da função

}
O especificador_de_tipo especifica o tipo de valor que o comando return da função devolve, 
sendo que deve ser qualquer tipo de dado válido em C. Se nenhum tipo for especificado, 
então o compilador assume que a função irá devolver um valor inteiro.

O nome_da-função deverá ser uma identificação válida para a linguagem C. 
A chamada da função se dará por este nome.

A lista de parâmetros é uma lista de variáveis, precedidas de seus respectivos tipos de dados. 
A função pode não ter parâmetros, neste caso a lista é 
declarada vazia com os símbolos () – abre e fecha parênteses.

Na Tabela 3 temos três exemplos de declaração de função. 
Observe a particularidade de cada declaração:

Tabela : Exemplos de utilização de função. 
Função	Breve descrição da função (Hipoteticamente)	retorno	Lista de Parâmetros	Particularidades

void mostraDados();	
Mostrar dados específicos em tela	
não	não	
1 - Lista de parâmetros de entrada vazia
2 - função não devolve nada ao final
3 - Emite somente comando return;

int mostraSomaValores 
(int valor1, int valor2);	
Faz a soma de dois valores inteiros informados	
O resultado da soma	
valor1 valor2	
1 - Necessita de dois valores de entrada
2 - Função devolve valor tipo int
3 - Ao final emite comando return valorx;

void atualizaSaldo (float valorSaldo);	
Atualiza o Saldo no BD	
não	
valorSaldo	
1 - Lista de parâmetros de entrada: 
1 valor tipo float
2 - função não devolve nada ao final
3 - Emite somente comando return;

Chamada por valor e por referência
O C aceita a passagem de argumentos entre funções de duas maneiras: Chamada por valor e chamada por referência.

A chamada por valor, a mais utilizada pelo C, 
copia um valor do argumento no parâmetro formal da sub-rotina. 
Já a chamada por referência, o endereço de um argumento é 
copiado no parâmetro.
Exemplificamos a passagem de parâmetros no código abaixo:*/
/*
#include<stdio.h>
int sqr(int entrada)
{
	entrada = entrada * entrada;
	return (entrada);
}
int main(void)
{
	int t = 4;
	printf("\n *Exemplo de função por REFERÊNCIA*");
	printf("\n *--------------------------------*");
	printf("\n %d %d", sqr(t), t);
	return 0;
}
*/
/*
Podemos observar que, neste código, o valor do argumento 
para a função sqr(), 4, é copiado no parâmetro entrada. 
Quando a atribuição entrada = entrada * entrada ocorre, 
apenas a variável local entrada é modificada. A variável t, 
usada para chamar a função, ainda tem o valor 4. 
*/

/*

Função com parâmetro do tipo matriz
Quando uma matriz é usada como argumento para uma função, 
apenas o endereço da matriz é passado, e não uma cópia da matriz inteira. 
A declaração de parâmetros deve ser de um tipo de ponteiro compatível.

Fique Atento
Um nome de matriz sem qualquer índice é um ponteiro para o primeiro elemento da matriz.
Existem três formas de se declarar um parâmetro que receberá um ponteiro para a matriz:

*Primeira Forma – Declarado como uma matriz
*/
/*
#include <stdio.h>
void imprimeValores(int valores[5])
{
	for(int controle = 0; controle < 5; controle++)
	{
		printf("\n Valor da ocorrência %d = %d ", controle, valores[controle]);
	}
}
int main(void)
{
	printf("\n *Exemplo parâmetro declarado como MATRIZ*");
	printf("\n*----------------------------------------*");
	int valoresOriginais [5] = {50, 40, 30, 20, 10};
	imprimeValores(valoresOriginais);
	return 0;
}*/

//Segunda Forma – Especificado como matriz sem dimensão
/*
#include <stdio.h>
void imprimeValores(int valores[])//MATRIZ SEM DIMENSÃO
{
	for (int controle = 0; controle < 5; controle++)
	{
		printf("\n Valor da ocorrência %d = %d ", controle, valores[controle]);
	}
}
int main(void)
{
	printf("\n *Exemplo parâmetro declarado como MATRIZ sem dimensão*");
	printf("\n *----------------------------------------------------*");
	int valoresOriginais[5] = {501, 401, 301, 201, 101};
	imprimeValores(valoresOriginais);
	return 0;
}*/

//Terceira Forma - Declarado como um ponteiro
/*
#include <stdio.h>
void imprimeValores(int * valores) //MATRIZ como ponteiro
{
	for (int controle = 0; controle <5; controle++)
	{
		printf("\n Valor da ocorrência %d = %d ", controle,valores[controle]);
	}
}
int main(void)
{
	printf("\n *Exemplo parâmetro declarado como PONTEIRO*");
	printf("\n *-----------------------------------------*");
	int valoresOriginais[5] = {511, 411, 311, 211, 111};
	imprimeValores(valoresOriginais);
	return 0;
}*/

/*
O comando return
O comando return possui duas importantes utilizações dentro de uma função:

Provoca uma saída imediata da função (termina a função);
Devolve um valor
Importante destacar que uma função pode conter mais de um comando return. 
Mas, ao executar qualquer deles, a execução desta função termina.

Todas as funções, exceto as do tipo void, devolve um valor e 
este valor é especificado explicitamente pelo comando return.

Saiba Mais
Geralmente, os compiladores C devolvem 0 (zero) 
quando nenhum valor de retorno é explicitamente especificado.

Funções do tipo void
Um dos usos do void é declarar, de forma explícita, 
funções que não devolvem valores. Isso é importante, 
pois dá a liberdade ao programador de codificar uma 
função que atua internamente, sem a necessidade de devolver um valor. 
Por exemplo: Imagine que você desenvolveu uma função somente para imprimir um aviso em tela. 
A função emite o aviso e não precisa devolver ao chamador algum dado manipulado em seu interior. 
Por exemplo:*/
/*
void imprimeValores(int * valores)
{
	for (int controle = 0; controle < 5; controle++)
	{
		printf("\n Valor da ocorrência %d = %d ", controle, valores[controle]);
	}
}*/

/*
A função main()
A função main() é a função que inicia um programa em linguagem C. 
Ela devolve um inteiro para o processo chamador: geralmente é o sistema operacional. 
Isso é equivalente à chamada da função exit() com o mesmo valor.

Ordenação e Busca
A ordenação é um processo de arranjar um conjunto de informações 
semelhantes numa ordem crescente ou decrescente. 
Isso ocorre, em especial, em uma lista ordenada i de n elementos. 
Nesta seção, trataremos de ordenação de dados em vetores, 
mas o mesmo princípio é aplicado em outros tipos de área de memória.

A despeito de muitos compiladores em C, já trazerem embutido função específica para ordenação, 
trata-se do qsort(), é muito importante que você aprenda o paradigma da ordenação, 
pois pode existir alguma estrutura que os algoritmos de classificação, 
então, consigam fazê-lo. Existem três tipos de ordenação:

Por troca
Por seleção
Por inserção
Ordenação por Troca
A ordenação por troca, cuja técnica é conhecida por “Ordenação Bolha”, 
e envolve repetidas comparações e, se necessário, a troca de dois elementos adjacentes. 
Este nome de “bolha” se dá porque os elementos se comportam como bolhas de sabão, 
em que cada uma procura o seu próprio nível em um tanque. 
A Figura 19 mostra o esquema desta técnica em um diagrama de blocos 
(utilizando o paradigma de laço de repetição for). Observe, na Figura 19, 
que existem dois laços de repetição, e admitamos que n é o tamanho do vetor 
“a” que deverá ser classificado. O primeiro laço (mais externo) 
está sendo controlado pela variável controle i. 
Já o segundo laço de repetição está sendo controlado pela variável de controle k. 
Note que i, irá de 0 (primeira posição do vetor) até n (tamanho do vetor). 
Já o controle k, inicia em n - 1, e que k representa as posições que serão comparadas com i.

O laço mais interno é o ponto que compara a posição [k-1] com cada posição que está à sua frente [k], e, 
se esta for maior (posição [k-1i] for maior posição [k]), 
então deverá ser feita a troca, pois o valor maior (posição [k-1]) 
deve trocar de lugar com a posição [k]. Neste caso, precisamos de uma 
variável auxiliar para salvar a posição [k-1], e colocar o valor da posição [k] em seu lugar. 
Depois, coloca-se o valor da variável auxiliar, na posição [k].

Abaixo, temos o código da implementação algoritmo de ordenação por troca:
*/
/*
#include <stdio.h>
int main(void)
{
	int vetor[5] = {76, 63, 46, 14, 02};//Vetor sem classificação
	int limite = 5;
	printf("\n *---------------------------------------*");
	printf("\n *Vetor original (Antes da classificação)*");
	printf("\n *---------------------------------------*");
	for (int w = 0; w < limite; w++)
	{
		printf("\n vetor[%d] = %d", w, vetor[w]);
	}
	//Aqui começa a classificação por TROCA
	for (int i =1; i < limite; i++)
	{
		 for (int k = limite - 1; k >= i; k--)
		{
			if (vetor[k - 1] > vetor[k])
			{
				int aux = vetor[k - 1];//Neste ponto efetuas-se a troca
				vetor[k - 1] = vetor[k]; //Neste ponto efetua-se a troca
				vetor[k] = aux;//Neste ponto efetua-se a troca
			}
		}
	}//Aqui termina a classificação por TROCA
	printf("\n !!!");
	printf("\n *------------------------------*");
	printf("\n *Vetor classificado por TROCA*");
	printf("\n*-------------------------------*");
	for (int z = 0; z < limite; z++)
	{
		printf("\n vetor[%d] = %d", z, vetor[z]);
	}
	return 0;
}
*/
/*

Ordenação por Seleção
A ordenação por seleção aplica a técnica de seleção do elemento 
de menor valor e troca-o pelo primeiro elemento. 
Então, para os elementos restantes, é encontrado o elemento de menor chave, 
trocando pelo segundo elemento, e assim sucessivamente. 
A troca continua até os dois últimos elementos.

Abaixo, temos o código em C que implementa este algoritmo:*/
/*
#include <stdio.h>
int main(void)
{
	int vetor[5] = {76, 63, 46, 14,02};
	int limite = 5;
	int exchange = 0;
	printf("\n *--------------------------------------*");
	printf("\n *Vetor original (Antes da classificação*");
	printf("\n *--------------------------------------*");
	for(int w = 0; w < limite; w++)
	{
		printf("\n vetor[%d] = %d", w, vetor[w]);
	}
	for (int i = 0; i < limite - 1; i++)//Aqui começa a classificação
	{
		exchange = 0;
		int c = i;
		int aux = vetor[1];
		for (int j = i + 1; j < limite; j++)
		{
			if (vetor[j] < aux)
			{
				c = j;
				aux = vetor[j];
				exchange = 1;
			}
		}
		if (exchange)
		{
		vetor[c] = vetor[i];
		vetor[i] = aux;
		}	
	}

	printf("\n!!!");//printf
	printf("\n *-------------------------------*");
	printf("\n * Vetor classificado por Seleção*");
	printf("\n *-------------------------------*");
	for (int z = 0; z < limite; z++)
	{
	printf("\n vetor[%d] = %d", z, vetor[z]);
	}
	return 0;
}*/
/*
Como na ordenação bolha, o laço mais externo é executado vezes 
e o laço interno vezes. Como resultado, a ordenação por seleção requer comparações, 
fato que torna este tipo de ordenação muito lenta para um número elevado de itens.
*/
/*
Ordenação por Inserção
Inicialmente, esta ordena os dois primeiros membros do vetor. 
Em seguida, o algoritmo insere o terceiro membro de sua 
posição ordenada com relação aos dois primeiros membros. 
Então, insere o quarto elemento na lista dos três elementos. 
O processo continua até que todos os elementos tenham sido 
ordenados. 
Analogamente, este método de ordenação equivale à forma como 
as pessoas ordenam cartas de baralho. Inicialmente, 
com a mão esquerda vazia e as cartas viradas com a face para baixo na mesa. 
Em seguida, removeremos uma carta de cada vez da mesa, 
inserindo-a na posição correta na mão esquerda. 
Para encontrar a posição correta de uma carta, 
vamos compará-la a cada uma das cartas que já estão na mão, 
da direita para a esquerda.

Abaixo temos o código C que implementa o algoritmo da ordenação por inserção:*/
/*
#include <stdio.h>
int main(void)
{
	int vetor[5] = {76, 63, 46, 14, 2};
	int limite = 5;
	printf("\n *----------------------------------------*");
	printf("\n * Vetor Original (Antes da classificação)*");
	printf("\n *----------------------------------------*");
	int j = 0;
	int i = 0;
	for (int w = 0; w < limite; w++)
	{
		printf("\n vetor[%d] = %d", w, vetor[w]);
	}
	//Aqui começa a ordenação por INSERÇÃO
	for (i = 1; i < limite; i++)
	{
		int aux = vetor[i];
		for (j = i - 1; j >= 0; aux < vetor[j], j--)
		{
			vetor[j + 1] = vetor[j];
		}
		vetor[j + 1] = aux;
	}//fim da ordenação por inserção
	printf("\n!!!");
	printf("\n *---------------------------------*");
	printf("\n * Vetor Classificado por INSERÇÃO *");
	printf("\n *---------------------------------*");
	for (int z = 0; z < limite; z++)
	{
		printf("\n vetor[%d] = %d", z, vetor[z]);
	}
	return 0;

}*/
/*
Ao contrário da ordenação bolha e da ordenação por inserção, 
o número de comparações que ocorrem durante a ordenação por 
inserção depende de como a lista está inicialmente ordenada. 
Se a lista estiver em ordem, o número de comparações será 
n - 1. Se estiver fora de ordem, o número de comparações 
será 1/2(n2 + n).
*/

/*

QUICKSORT

A Quicksort é superior a todas as outras ordenações que 
abordamos e é considerada o melhor algoritmo de ordenação 
de propósito geral. É baseada no método de ordenação 
por trocas e na ideia de partições.

O procedimento é selecionar um valor, chamado de comparando e, 
então, fazer a partição do vetor em duas seções, com todos os 
elementos maiores ou iguais ao valor da partição de um lado 
e os menores do outro. Este processo é repetido para cada seção restante, 
até que o vetor esteja ordenado.

Abaixo, temos o código C que implementa o algoritmo da Quicksort:
*/
/*
#include <stdio.h>
int vetor[5] = {76, 63, 46, 14, 02};
int limite = 5;
void qs(int *vetor, int left, int right)
{ //Início da função "qs"
	int i, j;
	int x, y;
	i = left; j = right;
	x = vetor[(left + right) / 2];
	do
	{
		while(vetor[i] < x, i < right) i++;
		while(x < vetor[j], j > left) j--;
		if (i <= j)
		{
			y = vetor[1];
			vetor[i] = vetor[j];
			vetor[j] = y;
			i++; j--;
		}
	}while (i <= j);
	if(left < j) qs(vetor, left,j);
	if(i < right) qs(vetor, i, right);
}//FIM DA FUNÇÃO "qs"
//---------------------------------------------
void quick(int * vetor, int count)
{ //Início da função 'quick'
	printf("\n*----------------------------------------*");
	printf("\n* Vetor Original (Antes da Classificação *");
	printf("\n*----------------------------------------*");
	for (int z = 0; z <= limite; z++)
	{
		printf("\n vetor[%d] = %d", z, vetor[z]);
	}
	qs(vetor, 0, count - 1); //chama a função "qs"
}//FIM da função "quick"
//-------------------------------------------------
//inicio do programa (main)
//-------------------------------------------------
int main(void)
{
	quick(vetor, 5); //Chama a função que inicia a ordenação(quick)
	printf("\n!!!");printf("\n!!!");printf("\n!!!");printf("\n!!!");
	printf("\n *---------------------------------------------*");
	printf("\n * Vetor Classificado QUISKSORT *");
	printf("\n *---------------------------------------------*");
	for (int z = 0; z < limite; z++)
	{
		printf("\n vetor[%d] = %d", z, vetor[z]);
	}
	return 0;
}*/
/*
Nessa versão, a função quick() executa a chamada à função 
de ordenação principal qs(). Isso permite manter a 
interface comum com vetor e limite. Isso dá um número 
médio de comparações de.
*/
/*
MÉTODOS DE PESQUISA

Encontrar informações em um vetor desordenado requer uma pesquisa, 
começando no primeiro elemento do vetor. Essa busca termina quando o
elemento for encontrado ou chegar o final do vetor. 
Isso ocorre quando temos dados desordenados. Porém, quando temos 
um vetor já ordenado (você pode utilizar uma das técnicas que já estudamos para ordenação), 
temos um método de busca chamado pesquisa binária.

A pesquisa binária utiliza o método “dividir para conquistar”. 
Por esse método, primeiro encontramos o elemento central. 
Se este elemento for maior que a chave procurada, 
ele testa o elemento central da primeira metade; caso contrário, 
ele testa o elemento central da segunda metade. Esse procedimento 
é repetido até que o elemento seja encontrado ou que não haja mais 
elementos a testar (neste último caso, 
conclui-se que o elemento não foi encontrado).

Abaixo, temos o código C que implementa o algoritmo de pesquisa binária:*/
/*
#include <stdio.h>
#include<stdbool.h>
int vetor[5] = {02, 14, 46, 63, 77};
int limite = 5;
bool buscaBinaria(int *vetor, int limite, int chave)
{
	int low, high, mid;
	low = 0; high = limite - 1;
	while(low <= high)
	{
	mid = (low + high)/2;
	if(chave < vetor[mid]) high = mid - 1;
	else if(chave > vetor[mid]) low = mid + 1;
	else return true;
	}//FIM DO LAÇO DE REPETIÇÃO
	return false;
}
//---------------------------------------
// Início do Programa
//---------------------------------------
int main(void)
{
	int elemento;
	printf("\n Informe o número ");
	scanf("%d", &elemento);
	if (buscaBinaria(vetor, limite, elemento))
	{
		printf("\n O elemento %d foi encontrado no vetor", elemento);
	}
	else
	{
		printf("\n O elemento %d NÃO foi encontrado no vetor", elemento);
	}
	return 0;
}
*/
/*

USO DE ARQUIVOS DE TEXTO
A linguagem C não possui nenhum comando específico de entrada e saída(E/S). 
Todas as operações de E/S ocorrem mediante chamadas das funções da biblioteca C padrão. 
Isso proporciona que dados possam ser transferidos na sua representação binária interna 
ou em formato de texto legível por humanos.

ARQUIVOS

Em C, um arquivo pode ser qualquer dispositivo, por exemplo, 
arquivo em disco, impressora, ou um terminal. Um stream de 
dados é associado com arquivo específico a partir de sua abertura. 
Uma vez que o arquivo tenha sido aberto, as informações podem 
ser trocadas entre este e o seu programa. Para desassociar este 
arquivo a um stream de dados específico, usa-se uma operação de fechamento.

Cada stream associado a um arquivo tem uma estrutura de 
controle de arquivo do tipo FILE. 
Esta estrutura é definida no cabeçalho STDIO.H.

O sistema de arquivos em C é composto por diversas funções, 
conforme demonstrado na Tabela 4.

Função				Objetivo
fopen()			Abre um arquivo
fclose()		Fecha um arquivo
putc()			Escreve um caractere em um arquivo
getc()			Lê um caractere de um arquivo
fssek()			Posiona o arquivo em um byte específico
fprintf()		Imprime no arquivo conjunto de caracteres
fscanf()		Transfere caractere do arquivo para o programa
feof()			Indicar fim de arquivo atingido (volta verdadeiro)
ferror()		Indica erro na operação do arquivo (volta verdadeiro)
rewind()		Recoloca o indicador de posição de arquivo no início do arquivo
remove()		Apaga um arquivo
fflush()		Descarrega um arquivo

Todos os arquivos abertos em um programa são fechados automaticamente 
quando este termina normalmente, com main() retornando ao sistema 
operacional código de retorno 0 (zero), ou com a chamada da função exit().
Os arquivos não são fechados quando um programa 
quebras(crash) ou quando chama a função abort().

ABRINDO ARQUIVOS

A função fopen() abre uma stream para uso e associa a um arquivo. Ela retorna um ponteiro de arquivo associado a este arquivo. Esta função tem a seguinte estrutura:

FILE *fopen(const char* nomearq, const char* modo );

Onde:

nomearq = É um ponteiro para uma cadeia de caracteres que forma um nome 
válido de arquivo e pode incluir especificação de caminho (path)
modo = Indica como este arquivo será aberto 
(conforme possibilidade indicada na Tabela 5)

Modo		Significado
R		Abre um arquivo texto para leitura
W		Cria um arquivo texto para escrita
A		Anexa a um arquivo texto
Rb		Abre um arquivo binário para leitura
wb		Cria um arquivo binário para escrita
Ab		Anexa a um arquivo binário
r+		Abre um arquivo texto para leitura/escrita
w+		Cria um arquivo texto para a leitura /escrita
a+		Anexa ou cria um arquivo texto para leitura/escrita
r+b		Abre um arquivo binário para leitura/escrita
w+b		Cria um arquivo binário para leitura/escrita
a+b		Anexa a um arquivo binário para leitura / escrita

FECHANDO UM ARQUIVO

A função fclose() fecha uma stream que foi aberta por meio de uma chamada fopen(). 
Esta função ainda escreve dados que ainda estejam no buffer de disco no arquivo, 
e somente a partir daí fecha o arquivo efetivamente. A sintaxe deste comando é: 
fclcose(nome_do_arquivo). Um valor de retorno zeros significa que o arquivo 
foi fechado normalmente. Qualquer outro valor, significa erro.

Temos, no código abaixo, um exemplo de manipulação de arquivo, 
em que criamos um arquivo de nome “arquivo.txt”. 
Abrimos o arquivo com a posição de gravação “w” e gravamos no diretório “desktop”, 
conforme caminho que consta na linha 8 do programa. Gravamos neste arquivo quatro linhas, 
cujo conteúdo é uma string (texto). Note que, ao final de cada string, 
utilizamos o caractere que indica salto de linha “\n”. Por fim, na linha 14, 
fechamos o arquivo com o comando fclose().
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// criando a variável ponteiro para o arquivo
	FILE * file;
	//abrindo o arquivo
	file = fopen ("/home/ruan/Documentos/documentos-pessoais/arquivo.txt", "w");
	fprintf(file, "Esta é a linha 1 do arquivo \n");
	fprintf(file, "Esta é a linha 2 do arquivo \n");
	fprintf(file, "Esta é a linha 3 do arquivo \n");
	fprintf(file, "Esta é a linha 4 do arquivo \n");
	fprintf(file, "Esta á a linha n do arquivo \n");
	//fechando arquivo
	fclose(file);
	//mensagem para o usuário
	printf("O arquivo foi criado com sucesso!");
	return (0);
}*/
/*
Considerações Finais
Caro estudante, nesta unidade, estudamos juntos tópicos avançados na programação de computadores, 
em que você foi elevado a um nível de programação. Aprendemos a tratar vetores unidimensionais, 
bem como vetores bidimensionais (matrizes), que é um ponto muito importante em qualquer linguagem de programação, 
pois permite ao programador solucionar os problemas computacionais com melhor aproveitamento das técnicas de programação. 
E em muitas necessidades de negócio, esta técnica é aplicada.

Ao desenvolver as soluções para tratamento de vetores, 
aplicamos os paradigmas estudados em unidades anteriores, 
qual seja, a utilização de lógica de laços de repetição. E neste aspecto, 
praticamos fortemente soluções com uso de laços de repetição for e while e do-while. 
Portanto, este tópico sobre vetores e matrizes nos fortaleceu muito nos 
amadurecimentos de conceitos e práticas da programação de computadores.

Outro tópico estudado nesta unidade foi a utilização de ponteiros, que, na linguagem C, 
é de fundamental importância, pois o domínio da utilização da técnica do uso de ponteiros 
aumenta a eficiência da performance do programa, 
bem como a correta utilização em alocação dinâmica de memória.

Aprendemos a tratar os paradigmas de ordenação de dados em memória (vetores), 
em que mostramos os modelos de ordenação mais utilizados, como a ordenação por troca 
(ordenação bolha), a ordenação por seleção e a ordenação por inserção. 
Aprendemos também a encontrar informações em um vetor, seja ele ordenado ou desordenado, 
respectivamente com os métodos de busca sequencial e busca binária.

Por fim, você aprendeu a manipular arquivos na linguagem C, 
pois este é um tópico muito importante no desenvolvimento de 
todos os programadores de qualquer linguagem de programação.

Parabéns por ter completado um ciclo muito importante no aprendizado de um profissional 
de tecnologia da informação. Pois, mesmo que você não busque se desenvolver na 
programação de computadores, o conhecimento da lógica de programação se faz muito 
importante para o seu desenvolvimento em outras áreas da tecnologia da informação. 
Desejo muito sucesso em sua trajetória com o uso dos conceitos da lógica de programação!
