#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	
	
	//CRIANDO UM JOGO DE FORCA COM COMANDOS BÁSICOS.
	//PRIMEIRO DECLARAR AS VARIÁVEIS QUE IREMOS UTILIZAR.
	
	//"Char palavra" é onde vai ser preenchido a palavra
	//Letra é a quantidade de letras que o jogador vai poder tentar por vezes, no caso é só 1 vez, se errar, vai perder uma chance.
	//secreta vai contar a palavra sendo desvendada pelo jogador, exemplo: jogador apertou uma letra "x", se a palavra conter essa letra, teremos de incluir ela no secreta.
	
	
	char palavra [30],letra[1], secreta[30];
	
	
	//A variável int será para trabalharmos com o tamanho.	
	//A variável chances demonstrando quantas vezes ainda restam para o usuário.
	//Expondo ao jogador se ele acertou.
	//Variável "bool" serve para verificar se o jogador incluiu a letra certa. Ele vai analisar a palavra original e comparar. Se houver acerto,
	//a letra estara em true, se ele análisar toda as letras da palavra e continuar em false... O jogador não acertou a letra.
	
	
	int tam,i,chances,acertos;
	bool acerto;
	i=0;
	
	
	//Logo abaixo teremos a quantidade de chances que daremos ao jogador para acertar a letra.
	//O tamaho inicializaremos com o tamanho 0, obviamente.
	//Índice também inicializaremos com o 0.
	//Acerto iremos iniciar com o false.
	//Acertos em 0 também, pois o jogador começará sem nenhum acerto.
	
	chances=6;
	tam=0;
	acerto=false;
	acertos=0;
	
	//Resumo de primeiros passos: Declaração de variáveis, logo após incluímos e iniciamos as mesmas.
	//No passo a seguir iremos coletar a palavra secreta.
	
	
	cout << "Digite a palavra a ser descoberta:";
	cin >> palavra;
	
	
	//O comando cls foi incluso nessa parte do game, para que ele colha a palavra que será descoberta pelo jogador e logo em seguida limpe a tela.
	
	
	system ("cls");
	
	
		//O comando while (tradução 'enquanto') para percorrer o vetor palavra e obter o tamanho do vetor.
	
	while (palavra [i] != '\0'){
		
	i++;
	tam++;
	}
	
		for(i=0;i<30;i++){
		secreta[i]='-';     
	}

	//Logo acima preenchemos o vetor lacuna com traços, auxiliando o jogador na quantidade de letras que a palavra tem.
	
	while((chances > 0) && (acertos < tam)){
		cout << "Chances restantes:" << chances << "\r\n";
		cout<< "Palavra secreta:";
		
		for(i=0; i<tam; i++){
			cout << secreta [i];
		}
		
		cout << "\r\n Digite uma letra:";
		cin >> letra [0];
		
		for(i=0; i<tam; i++)
		if(palavra [i]==letra[0]){
			acerto=true;
			secreta [i]=palavra [i];
			acertos++;
			
		}
		if(acerto==false){
			chances--;
		}
		acerto=false;
		system("cls");	
	}
	
	if(acertos==tam){
	cout<<"Voce venceu";
	}else{
	cout<< "Vc perdeu";
	}
	
	
	
	
	
	 
	
	//Esse segundo while indica condições, ex: Enquanto chances for 3, o jogador pode prosseguir com o jogo. Se essas chances chegam a 0
	//o jogo se encerra, indicando ao jogador que ele perdeu o game. Outra condição é: Enquanto o tamanho da palavra for menor do que acertos o game continuará em looping.
	//logo após iniciamos com a impressao na tela
	
	
	
	
	
	
}
