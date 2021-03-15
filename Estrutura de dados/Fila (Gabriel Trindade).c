#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 6				//Define o tamanho da fila;

typedef struct FILA{
  int dado[N];
  int fim;
}FILA;


void inicializarFIla(FILA *f){		//Essa fun��o permite que todos os dados em todos os �ndices estejam com o valor 0 (zero);
  for(int i=0; i<N; i++){
    f->dado[i] = 0;
  }
  f->fim = 0;						//Indica qual � a posi��o inicial para inserir um elemento na estrutura;
}

void inserirFila(int dado, FILA *f){
  if(f->fim == N){					//A verifica��o compara o valor de fim com o tamanho da fila para saber se est� cheia ou n�o;
    printf("\nFila cheia!\n");
  }else{
     if(f->dado[0] == 0){			//Nessa, a verifica��o permite inserir o dado quando a fila se encontra vazia;
      f->dado[0] = dado;
      f->fim++;
    }else{
      f->dado[f->fim] = dado;		//Caso contr�rio, o dado � inserido no dado na qual o valor da vari�vel fim foi atribu�do;
      f->fim++;
    }
    printf("\n Mensagem: n�mero %d inserido com sucesso!\n", dado);
  }

}

int removerFila(FILA *f){
  if(f->dado[0] == 0){				//A verifica��o permite saber se o primeiro elemento � zero e,
    printf("\nFila vazia!\n");		//com isso, concluir que a fila est� vazia;
    return -1;
  }else{
    int dado = f->dado[0], i=0;
    do{								//Esse loop permite movimentar os elementos da fila ao remover o primerio da fila;
        f->dado[i] = f->dado[i+1];	
        i++;
    }while(f->dado[i+1] != 0);
    f->fim--;
    f->dado[f->fim] = 0;
    return dado;
  }
}

void imprimirFila(FILA *f){
    if(f->dado[0] == 0){			//Verifica se o elemento do primeiro �ndice � igual a 0 (zero);
      printf("\nFila vazia!\n");
    }else{
      printf("\nSegue a fila:\t");
      for(int i=0; i<N; i++){		
      	//Operador ten�rio para a formata��o mais organizada na apresenta��o dos elementos da fila;
        i != (N-1) ? printf("%d\t", f->dado[i]) : printf("%d", f->dado[i]);		
      }
      printf("\nPosi��es:\t");
      for(int i=1; i<N+1; i++){			//A vari�vel i recebe 1 para a conatagem do usu�rio ser 1�, 2�, ..., n�;
      	//Operador ten�rio para a formata��o mais organizada na apresenta��o das posi��es dos elementos da fila;
      	i != N ? printf("%d�\t", i) : printf("%d�\n", i);
      }
      printf("\nObs.: O 0 (zero) indica que n�o h� um valor para aquela posi��o.\n\n");
    }
}

void verificarFila(FILA *f){
	int poss = 0;
	if(f->fim == N)		
		printf("\n Situa��o: fila cheia!\n");
	else{
		if(f->dado[0] == 0)
			printf("\n Situa��o: fila vazia!\n");
		else{	
			for(int i=0; i<N; i++){				//Esse loop permite saber quais espe�os est�o livres para poss�veis ocupa��es;
				if(f->dado[i] == 0)
        			poss++;		
			}
				printf("\n Situa��o: fila com %d posi��es livres! \n", poss);
		}
	}	
}

int buscarElemento(int dado, FILA *f){		//Busca sequencial para encontrar um determinado valor na fila;		
	for(int i=0; i<N; i++){
		if(f->dado[i] == dado){
			return i; 						//Retorna o �ndice do elemento quando � encontrado na fila;
		}
	}
	return -1;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
  FILA f1;
  inicializarFIla(&f1);
  int op, valor;
  do{
	  	system("cls");
	  	printf("\t\t\t\tMENU - FILA EST�TICA (VETOR COM %d POSI��ES)\n\n", N);
	  	printf("\n1 - Inserir item na fila;");
	  	printf("\n2 - Remover item da fila;");
	  	printf("\n3 - Mostrar fila;");
	  	printf("\n4 - Verificar situa��o da fila;");
	  	printf("\n5 - Buscar item na fila;");
	  	printf("\n6 - Sair do programa.");
	  	printf("\n\n  Digite a op��o desejada => ");
	  	scanf("%d", &op);
	  	
	  	switch(op){
	  		case 6:
	  			break;
	  			
	  		case 1:
	  			printf("\n\nDigite o n�mero que deseja inserir diferente de 0 (zero): ");
	  			scanf("%d", &valor);
	  			if(valor == 0)
				  printf("\nN�mero n�o permitido!\n");
				else{
					inserirFila(valor, &f1);
				}
	  			break;
	  			
	        case 2:
	        	valor = removerFila(&f1);
	        	if(valor != 0 && valor != -1)
	            	printf("\n Mensagem: n�mero %d removido com sucesso!\n\n", valor);
	            break;
	            
	        case 3:
	            imprimirFila(&f1);
	            break;
	            
	        case 4:
	            verificarFila(&f1);
	            break;    
	            
	        case 5:
	        	printf("\n\nDigite o n�mero que deseja buscar: ");
	  			scanf("%d", &valor);
	  			if(valor == 0)
				  printf("\nN�mero n�o permitido!\n");
				else{
					int possicao = buscarElemento(valor, &f1);
		            if(possicao == -1)
		            	printf("\nO n�mero %d n�o se encontra na fila!\n", valor);
					else
						printf("\nO n�mero %d se encontra na %d� posi��o da fila.\n", valor, possicao+1); //Relacionado com a linha 61 
				}
	            break;      
	            
	        default:
		        printf("\n Mensagem: op��o inv�lida! Por favor, digite uma op��o v�lida.\n\n");
		}
			  
		printf("\n");
	  	system("pause");
	  }while(op != 6);
  return 0;
}
