  #include <stdio.h>
  
  
  void brtt(int *v, int n) {
  	int i;
  	for (i=0; i<n; i++)
  		scanf("%d", &v[i]); 		
  }
  
  void eoq(int *v, int n) {
  	int i;
  	if (n==0){
  		printf("Voce precisa criar o vetor primeiro\n");
  	} else{ 
  		for (i=0; i<n; i++)
  		printf("Elemento %d: %d\n", i, v[i]);
  	}
  }
  void rx(int *v, int n) {
  	int i, j, menor, aux;
  	if (n==0){
  		printf("Voce precisa criar o vetor primeiro\n");
  		
  	} else { 
  		for (i=0; i<n-1; i++) {
  			menor=i;
  			for (j=i+1; j<n; j++) {
  				if (v[j]<v[menor])
  					menor=j;
  					
  			
  		}
  		
  		aux=v[i];
  		v[i]=v[menor];
  		v[menor]=aux;
  		
  		}
  			
  	
  	
  	}
  	}
  	
  	int keyd(int *v, int n, int x) {
  		int i;
  		if (n==0){
  			return -1;
  			
  		}else{
	  		for(i=0; i<n; i++) {
	  			if (v[i]==x)
	  				return i;
	  		}
	  		
	  		return -1;
  		
  		}
  }
  
  int main (void) {
  
  		int n = 0;
  		int x = 0;
  		int c = 0;
  		int v[1000000];
  		
  	
  		do {
  		
  		printf("Seja bem-vindo ao programa da INTZ\n");
        printf("Digite 1 para escrever um vetor, 2 para visualizar o vetor, 3 para ordenar, 4 para buscar um elemento do vetor e 5 para sair.\n");
        scanf("%d", &c);
        	
        switch(c) {
        		
        	case 1: 
        		printf("Digite a quantidade de elementos do vetor\n");
        		scanf("%d", &n);
        		brtt(v, n);
        		break;
        		
        	case 2:
        		eoq(v, n);
        		break;
        		
        	case 3: 
        		rx(v, n);
        		break;
        	
        	case 4:
   				printf("Digite o valor que deseja buscar\n");
   				scanf("%d", &x);
        		keyd(v, n, x);
        		printf("O indice do valor desejado e: %d\n", keyd(v, n, x));
        		break;
        		
        	case 5:
        		break;
        		
        	default: 
        		printf("Voce digitou um valor invalido\n");
        }
       
        
        
  	} while(c!=5);
  	
}
