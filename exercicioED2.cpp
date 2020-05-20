#include<iostream>
#include<string>

using namespace std; 

//tenho o costume de deixar o main no inicio e ir criando as funções abaixo do main,
// mas o compilador online que utilizei não aceitava que chamasse uma função que não
//estivesse declarada antes. então tive que mexer na ordem das funções 
//Não lembro se é uma especifidade do C++ ou um problema com o compilador online.
//Caso o professor queira testar, utilizei  http://cpp.sh/.e o código está no github



//Essa é a função que troca os valores do vetor entre si
void troca(int *x, int *y) 
{ 
	
	int temp = *x; //variavel temporaria para recebendo o valor armazenado na memória em x
	*x = *y; //atribuindo o valor de y à x
	*y = temp; //atribuindo o valor de temp(que é o antigo valor de x) à y
} 


//Decidi fazer um bubblesort pq ele é o algoritmo de ordenação mais simples de
//se escrever. é basicamente um for dentro de for. Ela deve receber um vetor e também o seu tamanho
void bubbleSort(int vetor[], int tamanho) 
{ 
	int i, j; //variaveis criadas somente para ciclar os for
	for (i = 0; i < tamanho-1; i++)
	{
		for (j = 0; j < tamanho-i-1; j++)
		{
			if (vetor[j] > vetor[j+1]) troca(&vetor[j], &vetor[j+1]); 
			// verifica se o primeiro valor é maior, e caso seja, chama a função troca.
		}
	}
} 


//impressão do vetor para ficar mais facil a visualização
void mostrarVetor(int vetor[], int tamanho) 
{ 
	int i; 
	for (i = 0; i < tamanho; i++) cout << vetor[i] << " "; 
	cout << endl; 
} 


int main() 
{ 
	
	int vetor[] = {894, 34, 854, 234, 188, 687, 87}; //criando um vetor com valores aleatórios para serem ordenados
	int tamanho = sizeof(vetor)/sizeof(vetor[0]); //pegando o tamanho do vetor


    cout<<"Vetor desordenado: \n";
    mostrarVetor(vetor, tamanho);

	bubbleSort(vetor, tamanho); 

	cout<<"Vetor ordenado: \n"; 
	mostrarVetor(vetor, tamanho); 
	return 0; 
} 
