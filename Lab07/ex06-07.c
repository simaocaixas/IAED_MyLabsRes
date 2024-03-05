/*
Exercício 6/7

Cosiderar a implementação clássica da função int partition (Item v[], int l, int r) usada no algoritmo quicksort.

int partition(Item a[], int l, int r) {
	int i = l-1;
	int j = r;
	Item v = a[r];
	while (i < j) {
		while (less(a[++i], v));
		while (less(v, a[--j]))
			if (j == l)
				break;
		if (i < j)
			exch(a[i], a[j]);
	}
	exch(a[i], a[r]);
	return i;
}

vetor inical = <13, 6, 5, 14, 12, 4, 16, 18, 7, 9, 10>

vetor após partition =  <9, 6, 5, 7, 4, 10, 16, 18, 14, 13, 12>
valor de retorno: 5 (index atual pivot (10))


vetor inical = <20, 11, 16, 9, 12, 14, 17, 19, 13, 15>
vetor após partition = <13, 11, 14, 9, 12, 15, 17, 19, 20, 16>
valor de retorno: 5 (index atual pivot (15))

*/
