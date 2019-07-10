# C01

DELETE MAINS, CHECK FUNCTIONS, DEL COMPILED FILES

ex07 > check whether you need > or >= in the while loop

ex08 tijdelijk

#include <unistd.h>

void  ft_sort_int_tab(int *tab, int size)
{
  int index;
  int n;
  int c;
  
  index = 0;
  c = 0;
  n = (index + 1);
  while(size-- != 0)
  {
    if(tab[index] > tab[n])
    {
      c = tab[n];
      tab[n] = tab[index];
      tab[index] = c;
    }
    index++;
    n++;
  }
}

int main(void)
{
  int tab[] = {2, 1, 5, 0, 5, 8, 3};
  int size = 7;

  ft_sort_int_tab(tab, size);
  return 0;
}
