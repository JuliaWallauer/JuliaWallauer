#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	
	
	//CRIANDO UM JOGO DE FORCA COM COMANDOS B�SICOS.
	//PRIMEIRO DECLARAR AS VARI�VEIS QUE IREMOS UTILIZAR.
	
	//"Char palavra" � onde vai ser preenchido a palavra
	//Letra � a quantidade de letras que o jogador vai poder tentar por vezes, no caso � s� 1 vez, se errar, vai perder uma chance.
	//secreta vai contar a palavra sendo desvendada pelo jogador, exemplo: jogador apertou uma letra "x", se a palavra conter essa letra, teremos de incluir ela no secreta.
	
	
	char palavra [30],letra[1], secreta[30];
	
	
	//A vari�vel int ser� para trabalharmos com o tamanho.	
	//A vari�vel chances demonstrando quantas vezes ainda restam para o usu�rio.
	//Expondo ao jogador se ele acertou.
	//Vari�vel "bool" serve para verificar se o jogador incluiu a letra certa. Ele vai analisar a palavra original e comparar. Se houver acerto,
	//a letra estara em true, se ele an�lisar toda as letras da palavra e continuar em false... O jogador n�o acertou a letra.
	
	
	int tam,i,chances,acertos;
	bool acerto;
	i=0;
	
	
	//Logo abaixo teremos a quantidade de chances que daremos ao jogador para acertar a letra.
	//O tamaho inicializaremos com o tamanho 0, obviamente.
	//�ndice tamb�m inicializaremos com o 0.
	//Acerto iremos iniciar com o false.
	//Acertos em 0 tamb�m, pois o jogador come�ar� sem nenhum acerto.
	
	chances=6;
	tam=0;
	acerto=false;
	acertos=0;
	
	//Resumo de primeiros passos: Declara��o de vari�veis, logo ap�s inclu�mos e iniciamos as mesmas.
	//No passo a seguir iremos coletar a palavra secreta.
	
	
	cout << "Digite a palavra a ser descoberta:";
	cin >> palavra;
	
	
	//O comando cls foi incluso nessa parte do game, para que ele colha a palavra que ser� descoberta pelo jogador e logo em seguida limpe a tela.
	
	
	system ("cls");
	
	
		//O comando while (tradu��o 'enquanto') para percorrer o vetor palavra e obter o tamanho do vetor.
	
	while (palavra [i] != '\0'){
		
	i++;
	tam++;
	}
	
		for(i=0;i<30;i++){
		secreta[i]='-';     
	}

	//Logo acima preenchemos o vetor lacuna com tra�os, auxiliando o jogador na quantidade de letras que a palavra tem.
	
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
	
	
	
	
	
	 
	
	//Esse segundo while indica condi��es, ex: Enquanto chances for 3, o jogador pode prosseguir com o jogo. Se essas chances chegam a 0
	//o jogo se encerra, indicando ao jogador que ele perdeu o game. Outra condi��o �: Enquanto o tamanho da palavra for menor do que acertos o game continuar� em looping.
	//logo ap�s iniciamos com a impressao na tela
	
	
	
	
	
	
}
