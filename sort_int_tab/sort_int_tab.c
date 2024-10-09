void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j;
    	int tmp;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
                		tmp = tab[i];
                		tab[i] = tab[j];
                		tab[j] = tmp;
            		}
			j++; 
		}
		i++; 
	}
}
/*
int main()
{
	int arr[] = {7, 1, 3, 2, 5};
    	unsigned int size = 4; 
    	sort_int_tab(arr, size);
    	unsigned int i = 0;
    
    	while (i < size)
    	{
        	printf("%d\n", arr[i]);
		i++;
    	}
    	return 0;
}
*/
