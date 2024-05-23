{
    int     i;
    int     j;
    int     *min_ptr;

    i = 0;
    while (i < size - 1)
    {
        min_ptr = &tab[i];
        j = i + 1;
        while (j < size)
        {
            if (tab[j] < *min_ptr)
                min_ptr = &tab[j];
            j++;
        }
        if (min_ptr != &tab[i])
            ft_swap(&tab[i], min_ptr);
        i++;
    }
}
