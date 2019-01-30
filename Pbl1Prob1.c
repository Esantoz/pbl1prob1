/*******************************************************************************
Autor: Esdras Evangelista de Sena Santos
Componente Curricular: Algoritmos I
Concluido em: 11/10/2018
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
#include <stdio.h>

//variaveis para os niveis de concordancia de cada questao
int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0;
int a2=0,b2=0,c2=0,d2=0,e2=0,f2=0;
int a3=0,b3=0,c3=0,d3=0,e3=0,f3=0;
int a4=0,b4=0,c4=0,d4=0,e4=0,f4=0;
int a5=0,b5=0,c5=0,d5=0,e5=0,f5=0;
int a6=0,b6=0,c6=0,d6=0,e6=0,f6=0;
int a7=0,b7=0,c7=0,d7=0,e7=0,f7=0;
int a8=0,b8=0,c8=0,d8=0,e8=0,f8=0;
int a9=0,b9=0,c9=0,d9=0,e9=0,f9=0;
int a10=0,b10=0,c10=0,d10=0,e10=0,f10=0;
int a11=0,b11=0,c11=0,d11=0,e11=0,f11=0;
int a12=0,b12=0,c12=0,d12=0,e12=0,f12=0;
int a13=0,b13=0,c13=0,d13=0,e13=0,f13=0;
int a14=0,b14=0,c14=0,d14=0,e14=0,f14=0;
int a15=0,b15=0,c15=0,d15=0,e15=0,f15=0;
int a16=0,b16=0,c16=0,d16=0,e16=0,f16=0;
int a17=0,b17=0,c17=0,d17=0,e17=0,f17=0;
int main(void){
	//variaveis para os cursos
	int curso,ecivil=0,med=0,his=0,letras=0,aeciv1=0,aeciv2=0,aeciv3=0,amed1=0,amed2=0,amed3=0,
	ahis1=0,ahis2=0,ahis3=0,alet1=0,alet2=0,alet3=0;
	//variaveis o sexo
	int sexo,masculino=0,feminino=0,amas1=0,afem1=0,amas2=0,afem2=0,amas3=0,afem3=0;
	//variaveis para as faixas etarias
	int idade,jovem=0,adulto=0,velho=0,ajov1=0,ajov2=0,ajov3=0,aadu1=0,aadu2=0,aadu3=0,
	avel1=0,avel2=0,avel3=0;
	//variavel que vai contar o numero de pessoas que fizeram a pesquisa
	int cont = 0;
	//variaveis para acumular o nivel de concordancia do total de pessoas
	int con1,con2,con3;
	//a pesquisa vai rodar em um loop infinito que so vai ser quebrado caso 
	//o usuario não queira fazer outra pesquisa 
	while(true){
			cont += 1;
			//agora seu curso vai ser perguntado e uma variavel dentro do switch vai
			// acumular o valor correspondente ao seu curso
			printf("digite o numero que indica o seu curso: \n");
			printf("Engenharia civil[1]\nMedicina[2]\nhistoria[3]\nletras vernaculas[4]\n");
			scanf("%i",&curso);
			while(true){
				switch(curso){
					case 1:
						ecivil += 1;
						break;
					case 2:
						med += 1;
						break;
					case 3:
						his += 1;
						break;
					case 4:
						letras += 1;
						break;
					default:
						printf("alternativa nao existe.\n");
						printf("por favor digite o numero do seu curso novamente:\n");
						scanf("%i",&curso);
						break;
					};
					if(curso >= 1 && curso <= 4){
						if(curso == 1)
							ecivil += 1;
						else if(curso == 2)
							med += 1;
						else if(curso == 3)
							his += 1;
						else if(curso == 4)
							letras += 1;
						break;
					}
			}
			//agora seu sexo vai ser perguntado e uma variavel dentro do switch vai
			// acumular o valor correspondente ao seu sexo
			printf("Masculino[1]\n");
			printf("Feminino[2]\n");
			printf("por favor digite o numero que indica seu sexo:\n");
			scanf("%i",&sexo);
			while(true){
				switch(sexo){
					case 1:
						masculino += 1;
						printf("voce e do sexo masculino\n");
						break;
					case 2:
						feminino += 1;
						printf("voce e do sexo feminino\n");
						break;
					default:
						printf("resposta invalida tente novamente\n");
						printf("insira o numero que indica seu sexo:\n");
						scanf("%i",&sexo);
				};
				if(sexo >= 1 && sexo <= 2){
					if(sexo == 1)
						masculino += 1;
					else if(sexo == 2)
						feminino += 1;
					break;	
				}
			}
			//agora sua idade vai ser perguntado e uma variavel dentro do switch vai
			// acumular o valor correspondente ao sua idade
			printf("sua idade:\nde 18 a 20[1]\nde 21 a 23[2]\nacima de 23[3]\n");
			printf("digite o numero que indica sua idade:\n");
			scanf("%i",&idade);
			while(true){
				switch(idade){
					case 1:
						printf("voce tem entre 18 a 20 anos\n");
						jovem += 1;
						break;
					case 2:
						printf("voce tem entre 21 a 23 anos\n");
						adulto += 1;
						break;
					case 3:
						printf("sua idade é acima de 23\n");
						velho += 1;
						break;
					default:
						printf("resposta invalida tente novamente\n");
						printf("digite sua resposta:\n");
						scanf("%i",&idade);
				};
				if(idade >= 1 && idade <= 3){
					if(idade == 1)
						jovem += 1;
					else if(idade == 2)
						adulto += 1;
					else if(idade == 3)
						velho += 1;
					break;	
				}
			}
			int concordancia(int resp);
			int o = 0;
			printf("*SUBIMISSAO A AUTORIDADE*\n\n");
			printf("Questao 1: O que este país necessita,\n");
            printf("principalmente, antes de leis ou\n"); 
			printf("planos politicos, e de alguns líderes\n"); 
      		printf("valentes, incansaveis e dedicados em\n"); 
			printf("quem o povo possa depositar a sua fe\n\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con1 += concordancia(o);
			if(curso == 1)
				aeciv1 += concordancia(o);
			else if(curso == 2)
				amed1 += concordancia(o);
			else if(curso == 3)
				ahis1 += concordancia(o);
			else if(curso == 4)
				alet1 += concordancia(o);
			if(sexo == 1)
				amas1 += concordancia(o);
			else if(sexo == 2)
				afem1 += concordancia(o);
			if(idade == 1)
				ajov1 += concordancia(o);
			else if(idade == 2)
				aadu1 += concordancia(o);
			else if(idade == 3)
				avel1 += concordancia(o);
				
			if(concordancia(o) == 6)
				a1 += 1;
			else if(concordancia(o) == 5)
				b1 += 1;
			else if(concordancia(o) == 4)
				c1 += 1;
			else if(concordancia(o) == 3)
				d1 += 1;
			else if(concordancia(o) == 2)
				e1 += 1;
			else if(concordancia(o) == 1)
				f1 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 2: A obediencia e o respeito a\n"); 
			printf("autoridade sao as principais virtudes\n"); 
			printf("que devemos ensinar as nossas\n"); 
			printf("criancas\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con1 += concordancia(o);
			if(curso == 1)
				aeciv1 += concordancia(o);
			else if(curso == 2)
				amed1 += concordancia(o);
			else if(curso == 3)
				ahis1 += concordancia(o);
			else if(curso == 4)
				alet1 += concordancia(o);
			if(sexo == 1)
				amas1 += concordancia(o);
			else if(sexo == 2)
				afem1 += concordancia(o);
			if(idade == 1)
				ajov1 += concordancia(o);
			else if(idade == 2)
				aadu1 += concordancia(o);
			else if(idade == 3)
				avel1 += concordancia(o);
			if(concordancia(o) == 6)
				a2 += 1;
			else if(concordancia(o) == 5)
				b2 += 1;
			else if(concordancia(o) == 4)
				c2 += 1;
			else if(concordancia(o) == 3)
				d2 += 1;
			else if(concordancia(o) == 2)
				e2 += 1;
			else if(concordancia(o) == 1)
				f2 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 3: Nao ha nada pior do que uma pessoa\n"); 
			printf("que nao sente profundo amor,\n"); 
			printf("gratidao e respeito por seus pais\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con1 += concordancia(o);
			if(curso == 1)
				aeciv1 += concordancia(o);
			else if(curso == 2)
				amed1 += concordancia(o);
			else if(curso == 3)
				ahis1 += concordancia(o);
			else if(curso == 4)
				alet1 += concordancia(o);
			if(sexo == 1)
				amas1 += concordancia(o);
			else if(sexo == 2)
				afem1 += concordancia(o);
			if(idade == 1)
				ajov1 += concordancia(o);
			else if(idade == 2)
				aadu1 += concordancia(o);
			else if(idade == 3)
				avel1 += concordancia(o);
			if(concordancia(o) == 6)
				a3 += 1;
			else if(concordancia(o) == 5)
				b3 += 1;
			else if(concordancia(o) == 4)
				c3 += 1;
			else if(concordancia(o) == 3)
				d3 += 1;
			else if(concordancia(o) == 2)
				e3 += 1;
			else if(concordancia(o) == 1)
				f3 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 4: Nenhuma pessoa decente, normal e\n"); 
			printf("em seu são juízo pensaria em ofender\n"); 
			printf("um amigo ou parente próximo\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con1 += concordancia(o);
			if(curso == 1)
				aeciv1 += concordancia(o);
			else if(curso == 2)
				amed1 += concordancia(o);
			else if(curso == 3)
				ahis1 += concordancia(o);
			else if(curso == 4)
				alet1 += concordancia(o);
			if(sexo == 1)
				amas1 += concordancia(o);
			else if(sexo == 2)
				afem1 += concordancia(o);
			if(idade == 1)
				ajov1 += concordancia(o);
			else if(idade == 2)
				aadu1 += concordancia(o);
			else if(idade == 3)
				avel1 += concordancia(o);
			if(concordancia(o) == 6)
				a4 += 1;
			else if(concordancia(o) == 5)
				b4 += 1;
			else if(concordancia(o) == 4)
				c4 += 1;
			else if(concordancia(o) == 3)
				d4 += 1;
			else if(concordancia(o) == 2)
				e4 += 1;
			else if(concordancia(o) == 1)
				f4 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 5: O policial e um guerreiro de Deus\n"); 
			printf("para impor a ordem e proteger as\n"); 
			printf("pessoas de bem\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con1 += concordancia(o);
			if(curso == 1)
				aeciv1 += concordancia(o);
			else if(curso == 2)
				amed1 += concordancia(o);
			else if(curso == 3)
				ahis1 += concordancia(o);
			else if(curso == 4)
				alet1 += concordancia(o);
			if(sexo == 1)
				amas1 += concordancia(o);
			else if(sexo == 2)
				afem1 += concordancia(o);
			if(idade == 1)
				ajov1 += concordancia(o);
			else if(idade == 2)
				aadu1 += concordancia(o);
			else if(idade == 3)
				avel1 += concordancia(o);
			if(concordancia(o) == 6)
				a5 += 1;
			else if(concordancia(o) == 5)
				b5 += 1;
			else if(concordancia(o) == 4)
				c5 += 1;
			else if(concordancia(o) == 3)
				d5 += 1;
			else if(concordancia(o) == 2)
				e5 += 1;
			else if(concordancia(o) == 1)
				f5 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("\n");
			printf("===========================================================\n");
			printf("*AGRESSIVIDADE AUTORITARIA*\n\n");
			printf("Questao 1: A maioria de nossos problemas\n"); 
			printf("sociais estaria resolvida se\n"); 
			printf("pudessemos nos livrar das pessoas\n"); 
			printf("imorais, dos marginais e dos\n"); 
			printf("pervertidos\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a6 += 1;
			else if(concordancia(o) == 5)
				b6 += 1;
			else if(concordancia(o) == 4)
				c6 += 1;
			else if(concordancia(o) == 3)
				d6 += 1;
			else if(concordancia(o) == 2)
				e6 += 1;
			else if(concordancia(o) == 1)
				f6 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 2: Se falassemos menos e\n"); 
			printf("trabalhassemos mais, todos\n"); 
			printf("estaríamos melhor\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a7 += 1;
			else if(concordancia(o) == 5)
				b7 += 1;
			else if(concordancia(o) == 4)
				c7 += 1;
			else if(concordancia(o) == 3)
				d7 += 1;
			else if(concordancia(o) == 2)
				e7 += 1;
			else if(concordancia(o) == 1)
				f7 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 3: Deve-se castigar sempre todo insulto\n"); 
			printf("à nossa honra");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a8 += 1;
			else if(concordancia(o) == 5)
				b8 += 1;
			else if(concordancia(o) == 4)
				c8 += 1;
			else if(concordancia(o) == 3)
				d8 += 1;
			else if(concordancia(o) == 2)
				e8 += 1;
			else if(concordancia(o) == 1)
				f8 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 4: Os crimes sexuais tais como o estupro\n"); 
			printf("ou ataques a crianças merecem\n"); 
			printf("mais que prisão; quem comete esses\n"); 
			printf("crimes deveria receber punição física\n");
			printf("publicamente ou receber um castigo pior\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a9 += 1;
			else if(concordancia(o) == 5)
				b9 += 1;
			else if(concordancia(o) == 4)
				c9 += 1;
			else if(concordancia(o) == 3)
				d9 += 1;
			else if(concordancia(o) == 2)
				e9 += 1;
			else if(concordancia(o) == 1)
				f9 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 5: Os homossexuais sao quase\n"); 
			printf("criminosos e deveriam receber um\n"); 
			printf("castigo severo\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a10 += 1;
			else if(concordancia(o) == 5)
				b10 += 1;
			else if(concordancia(o) == 4)
				c10 += 1;
			else if(concordancia(o) == 3)
				d10 += 1;
			else if(concordancia(o) == 2)
				e10 += 1;
			else if(concordancia(o) == 1)
				f10 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 6: As vezes, os jovens tem ideias\n"); 
			printf("rebeldes que, com os anos, deverao\n"); 
			printf("superar para acalmar os seus\n"); 
			printf("pensamentos\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a11 += 1;
			else if(concordancia(o) == 5)
				b11 += 1;
			else if(concordancia(o) == 4)
				c11 += 1;
			else if(concordancia(o) == 3)
				d11 += 1;
			else if(concordancia(o) == 2)
				e11 += 1;
			else if(concordancia(o) == 1)
				f11 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 7: Hoje em dia, as pessoas se\n"); 
			printf("intrometem cada vez mais em\n"); 
			printf("assuntos que deveriam ser somente\n"); 
			printf("pessoais e privados\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con2 += concordancia(o);
			if(curso == 1)
				aeciv2 += concordancia(o);
			else if(curso == 2)
				amed2 += concordancia(o);
			else if(curso == 3)
				ahis2 += concordancia(o);
			else if(curso == 4)
				alet2 += concordancia(o);
			if(sexo == 1)
				amas2 += concordancia(o);
			else if(sexo == 2)
				afem2 += concordancia(o);
			if(idade == 1)
				ajov2 += concordancia(o);
			else if(idade == 2)
				aadu2 += concordancia(o);
			else if(idade == 3)
				avel2 += concordancia(o);
			if(concordancia(o) == 6)
				a12 += 1;
			else if(concordancia(o) == 5)
				b12 += 1;
			else if(concordancia(o) == 4)
				c12 += 1;
			else if(concordancia(o) == 3)
				d12 += 1;
			else if(concordancia(o) == 2)
				e12 += 1;
			else if(concordancia(o) == 1)
				f12 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("\n");
			printf("===========================================================\n");
			printf("*CONVENCIONALISMO*\n\n");
			printf("Questao 1: A ciencia tem o seu lugar, mas\n"); 
			printf("ha muitas coisas importantes que\n"); 
			printf("a mente humana jamais podera\n"); 
			printf("compreender\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con3 += concordancia(o);
			if(curso == 1)
				aeciv3 += concordancia(o);
			else if(curso == 2)
				amed3 += concordancia(o);
			else if(curso == 3)
				ahis3 += concordancia(o);
			else if(curso == 4)
				alet3 += concordancia(o);
			if(sexo == 1)
				amas3 += concordancia(o);
			else if(sexo == 2)
				afem3 += concordancia(o);
			if(idade == 1)
				ajov3 += concordancia(o);
			else if(idade == 2)
				aadu3 += concordancia(o);
			else if(idade == 3)
				avel3 += concordancia(o);
			if(concordancia(o) == 6)
				a13 += 1;
			else if(concordancia(o) == 5)
				b13 += 1;
			else if(concordancia(o) == 4)
				c13 += 1;
			else if(concordancia(o) == 3)
				d13 += 1;
			else if(concordancia(o) == 2)
				e13 += 1;
			else if(concordancia(o) == 1)
				f13 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 2: Os homens podem ser divididos\n");
			printf("em duas classes definidas:\n"); 
			printf("os fracos e os fortes\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con3 += concordancia(o);
			if(curso == 1)
				aeciv3 += concordancia(o);
			else if(curso == 2)
				amed3 += concordancia(o);
			else if(curso == 3)
				ahis3 += concordancia(o);
			else if(curso == 4)
				alet3 += concordancia(o);
			if(sexo == 1)
				amas3 += concordancia(o);
			else if(sexo == 2)
				afem3 += concordancia(o);
			if(idade == 1)
				ajov3 += concordancia(o);
			else if(idade == 2)
				aadu3 += concordancia(o);
			else if(idade == 3)
				avel3 += concordancia(o);
			if(concordancia(o) == 6)
				a14 += 1;
			else if(concordancia(o) == 5)
				b14 += 1;
			else if(concordancia(o) == 4)
				c14 += 1;
			else if(concordancia(o) == 3)
				d14 += 1;
			else if(concordancia(o) == 2)
				e14 += 1;
			else if(concordancia(o) == 1)
				f14 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 3: Um indivíduo de más maneiras, maus\n"); 
			printf("costumes e má educação dificilmente\n"); 
			printf("pode fazer amizade com pessoas\n"); 
			printf("decentes\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con3 += concordancia(o);
			if(curso == 1)
				aeciv3 += concordancia(o);
			else if(curso == 2)
				amed3 += concordancia(o);
			else if(curso == 3)
				ahis3 += concordancia(o);
			else if(curso == 4)
				alet3 += concordancia(o);
			if(sexo == 1)
				amas3 += concordancia(o);
			else if(sexo == 2)
				afem3 += concordancia(o);
			if(idade == 1)
				ajov3 += concordancia(o);
			else if(idade == 2)
				aadu3 += concordancia(o);
			else if(idade == 3)
				avel3 += concordancia(o);
			if(concordancia(o) == 6)
				a15 += 1;
			else if(concordancia(o) == 5)
				b15 += 1;
			else if(concordancia(o) == 4)
				c15 += 1;
			else if(concordancia(o) == 3)
				d15 += 1;
			else if(concordancia(o) == 2)
				e15 += 1;
			else if(concordancia(o) == 1)
				f15 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 4: Todos devemos ter fe absoluta\n"); 
			printf("em um poder sobrenatural, cujas\n"); 
			printf("decisões devemos acatar\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con3 += concordancia(o);
			if(curso == 1)
				aeciv3 += concordancia(o);
			else if(curso == 2)
				amed3 += concordancia(o);
			else if(curso == 3)
				ahis3 += concordancia(o);
			else if(curso == 4)
				alet3 += concordancia(o);
			if(sexo == 1)
				amas3 += concordancia(o);
			else if(sexo == 2)
				afem3 += concordancia(o);
			if(idade == 1)
				ajov3 += concordancia(o);
			else if(idade == 2)
				aadu3 += concordancia(o);
			else if(idade == 3)
				avel3 += concordancia(o);
			if(concordancia(o) == 6)
				a16 += 1;
			else if(concordancia(o) == 5)
				b16 += 1;
			else if(concordancia(o) == 4)
				c16 += 1;
			else if(concordancia(o) == 3)
				d16 += 1;
			else if(concordancia(o) == 2)
				e16 += 1;
			else if(concordancia(o) == 1)
				f16 += 1;
			o = 0;
			printf("===========================================================\n");
			printf("Questao 5: Pobreza e consequencia da falta de\n"); 
			printf("vontade de querer trabalhar\n");
			printf("concorda totalmente[6]|concorda[5]|concorda parcialmente[4]");
			printf("|discorda parcialmente[3]|discorda[2]|discorda totalmente[1]\n");
			printf("digite o numero que representa seu nivel de concordancia:\n");
			scanf("%i",&o);
			//o seu nivel de concordancia é mandado para a função concordancia
			con3 += concordancia(o);
			if(curso == 1)
				aeciv3 += concordancia(o);
			else if(curso == 2)
				amed3 += concordancia(o);
			else if(curso == 3)
				ahis3 += concordancia(o);
			else if(curso == 4)
				alet3 += concordancia(o);
			if(sexo == 1)
				amas3 += concordancia(o);
			else if(sexo == 2)
				afem3 += concordancia(o);
			if(idade == 1)
				ajov3 += concordancia(o);
			else if(idade == 2)
				aadu3 += concordancia(o);
			else if(idade == 3)
				avel3 += concordancia(o);
			if(concordancia(o) == 6)
				a17 += 1;
			else if(concordancia(o) == 5)
				b17 += 1;
			else if(concordancia(o) == 4)
				c17 += 1;
			else if(concordancia(o) == 3)
				d17 += 1;
			else if(concordancia(o) == 2)
				e17 += 1;
			else if(concordancia(o) == 1)
				f17 += 1;
			o = 0;
			printf("\n\n");
			getchar();
			char r;
			//caso o usuario não queira fazer outra pesquisa é so digitar 'N' ou 'n'
			printf("voce deseja fazer outra pesquisa?[s/n]\n");
			scanf("%c",&r);
			if(r == 'n' || r == 'N'){
				printf("fim da pesquisa!");
				break;
			}
			//caso ele queira fazer outra pesquisa é so digitar 'S' ou 's'
			else if(r == 's' || r == 'S')
				printf("iniciara outra pesquisa!");	
	}
	//agora serão mostrados as frequencias absoluta e relativa de cada questão
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=---=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Frequencia absoluta e relativa de cada nivel de concordancia \n");
	printf("para cada questao:\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 1:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a1);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a1/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b1);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b1 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c1);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c1 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d1);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d1 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e1);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e1 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f1);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f1 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 2:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a2);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a2/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b2);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b2 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c2);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c2 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d2);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d2 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e2);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e2 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f2);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f2 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 3:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a3);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a3/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b3);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b3 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c3);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c3 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d3);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d3 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e3);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e3 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f3);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f3 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 4:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a4);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a4/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b4);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b4 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c4);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c4 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d4);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d4 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e4);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e4 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f4);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f4 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 5:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a5);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a5/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b5);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b5 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c5);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c5 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d5);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d5 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e5);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e5 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f5);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f5 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 6:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a6);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a6/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b6);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b6 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c6);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c6 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d6);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d6 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e6);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e6 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f6);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f6 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 7:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a7);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a7/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b7);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b7 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c7);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c7 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d7);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d7 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e7);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e7 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f7);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f7 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 8:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a8);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a8/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b8);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b8 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c8);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c8 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d8);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d8 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e8);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e8 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f8);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f8 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 9:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a9);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a9/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b9);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b9 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c9);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c9 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d9);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d8 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e9);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e9 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f9);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f9 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 10:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a10);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a10/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b10);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b10 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c10);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c10 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d10);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d10 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e10);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e10 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f10);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f10 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 11:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a11);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a11/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b11);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b11 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c11);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c11 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d11);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d11 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e11);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e11 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f11);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f11 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 12:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a12);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a12/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b12);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b12 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c12);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c12 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d12);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d12 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e12);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e12 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f12);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f12 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 13:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a13);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a13/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b13);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b13 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c13);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c13 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d13);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d13 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e13);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e13 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f13);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f13 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 14:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a14);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a14/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b14);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b14 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c14);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c14 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d14);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d14 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e14);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e14 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f14);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f14 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 15:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a15);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a15/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b15);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b15 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c15);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c15 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d15);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d15 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e15);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e15 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f15);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f15 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 16:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a16);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a16/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b16);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b16 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c16);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c16 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d16);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d16 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e16);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e16 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f16);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f16 / cont)*100);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Questao 17:\n");
	printf("F.A. de CONCORDA TOTALMENTE: %i\n",a17);
	printf("F.R. de CONCORDA TOTALMENTE: %.2f%%\n",((float)a17/cont)*100);
	printf("F.A. de CONCORDA: %i\n",b17);
	printf("F.R. de CONCORDA: %.2f%%\n",((float)b17 / cont)*100);
	printf("F.A. de CONCORDA PARCIALMENTE: %i\n",c17);
	printf("F.R. de CONCORDO PARCIALMENTE: %.2f%%\n",((float)c17 / cont)*100);
	printf("F.A. de DISCORDA PARCIALMENTE: %i\n",d17);
	printf("F.R. de DISCORDA PARCIALMENTE: %.2f%%\n",((float)d17 / cont)*100);
	printf("F.A. de DISCORDA: %i\n",e17);
	printf("F.R. de DISCORDA: %.2f%%\n",((float)e17 / cont)*100);
	printf("F.A. de DISCORDA TOTALMENTE: %i\n",f17);
	printf("F.R. de DISCORDA TOTALMENTE: %.2f%%\n",((float)f17 / cont)*100);
	printf("====================================================================\n");
	printf("\n");
	//agora serão mostrados os 3 escores e o indice geral para cada curso
	printf("ESCORES E INDICE GERAL PARA OS CURSOS\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o  curso de engenharia civil.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",aeciv1/5);
	printf("escore 2: %i\n",aeciv2/7);
	printf("escore 3: %i\n",aeciv3/5);
	printf("indice geral: %i\n",(((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6);
	if((((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 >= 0 && (((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 >= 4 && (((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 >= 7 && (((aeciv1/5+aeciv2/7+aeciv3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o  curso de medicina.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",amed1/5);
	printf("escore 2: %i\n",amed2/7);
	printf("escore 3: %i\n",amed3/5);
	printf("indice geral: %i\n",(((amed1/5+amed2/7+amed3/5)/3)*10)/6);
	if((((amed1/5+amed2/7+amed3/5)/3)*10)/6 >= 0 && (((amed1/5+amed2/7+amed3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((amed1/5+amed2/7+amed3/5)/3)*10)/6 >= 4 && (((amed1/5+amed2/7+amed3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((amed1/5+amed2/7+amed3/5)/3)*10)/6 >= 7 && (((amed1/5+amed2/7+amed3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o  curso de historia.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",ahis1/5);
	printf("escore 2: %i\n",ahis2/7);
	printf("escore 3: %i\n",ahis3/5);
	printf("indice geral: %i\n",(((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6);
	if((((aeciv1/5+ahis2/7+ahis3/5)/3)*10)/6 >= 0 && (((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6 >= 4 && (((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6 >= 7 && (((ahis1/5+ahis2/7+ahis3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o  curso de letras vernaculas.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",alet1/5);
	printf("escore 2: %i\n",alet2/7);
	printf("escore 3: %i\n",alet3/5);
	printf("indice geral: %i\n",(((alet1/5+alet2/7+alet3/5)/3)*10)/6);
	if((((alet1/5+alet2/7+alet3/5)/3)*10)/6 >= 0 && (((alet1/5+alet2/7+alet3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((alet1/5+alet2/7+alet3/5)/3)*10)/6 >= 4 && (((alet1/5+alet2/7+alet3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((alet1/5+alet2/7+alet3/5)/3)*10)/6 >= 7 && (((alet1/5+alet2/7+alet3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	//agora serão mostrados os 3 escores e o indice geral para cada sexo
	printf("ESCORES E INDICE GERAL PARA OS SEXOS\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o sexo masculino.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",amas1/5);
	printf("escore 2: %i\n",amas2/7);
	printf("escore 3: %i\n",amas3/5);
	printf("indice geral: %i\n",(((amas1/5+amas2/7+amas3/5)/3)*10)/6);
	if((((amas1/5+amas2/7+amas3/5)/3)*10)/6 >= 0 && (((amas1/5+amas2/7+amas3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((amas1/5+amas2/7+amas3/5)/3)*10)/6 >= 4 && (((amas1/5+amas2/7+amas3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((amas1/5+amas2/7+amas3/5)/3)*10)/6 >= 7 && (((amas1/5+amas2/7+amas3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o sexo feminino.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",afem1/5);
	printf("escore 2: %i\n",afem2/7);
	printf("escore 3: %i\n",afem3/5);
	printf("indice geral: %i\n",(((afem1/5+afem2/7+afem3/5)/3)*10)/6);
	if((((afem1/5+afem2/7+afem3/5)/3)*10)/6 >= 0 && (((afem1/5+afem2/7+afem3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((afem1/5+afem2/7+afem3/5)/3)*10)/6 >= 4 && (((afem1/5+afem2/7+afem3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((afem1/5+afem2/7+afem3/5)/3)*10)/6 >= 7 && (((afem1/5+afem2/7+afem3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	//os 3 escores e o indice geral para cada faixa etaria
	printf("ESCORES E INDICE GERAL PARA CADA FAIXA ETARIA\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o idade entre 18 e 20.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",ajov1/5);
	printf("escore 2: %i\n",ajov2/7);
	printf("escore 3: %i\n",ajov3/5);
	printf("indice geral: %i\n",(((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6);
	if((((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 >= 0 && (((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 >= 4 && (((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 >= 7 && (((ajov1/5+ajov2/7+ajov3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para o idade entre 21 a 23.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",aadu1/5);
	printf("escore 2: %i\n",aadu2/7);
	printf("escore 3: %i\n",aadu3/5);
	printf("indice geral: %i\n",(((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6);
	if((((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 >= 0 && (((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 >= 4 && (((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 >= 7 && (((aadu1/5+aadu2/7+aadu3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice geral para a idade acima de 23.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",avel1/5);
	printf("escore 2: %i\n",avel2/7);
	printf("escore 3: %i\n",avel3/5);
	printf("indice geral: %i\n",(((avel1/5+avel2/7+avel3/5)/3)*10)/6);
	if((((avel1/5+avel2/7+avel3/5)/3)*10)/6 >= 0 && (((avel1/5+avel2/7+avel3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((avel1/5+avel2/7+avel3/5)/3)*10)/6 >= 4 && (((avel1/5+avel2/7+avel3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((avel1/5+avel2/7+avel3/5)/3)*10)/6 >= 7 && (((avel1/5+avel2/7+avel3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	printf("\n");
	printf("ESCORES E O INDICE GERAL DO TOTAL DE ESTUDANTES QUE FIZERAM A PESQUISA\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Os 3 escores e o indice para o total de estudantes.\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("escore 1: %i\n",con1/5);
	printf("escore 2: %i\n",con2/7);
	printf("escore 3: %i\n",con3/5);
	printf("indice geral: %i\n",(((con1/5+con2/7+con3/5)/3)*10)/6);
	if((((con1/5+con2/7+con3/5)/3)*10)/6 >= 0 && (((con1/5+con2/7+con3/5)/3)*10)/6 <= 3)
		printf("seu indice de propencao ao autoritarismo e: BAIXO\n");
	else if((((con1/5+con2/7+con3/5)/3)*10)/6 >= 4 && (((con1/5+con2/7+con3/5)/3)*10)/6 <= 6)
		printf("seu indice de propencao ao autoritarismo e: MODERADO");
	else if((((con1/5+con2/7+con3/5)/3)*10)/6 >= 7 && (((con1/5+con2/7+con3/5)/3)*10)/6 <= 10)
		printf("seu indice de propencao ao autoritarismo e: FORTE");
	
	
	getchar();
	return 0;
}
//essa é a função concordancia que retorna o nivel de concordancia para cada
//questão
int concordancia(int resp){
	int i = 0;
	while(true){
		switch(resp){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				printf("resposta invalida tente novamente!\n");
				printf("insira novamente sua resposta: \n");
				scanf("%i",&resp);
				break;
	};
		if(resp >= 1 && resp <= 6){
			i = resp;
			break;
		}
	}
	return i;
}

