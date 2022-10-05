#include <cstdio>
#include <cstdlib>
#include <cstring>
/*************************************
 *nazwa funkcji: szyfrowanie()

 *parametry:
 * a) wprowadzane: programy
 * Parametr przechowuje wprowadzony ciag znakow, w tablica[]

 * b) zwracane: oypaygmr

 * Opis funckji: Funkcja Gaderypoluki zamienia litery w podanym ciagu znakow

 * Autor programu: Bartosz Dorosz
 *************************************/
void szyfrowanie(){
	char szyfr[] = {"gaderypoluki"};
	char tab[20] = {'\0'};
	char zaszyfr[20] = {'\0'};
	printf("Podaj ciag znakow do szyfrowania:\nMax 20 znakow\n");
	scanf("%s",tab);
	for (int i = 0; i < strlen(tab); i++)
	{
		for (int j = 0; j < strlen(szyfr); j++)
		{
			if (tab[i] == szyfr[j])
			{
				if (j%2 == 0)
				{
					zaszyfr[i] = szyfr[j+1];
					break;
				}
				else
				{
					zaszyfr[i] = szyfr[j-1];
					break;
				}
			}
			else
			{
				zaszyfr[i] = tab[i];
			}
		}
	}
	printf("%s\n",zaszyfr);
}
int main()
{
    szyfrowanie();
	return 0;
}
