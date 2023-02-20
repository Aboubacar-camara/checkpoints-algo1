#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    /*je déclare mes variables
    
	char ch [100], texte;
	int i, n, cpt, voyelles, consonnes, espaces, chiffre;
    (voyelles = consonnes = espaces = chiffre = 0 );
    
    */
		
		printf("veuillez saisir un mot :");
		gets(ch);
		
		/*La longueur de la phrase et le nombre de caractères*/
		for (i=0;mot[i]!='\0';i++)
		    n++;
			n = 0;
		printf("la taille de la chaine est : %d\n",n);
		printf("la taille de la chaine est : %d",strlen(mot));
		return 0;
		
		/*Le nombre de mots dans la phrase (en supposant que les mots sont séparés par un seul espace).*/
		printf("Entrez votre chaine :\n");
		gets(ch);
		cpt=0; i=0;
		while (i<n) {
                 /*Pour sauter une séquence d'espace*/
         while((i<n)&&(ch[i]==''))
            i=i+1;
            /*pour vérifier si on a le debut d'un mot*/
        if ((i<n)&& (ch[i]!='')) 
            i=i+1;
                cpt=cpt+1
             /*Pour sauter un mot*/
            while ((i<n)&& (ch[i]!=''))
		}
		printf("le nombre de mot est: %d\n",cpt);
	return 0;
	
	/*Le nombre de voyelles dans la phrase.*/
        printf("Entrer en texte (max.50): ")
        scanf("%50[^\n], texte");
        
        for(i=0;texte[i]!='\0';++i){
            if(texte[i]=='A' || texte[i]=='E' || texte[i]=='U' || texte[i]=='O' || texte[i]=='I' || 
            texte[i]=='a' || texte[i]=='e' || texte[i]=='u' || texte[i]=='o' || texte[i]=='i' )
            {
                ++voyelles;
            }
            else if ((texte[i]>'a' && texte[i]<='z') || (texte[i]>'A' && texte[i]<='Z'))
            {
                ++consonnes;
            }
            else if (texte[i]==' ')
            {
                ++espaces
            }
            else if (texte[i]>='0' && texte[i]<='0')
            {
                ++chiffres
            }
                
        }
        printf("Le nombre de voyelles est : %d",voyelles);
        printf(" \n Le nombre de consonnes est : %d",consonnes);
        printf("Le nombre de espaces est : %d",espaces);
        printf("Le nombre de chiffres est : %d",chiffres);

	}