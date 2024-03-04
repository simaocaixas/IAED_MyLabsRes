//Exercicio 1 - Avaliar a complexidade da função search com notação big O;
int search(int a[], int n, int elem) {    //  n = nº de elementos no vetor a, elem é o valor a procurar;
  int left = 0, right = n-1;               

  while (left <= right) {                 // Enquanto o intervalo de busca existir:
    int med = (left + right) / 2;         // Calcula o índice médio do intervalo
    if (a[med] == elem)                  
      return med;   
    else if (a[med] < elem)             
      left = med+1;                       // Atualiza o limite esquerdo para procurar na metade direita do intervalo
    else
      right = med-1;                      // Atualiza o limite direito para procurar na metade esquerda do intervalo
  }
  return -1;
}                                       

/*
R: O tamanho do intervalo onde estamos a procurar o elemento é constantemente reduzido a metade logo 
podemos considerar um algoritmo de busca binario de compelexidade O(LogN), onde N é o n de elementos 
do nosso vetor.
*/ 

------------------------------------------------------------------------------------------------------------------------------
//Exercicio 2 - Avaliar a complexidade da função com notação big O, no melhor e pior caso;
  
int funcao (int a[], int n) {        
  int i, sum = 0;                  

  for (i = 0; i < n/2; i++)         // Itera n/2 vezes o vetor, ou seja se a = [1,2,3,4,5,6] itera 3 vezes
    sum += a[i] + a[n-i-1];         // sum = sum + 1 + 6 depois sum = sum + 2 + 5 depois sum = sum + 3 + 4 ...
  return sum;                       
}

/*
R: No melhor caso e no pior caso a funcao tem a mesma complexidade, ou seja itera N/2 vezes o vetor, logo 
o crescimento da complexidade é constante: O(N).
*/ 

------------------------------------------------------------------------------------------------------------------------------
//Exercicio 3 - Avaliar a complexidade da função com notação big O;

int funcao (int a[], int n, int b[], int m) {        // n e m são os tamanhos de a e b, respetivamente
  int i = n-1, j, count = 0;                     
  while (i > 0) {
    for (j = 0; j < m; j++) {                        // Iteramamos o vetor b m vezes logo complexidade linear O(M);
      if (a[i] == b[j])
        count++;
    }
    i = i/2;                                         // O vetor a é iterado n/2 vezes, busca binaria logo complexidade O(LogN);
  }
  return count;
}

/*
R: No pior obtemos a complexidade O(LogN)*O(M);
*/ 

------------------------------------------------------------------------------------------------------------------------------
//Exercicio 4 - Avaliar a complexidade da função com notação big O;

int funcao (int a[], int n, int b[], int m) {      // n e m são os tamanhos de a e b, respetivamente
  int i = n-1, j, count = 0;                     
  while (i > 0) {
    for (j = 0; j < m; j++) {                      // Iteramamos o vetor b m vezes logo complexidade linear O(M);
      if (a[i] == b[j])
        count++;
    }
    i = i/2;                                       // O vetor a é iterado n/2 vezes, busca binaria logo complexidade O(LogN);
  }
  return count;
}

/*
R: No pior obtemos a complexidade O(LogN)*O(M);
*/ 

------------------------------------------------------------------------------------------------------------------------------
//Exercicio 5 - Avaliar a complexidade da função com notação big O;

int funcao (int n, int m) {                      
  int i = 0, count = 0;
  while (i < n*n) {                               // loop ocorre n² vezes, O(N²)
    if (i % m == 0)                               // (i % m == 0) tem uma complexidade constante visto que é uma mera comparação
      count++;
    i++;
  }
  return count;
}

/*
R: No pior obtemos a complexidade O(N²)
*/ 

