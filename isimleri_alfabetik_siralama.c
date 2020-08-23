#include <stdio.h>
#include <string.h>
#include <conio.h>
//c de alfabetik isim sýralamasý yapan program
int main()
{
	char isimler[10][8], tmp[8];
	int i, j, n;
	printf("Kac Adet isim girilecek n");
	scanf("%d",&n);
	printf("%d adet ismi giriniz \n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d.ismi giriniz \n",i+1);
		scanf("%s", isimler[i]);
	
	}
	for (i = 0; i < n - 1 ; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(isimler[i], isimler[j]) > 0)
			{
				strcpy(tmp, isimler[i]);
				strcpy(isimler[i], isimler[j]);
				strcpy(isimler[j], tmp);
			}
		}
	}
	printf("----------------------------------------\n");
	printf("YazdiklariniztSiralanmis Seklin\n");
	printf("------------------------------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("%s  \n", isimler[i]);
	}
	printf("------------------------------------------\n");
	getch();
}
