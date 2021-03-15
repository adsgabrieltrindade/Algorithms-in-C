#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 8								//Constante que indica o tamanho da pilha;

typedef int informacao;

typedef struct PILHA{
	informacao dado[N];  				//Define o tipo do dado que ser� armazenado;
	informacao topo;					//Serve para indicar o dado do topo da pilha;
}PILHA;

void inicializarPilha(PILHA *p){		//Procedimento respons�vel por atribuir o valor 0 (zero) para todas as	
	for(int i=0; i<N; i++)				//posi��es da pilha, dependo da constante N;
		p->dado[i] = 0;
	p->topo = p->dado[0];				//Indica em qual lugar o topo deve est� na logo que inicializado;
}

int inserirPilha(int dadoPassado, PILHA *p){
	informacao cod_retorno;
	if(p->topo == N){						//Verifica-se se a pilha est� cheia;
		cod_retorno = -1;
	}else{
		p->dado[p->topo] = dadoPassado;		//� atribuito na posi��o indicada pelo topo o dado passado como par�metro; 
		p->topo++;							//� incrementado +1 a vari�vel topo, a fim de indicar o novo �ndice na qual o um novo 
		cod_retorno = 0; 					//dado pode ser inserido;	
	}		
	return cod_retorno;	
}

int removerPilha(PILHA *p){
	informacao cod_retorno;
	if(p->topo == 0){						//Verifica-se se a pilha est� vazia, v�lido quando o topo estiver com o valor 0 (zero);
		cod_retorno = -1;
	}else{
		p->topo--;							//A decrementa��o de -1 indica o �ndice na qual h� o �ltimo dado inserido - topo;
		cod_retorno = p->dado[p->topo];		//O c�digo de retorno ser� o pr�prio n�mero desempilhado nessa situa��a;
		p->dado[p->topo] = 0;				//Coloca valor 0 (zero) no lugar do n�mero que foi removido, a fim de saber, posteriormente,
											//a quantidade de possi��es livres ainda dispon�veis;			
	}
	return cod_retorno;
}

void topoPilha(PILHA *p){
	if(p->topo == 0)						//Verifica se o tipo est� vazio;
		printf("\nPilha vazia!\n");
	else
		//A decrementa��o de -1 indica o �ndice na qual h� o �ltimo dado inserido - topo;
		printf("\nO topo da pilha cont�m o valor %d.\n", p->dado[(p->topo) - 1]); 
}

void verificarPilha(PILHA *p){
	if(p->topo == 0)
		printf("\nSitua��o: pilha se encontra vazia!\n");
	else{
		if(p->topo == N)
			printf("\nSitua��o: pilha se encontra cheia!\n");
		else{
			int poss=0;
			for(int i=0; i<N; i++){
				if(p->dado[i] == 0)
	        		poss++;	
	    	}	
			printf("\nSitua��o: a pilha se encontra ainda com %d posi��es livres!\n", poss);	
		}		
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int codigo, op, valor;
	PILHA p1;
	
	inicializarPilha(&p1);
	do{
	  	system("cls"); 				
	  	printf("\t\t\t\tMENU - PILHA EST�TICA (VETOR COM %d POSI��ES)\n\n", N);
	  	printf("\n1 - Empilhar;");
	  	printf("\n2 - Desempilhar;");
	  	printf("\n3 - Mostrar topo da pilha;");
	  	printf("\n4 - Verificar situa��o da pilha;");
	  	printf("\n5 - Sair do programa.");
	  	printf("\n\n  Digite a op��o desejada => ");
	  	scanf("%d", &op);
	  	
	  	switch (op){
	  		case 5: 
	  			break;
	  		case 1: 
	  			printf("\nDigite um valor inteiro a ser inserido na estrutura diferenta de 0 (zero): ");
	  			scanf("%d", &valor);
	  			if(valor == 0)					//Verifica se o valor digitado � zero;
	  				printf("\nValor inv�lido! Por favor, insira um valor diferente de 0 (zero).\n");
	  			else{
	  				codigo = inserirPilha(valor, &p1);
	  				//Dependendo do retorno da fun��o de inserirPilha(), � informado se foi ou n�o poss�vel empilhar o valor;
	  				if(codigo == 0) 		
	  					printf("\nValor %d empilhado com sucesso!\n", valor);
	  				else
	  					printf("\nPilha cheia!\n");
				}	
				break;
					
			case 2: 
				codigo = removerPilha(&p1);
				//Dependendo do retorno da fun��o de removerPilha(), � informado se foi ou n�o poss�vel desempilhar o valor;
				if(codigo != -1)
					printf("\nValor %d foi desempilhado com sucesso!\n", codigo);
				else
					printf("\nPilha vazia!\n");
				break;	
			
			case 3:	
				topoPilha(&p1);
				break;
				
			case 4:
				verificarPilha(&p1);
				break;
			
			default:
				printf("\nOp��o inv�lida! Por favor, digite uma op��o v�lida.\n");
		  }
	  	
		printf("\n");
	  	system("pause");
	  }while(op != 5);
	
	return 0;
}
