#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
void Encryption (cipher)
{	int i;
	char str[100];
	printf("\nPlease enter a string : ");
	scanf("%s",&str);
	for ( i=0; i<100 && str[i]!='\0';i++)
	{
		if (str[i]==' ')
		{continue;
		}
		str[i]=str[i]+cipher;
	}
	printf("%s\n",str);

}
void Decryption(cipher)
{   int i;
	char str[100];
	printf("\nPlease enter a string : ");
	scanf("%s",&str);
	for ( i=0; i<100 && str[i]!='\0';i++)
	{
		if (str[i]==' ')
		{continue;
		}
		str[i]=str[i]-cipher;
	}
	printf("%s\n",str);
}
int main()
{
    while(1)
    {
    	int x,cipher;
	printf("Please enter the number of indexs you want to increase or decrease: \n");
	scanf("%d",&cipher);
	
	printf("\nPlease choose following options:\n");
	printf("1 = Encrypt the string.\n");
	printf("2 = Decrypt the string.\n");
	printf("3 = Exit rhe program.\n");
	scanf("%d", &x);
   if(x==1)
	{
		Encryption(cipher);
	}
   else if(x==2)
	{
		Decryption(cipher);
	}
	else if(x==3)
	{
		printf("Exiting the program....\n");
		break;	
	}
        
    }
   return 0;
}
