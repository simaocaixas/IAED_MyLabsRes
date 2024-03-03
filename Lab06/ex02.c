int search(int a[], int n, int elem) {    // Avaliar a complexidade da função search com notação big O; n = numero de elementos no vetor a, elem é o valor a procurar em a, a tem os numeros ordenados!
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
O tamanho do intervalo onde estamos a procurar o elemento é constantemente reduzido a metade logo 
podemos considerar um algoritmo de busca binario de compelexidade O(LogN), onde N é o n de elementos 
do nosso vetor!
*/ 
