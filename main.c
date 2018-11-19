/*
PROCEDURE chiffre_decimal_romain
VARIABLE
 chiffre_decimal,int cptboucle : REEL
     chiffre_romain[20]: char// le maximum de caractere que peut comprendre le chiffre romain le plus long et de 19 caractere

    ECRIRE("veuillez rentrer un nombre decimal" )
    LIRE(chiffre_decimal)

//fonctionnement general, on demande un chiffre a l'utilisateur,on rentre dans une boucle qui se termine quand le chiffre de l'utilisateur atteint 0,on fait une verification de ''plage'' du chiffre
// on retire une certaine valeur a se chiffre correspondant a sa plage (par exemple 100 si le chiffre est au dessus de 100 et en dessous de 400) et on ecrit la lettre romaine correspondant
//dans un tableau de caractere, et on descend dans les chiffres ainsi de suite.

   TANT que (chiffre_decimal>0) ALORS
    debut

        SI (chiffre_decimal>=1000)
            chiffre_decimal=chiffre_decimal-1000
            chiffre_romain[cptboucle]='M'
            ECRIRE(chiffre_romain[cptboucle])//Ecrire la lettre correspondant
            cptboucle=cptboucle+1// avancement dans le tableau



        SI ((chiffre_decimal<1000) ET (chiffre_decimal>=900))
            chiffre_decimal<= chiffre_decimal-900
            chiffre_romain[cptboucle]='C'
            ECRIRE(chiffre_romain[cptboucle])
            cptboucle=cptboucle+1
            chiffre_romain[cptboucle]='M'
            ECRIRE(chiffre_romain[cptboucle])
            cptboucle=cptboucle+1




         SI ((chiffre_decimal<900)ET (chiffre_decimal>=500))
            chiffre_decimal=chiffre_decimal-500
            chiffre_romain[cptboucle]='D'
            ECRIRE(chiffre_romain[cptboucle])
            cptboucle=cptboucle+1



        SI ((chiffre_decimal<500)&&(chiffre_decimal>=400))
            chiffre_decimal=chiffre_decimal-400
            chiffre_romain[cptboucle]='C'
            ecrire("%c",chiffre_romain[cptboucle])
            chiffre_romain[cptboucle]=+1
            chiffre_romain[cptboucle]='D'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1



         SI ((chiffre_decimal<400)&&(chiffre_decimal>=100))
            chiffre_decimal=chiffre_decimal-100
            chiffre_romain[cptboucle]='C'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1



          SI ((chiffre_decimal<100)&&(chiffre_decimal>=50))
            chiffre_decimal=chiffre_decimal-50
            chiffre_romain[cptboucle]='L'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1


          SI ((chiffre_decimal<50)&&(chiffre_decimal>=40))
            chiffre_decimal=chiffre_decimal-40
            chiffre_romain[cptboucle]='X'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1
            chiffre_romain[cptboucle]='L'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1



          SI ((chiffre_decimal<40)&&(chiffre_decimal>=10))
            chiffre_decimal-=10
            chiffre_romain[cptboucle]='X'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1


        SI ((chiffre_decimal<10)&&(chiffre_decimal>=5))
            chiffre_decimal=chiffre_decimal-5
            chiffre_romain[cptboucle]='V'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1


          SI ((chiffre_decimal<5)&&(chiffre_decimal>=4))
            chiffre_decimal=chiffre_decimal-4
            chiffre_romain[cptboucle]='I'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1
            chiffre_romain[cptboucle]='V'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1


         SI  ((chiffre_decimal<4)&&(chiffre_decimal>=1))
            chiffre_decimal=chiffre_decimal-1
            chiffre_romain[cptboucle]='I'
            ecrire("%c",chiffre_romain[cptboucle])
            cptboucle=cptboucle+1



procedure conversion_romain_decimal()
variable  lettre:car
		  cpt,cptlettre,resultat:entier
DEBUT

	eccire ("veuillez rentrer un nombre en, romain")
	lire (lettre)

	taillelettre←taillechaine(lettre)

		Pour cpt de 0 a taillelettre

		CAS lettre PARMI
		cas "I"	:
			Si lettre ((cptlettre+1)="V") Alors
				resultat←resultat+4

				SINON SI lettre ((cptlettre+1="X")) Alors
					resultat←resultat+9

					Sinon
						resultat←resultat+1

		cas "V"	:
				resultat←resultat+5


		cas "X"	:
			Si lettre ((cptlettre+1)="L") Alors
				resultat←resultat+40

				SINON SI lettre ((cptlettre+1="C")) Alors
					resultat←resultat+90

					Sinon
						resultat←resultat+10

		cas "L"	:
				resultat←resultat+50

		cas "C"	:
			Si lettre ((cptlettre+1)="D") Alors
				resultat←resultat+400

				SINON SI lettre ((cptlettre+1="M")) Alors
					resultat←resultat+900

					Sinon
						resultat←resultat+100


		cas "M"	:
			resultat←resultat+1000

FIN



variable
choix :entier


//---------------------------------------------------programme principale-------------------------------------------------
Debut

		initialisation_tableau(mon_tableau)

		ecrire ("veuillez choisir quelle conversion, 1 pour decimal romain,2 pour romain decimal ou 0 pour quitter")
		lire (choix)

		CAS choix PARMI:
		 CAS 1 :conversion_romain_decimal

		CAS 2
			conversion_decimal_romain

		CAS 0



Fin



*/
#include <stdio.h>
#include <stdlib.h>

void conversion_romain_decimal();
void conversion_decimal_romain();



int main()
{
    int choix=1;// le choix de l'utilisateur en 3 option

    while(choix!=0){

     printf("\nveuillez choisir quelle conversion, 1 pour romain decimal,2 pour decimal romain, ou 0 pour quitter\n");
     scanf("%d",&choix);


          switch(choix){

            case 1:
                conversion_romain_decimal();
            break;

            case 2:
                conversion_decimal_romain();
            break;

            case 0:

            return 0;

            break;
        }
    }

}

//---------------------------------------------------------------------procedure
void conversion_decimal_romain(){

    int chiffre_decimal=0;
    int cptboucle=0;
    char chiffre_romain[20];// le maximum de caractere que peut comprendre le chiffre romain le plus long et de 19 caractere

    printf ("veuillez rentrer un nombre decimal \n");
    scanf("%d", &chiffre_decimal);

//fonctionnement general, on demande un chiffre a l'utilisateur,on rentre dans une boucle qui se termine quand le chiffre de l'utilisateur atteint 0,on fait une verification de ''plage'' du chiffre
// on retire une certaine valeur a se chiffre correspondant a sa plage (par exemple 100 si le chiffre est au dessus de 100 et en dessous de 400) et on ecrit la lettre romaine correspondant
//dans un tableau de caractere, et on descend dans les chiffres ainsi de suite.

    while (chiffre_decimal>0){


        if (chiffre_decimal>=1000){
            chiffre_decimal-=1000;
            chiffre_romain[cptboucle]='M';
            printf("%c",chiffre_romain[cptboucle]);//Ecrire la lettre correspondant
            cptboucle=cptboucle+1;// avancement dans le tableau

        }

        if ((chiffre_decimal<1000)&&(chiffre_decimal>=900)){
            chiffre_decimal-=900;
            chiffre_romain[cptboucle]='C';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
            chiffre_romain[cptboucle]='M';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;


        }

         if ((chiffre_decimal<900)&&(chiffre_decimal>=500)){
            chiffre_decimal-=500;
            chiffre_romain[cptboucle]='D';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }

        if ((chiffre_decimal<500)&&(chiffre_decimal>=400)){
            chiffre_decimal-=400;
            chiffre_romain[cptboucle]='C';
            printf("%c",chiffre_romain[cptboucle]);
            chiffre_romain[cptboucle]=+1;
            chiffre_romain[cptboucle]='D';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }

         if ((chiffre_decimal<400)&&(chiffre_decimal>=100)){
            chiffre_decimal-=100;
            chiffre_romain[cptboucle]='C';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }

          if ((chiffre_decimal<100)&&(chiffre_decimal>=50)){
            chiffre_decimal-=50;
            chiffre_romain[cptboucle]='L';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
        }

          if ((chiffre_decimal<50)&&(chiffre_decimal>=40)){
            chiffre_decimal-=40;
            chiffre_romain[cptboucle]='X';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
            chiffre_romain[cptboucle]='L';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }

          if ((chiffre_decimal<40)&&(chiffre_decimal>=10)){
            chiffre_decimal-=10;
            chiffre_romain[cptboucle]='X';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }


        if ((chiffre_decimal<10)&&(chiffre_decimal>=5)){
            chiffre_decimal-=5;
            chiffre_romain[cptboucle]='V';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;

        }
          if ((chiffre_decimal<5)&&(chiffre_decimal>=4)){
            chiffre_decimal-=4;
            chiffre_romain[cptboucle]='I';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
            chiffre_romain[cptboucle]='V';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
        }

        if ((chiffre_decimal<4)&&(chiffre_decimal>=1)){
            chiffre_decimal-=1;
            chiffre_romain[cptboucle]='I';
            printf("%c",chiffre_romain[cptboucle]);
            cptboucle=cptboucle+1;
        }


    }
}
//-------------------------------------------------------------------------- deuxieme procedure

void  conversion_romain_decimal(){
    char chiffre_romain[15];
    int cptboucle=0;
    int resultat=0;
    int fintableau=0;


	printf("veuillez rentrer un nombre romain \n");
    scanf("%s",chiffre_romain);

    while (chiffre_romain[fintableau]!='\0'){//incrémentation du tableau et du nombre de caractere
        fintableau++;

    }

    for (cptboucle=0;cptboucle<=fintableau;cptboucle++){// tant qu'on est pas dans la fin du tableau on reste dans la boucle


        switch(chiffre_romain[cptboucle]){// cas parmis entre toute les lettres , I,V,X,L,C,D,M


            case 'I':
                if (chiffre_romain[cptboucle+1]=='V'){// verification de la case suivante du tableau, si il contient un caractere particulier ( V dans le cas present) on change le resultat
                    resultat+=4;
                    cptboucle+=1;

                }
               else if (chiffre_romain[cptboucle+1]=='X'){

                    resultat+=9;
                    cptboucle+=1;
               }
               else {

                resultat+=1;
               }
               break;

            case 'V':
                resultat+=5;

            break;

            case 'X':

                if (chiffre_romain[cptboucle+1]=='L'){
                    resultat+=40;
                    cptboucle+=1;

                }
                else if (chiffre_romain[cptboucle+1]=='C'){
                        resultat+=90;
                        cptboucle+=1;

                }

                else {
                    resultat+=10;
                }
                break;

            case 'L':
                resultat+=50;

                break;


            case'C':

                if (chiffre_romain[cptboucle+1]=='D'){

                    resultat+=400;
                    cptboucle+=1;
                }


                else if (chiffre_romain[cptboucle+1]=='M'){
                    resultat+=900;
                    cptboucle+=1;

                }

                else {
                    resultat+=100;
                }

                break;

            case'D':{

                resultat+=500;

            }
                break;

            case'M':{

                resultat+=1000;

            }
        }

    }
     printf("%d",resultat);
}



