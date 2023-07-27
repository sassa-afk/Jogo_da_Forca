	#include<stdio.h>
	#include <conio.h>
	#include <windows.h>
	#include <string.h>
	void carrega() {
	  int p;
	  for (p = 0; p < 3; p++) {
	    Sleep(500);
	    printf("\n\n    voltando ao menu principal * ");
	    system("cls");
	    Sleep(500);
	    printf("\n\n    voltando ao menu principal    * ");
	    Sleep(500);
	    system("cls");
	    printf("\n\n    voltando ao menu principal      *");
	    Sleep(500);
	  }
	  system("cls");
	}
	void sobre() {
	  system("cls");
	  printf("\n------------------------------------------------------------------------------------------------------------------------------------------------");
	  printf("\n  >> Jogo da forca com o obetivo de testar as habilidades de dedução do jogador e diversao   ");
	  printf("\n\n\n    O jogo foi desenvolvido em c visando uma boa pratica de programação no cod e recusos e metodos primairos da programação ");
	  printf("\n                                                                                                                                  ");
	  printf("\n :: Desenvolvido por: Samuel Souto dos Santos da  turma de Sistema da Informacao de segundo periodo da UNIUBE campos Uberlandia  - 2022                       ");
	  printf("\n :: Disciplina: Linguagens e Tecnicas de Programacao :)                                                                                              ");
	  printf("\n :: Professora: Luciene Chagas de Oliveira                                                                                                           ");
	  printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------");
	  printf("\n\n                       APERTE ENTER PARA VOLTAR");
	  getch();
	  system("cls");
	}
	void bem_vindo() {
	  printf("\n\n               BEM VINDO A FORCA \n\n");
	  int p;
	  system("color 3");
	  Sleep(600);
	  printf("                         []\n");
	  system("color 4");
	  Sleep(600);
	  printf("                         []\n");
	  system("color 5");
	  Sleep(600);
	  printf("                         []\n");
	  system("color 6");
	  Sleep(600);
	  printf("                         []\n");
	  system("color 7");
	  Sleep(600);
	  printf("                         [] \n");
	  system("color 8");
	  Sleep(600);
	  printf("                         []\n");
	  system("color 9");
	  Sleep(600);
	  printf("                        [::]\n");
	  system("color 0");
	  Sleep(600);
	  printf("                        [::] \n");
	  Sleep(600);
	  printf("                       [][][]\n");
	  Sleep(600);
	  system("color 1");
	  printf("                      []    []\n");
	  Sleep(600);
	  printf("                     []      []\n");
	  system("color 2");
	  Sleep(600);
	  printf("                    []        []\n");
	  system("color 3");
	  Sleep(600);
	  printf("                    []        []\n");
	  system("color 4");
	  Sleep(600);
	  printf("                    []        []\n");
	  system("color 5");
	  Sleep(600);
	  printf("                     []      []\n");
	  system("color 6");
	  Sleep(600);
	  printf("                      []    []\n");
	  system("color 7");
	  Sleep(600);
	  printf("                        [][]\n\n\n");
	  Sleep(600);
	  Sleep(2500);
	  printf(" ===========================================================\n");
	  printf("                >> BEM VINDO A FORCA << \n");
	  Sleep(3000);
	  printf(" ===========================================================\n\n");
	  printf("              PRESSIONE ENTER PARA INICIAR\n");
	  getch();
	  system("cls");
	}
	void forca1() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |      ('_')   \n");
	  printf("   |        \n");
	  printf("   |         \n");
	  printf("   |      \n");
	  printf("   |  \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void sair() {
	  printf("\n\n\n    >> OBRIGADO POR JOGAR NOSSO JOGO  << \n\n\n");
	  int o;
	  system("color 4F");
	  for (o = 0; o < 14; o++) {
	    printf(" ** ");
	    Sleep(200);
	  }
	}
	void trofeu() {
	  int lop;
	  for (lop = 0; lop < 2; lop++) {
	    printf("\n	    Parabens , voce acertou a palavra !\n\n");
	    Sleep(700);
	    system("color 1F");
	    printf("		      ______________      \n");
	    printf("		      '._==_==_=_.'     \n");
	    printf("		      .-\\:      /-.    \n");
	    Sleep(700);
	    system("color 2F");
	    printf("		     | (|:.     |) |    \n");
	    printf("		      '-|:.     |-'     \n");
	    printf("		        \\::.    /      \n");
	    Sleep(700);
	    system("color 3F");
	    printf("		         '::. .'        \n");
	    printf("		           ) (          \n");
	    Sleep(700);
	    system("color 4F");
	    printf("		         _.' '._        \n");
	    printf("		        '-------'       \n\n");
	    Sleep(700);
	    system("cls");
	  }
	  Sleep(1000);
	  system("cls");
	}
	void enforca() {
	  int m;
	  for (m = 0; m < 1; m++) {
	    printf("\n      >> Voce errou a palavra, enforcado!! << \n\n");
	    printf("    	           ______________         \n");
	    printf("		    /             \\       \n");
	    Sleep(700);
	    system("color 1F");
	    printf("		  /                 \\      \n");
	    printf("		//                  \\/\\  \n");
	    printf("		\\|   XXX       XXX   | /   \n");
	    printf("		      .-\\:      /-.    \n");
	    Sleep(700);
	    system("color 2F");
	    printf("		 |   XXX       XXX   |/     \n");
	    printf("		 |   XXX       XXX   |      \n");
	    printf("		 |                   |      \n");
	    Sleep(700);
	    system("color 3F");
	    printf("		 \\__      XXX     __/     \n");
	    printf("		   |\\     XXX     /|       \n");
	    printf("		   | |           |  |        \n");
	    Sleep(700);
	    system("color 4F");
	    printf("		   | I I II II I I |        \n");
	    printf("		   |  I III I II I |        \n");
	    printf("		   \\_            _/       \n");
	    Sleep(700);
	    system("color 5F");
	    printf("	   	      \\_       _/        \n");
	    printf("		        \\_____/           \n");
	    Sleep(1000);
	    system("cls");
	  }
	}
	void forca2() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |      ('_')   \n");
	  printf("   |       | |    \n");
	  printf("   |       | |   \n");
	  printf("   |           \n");
	  printf("   |          \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void forca3() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |      ('_')___   \n");
	  printf("   |       | |    \n");
	  printf("   |       | |   \n");
	  printf("   |           \n");
	  printf("   |          \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void forca4() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |   ___('_')___   \n");
	  printf("   |       | |    \n");
	  printf("   |       | |   \n");
	  printf("   |           \n");
	  printf("   |          \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void forca5() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |   ___(*_*)___   \n");
	  printf("   |       | |    \n");
	  printf("   |       | |   \n");
	  printf("   |          | \n");
	  printf("   |          | \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void forca6() {
	  printf("\n    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |   ___(* *)___   \n");
	  printf("   |       | |    \n");
	  printf("   |       | |   \n");
	  printf("   |      |   |\n");
	  printf("   |      |   | \n");
	  printf("   | \n");
	  printf("   | \n");
	}
	void desenhoforca() {
	  printf("    _______       \n");
	  printf("   |/      |      \n");
	  printf("   |            \n");
	  printf("   |        \n");
	  printf("   |         \n");
	  printf("   |      \n");
	  printf("   |  \n");
	  printf("   | \n");
	  printf("   | \n");

	}
	//================================
	void letra_repetida() {
	  system("cls");
	  printf("\n\n\n\n   ** OPS! Letra repetida, voce perdeu uma vida ** ");
	  printf("\n              PRESSIONE ENTER \n");
	  getch();
	  system("cls");
	}
	//================================
	//palavra errada
	void letra_erada() {
	  system("cls");
	  printf("\n\n\n\n   ** OPS! Letra errada, voce perdeu uma vida ** ");
	  printf("\n              PRESSIONE ENTER \n");
	  getch();
	  system("cls");
	}
	//===================================
	void ope_rrado_menu() {
	  system("cls");
	  printf("\n\n\n\n   ** OPS! Voce digitou uma opcao invalida ** ");
	  printf("\n             PRESSIONE ENTER \n");
	  getch();
	  system("cls");
	}
	//=================================
	//menu
	void menu() {
	  system("color 2F");
	  printf("_______________________");
	  printf("\n\n   MENU DO JOGO ");
	  printf("\n\n_______________________");
	  printf("\n\n >> [1] - JOGAR");
	  printf("\n >> [2] - INSTRUCOES");
	  printf("\n >> [3] - SOBRE");
	  printf("\n >> [4] - SAIR");
	  printf("\n\n\nDigite a opcao desejada : ");
	}
	//==================================
	// regra 1 
	void regras() {
	  int p = 0;
	  system("color 7F");
	  printf(" >> Bem Vindo a forca / Leia com atenção para sobreviver a forca !!!! <<  \n\n");
	  printf("Voce sera desafiado pela maquina e testara suas capacidades de dedução. Fique atento as regras \n");
	  Sleep(600);
	  printf("\n\n# 1 # O JOGADOR TEM APENAS 6 VIDAS POR NIVEL PARA TENTAR ACERTAR, CASO CONTRARIO SERA ENFORCADO ");
	  Sleep(600);
	  printf("\n\n# 2 # O JOGO FORNECERA 2 DICAS ");
	  Sleep(600);
	  printf("\n\n# 3 # O JOGO E COMPOSTO POR NIVEIS DO 1 ATE 15");
	  Sleep(600);
	  printf("\n\n# 4 # O JOGO RECONHECE APENAS LETRAS MINUSCULASÂ  ");
	  Sleep(600);
	  printf("\n\n# 5 # CASO UMA PALAVRA SEJA COMPOSTA E NECESSARIO INSERIR O CARACTER ' _ ' PARA SUBSTITUIR O ESPACO Â ");
	  Sleep(600);
	  printf("\n\n# 6 # NAO SEJA ENFORCADO, BOM JOGO  \n\n");
	  for (p = 0; p < 20; p++) {
	    Sleep(500);
	    printf(" ** ");
	  }
	  printf("\n                     ** PRESSIONE ENTER PARA CONTINUAR ** \n\n\n\n");
	  getch();
	  system("cls");
	}
	//================ Palavras ===================
	char ** palavras1() {
	  static char * palavras[12];
	  palavras[0] = "chuveiro";
	  palavras[1] = "esfirra";
	  palavras[2] = "sino";
	  palavras[3] = "caatinga";
	  palavras[4] = "galaxia";
	  palavras[5] = "manga";
	  palavras[6] = "desembargador";
	  palavras[7] = "pizzaiolo";
	  palavras[8] = "alpaca";
	  palavras[9] = "fliperama";
	  palavras[10] = "bacalhau";
	  palavras[11] = "percevejo";
	  return palavras;
	}
	char ** dica1() {
	  static char * dica_1[12];
	  dica_1[0] = "Dispositivo de metal ou plastico";
	  dica_1[1] = "Pastel de forno, de origem arabe";
	  dica_1[2] = "Produz som";
	  dica_1[3] = "Bioma brasileiro";
	  dica_1[4] = "Formam o Universo";
	  dica_1[5] = "E uma fruta";
	  dica_1[6] = "Trabalha na area da lei";
	  dica_1[7] = "Trabalha com massa";
	  dica_1[8] = "Animal da familia dos camelideos";
	  dica_1[9] = "Caixa de madeira ou material plastico";
	  dica_1[10] = "Animal aquatico";
	  dica_1[11] = "Inseto que se alimentam de sangue humano";
	  return dica_1;
	}
	char ** dica2() {
	  static char * dica_2[12];
	  dica_2[0] = "Tem pequenos orificios por onde a agua jorra em forma de jato ";
	  dica_2[1] = "Temperados com azeite e ervas, em quantidade moderada";
	  dica_2[2] = "Tem funcao basica a percussao e sinalizacao";
	  dica_2[3] = "Tem vegetacao com pouca folhas e adaptadas para os períodos de secas";
	  dica_2[4] = "Nome presente em filmes";
	  dica_2[5] = "Tipo fruta carnosa, pois tem polpa suculenta";
	  dica_2[6] = "Analisar as decisoes tomadas na primeira instancia de um julgamento";
	  dica_2[7] = "Mestre em comida italiana";
	  dica_2[8] = "Criado no Peru, Chile e na Bolivia";
	  dica_2[9] = "Utilizado para jogos eletronicos";
	  dica_2[10] = "Especies migratorias do genero Gadus, pertencente a familia Gadidae";
	  dica_2[11] = "As picadas podem causar varios impactos a saude";
	  return dica_2;
	}
	//+++++++++++++++++++++++++++++++ Função do jogo 
	int jogo(int posicao, char dados[2000], char dica1[2000], char dica2[2000]) {
	  int voltar = 0;
	  int seguir;
	  char palavra[2000] = "";
	  strcpy(palavra, dados);
	  char dica_1[2000] = "";
	  strcpy(dica_1, dica1);
	  char dica_2[2000] = "";
	  strcpy(dica_2, dica2);
	  char letra[21];
	  char armazena_acertos[21] = "--";
	  char letras_chutadas[21] = "--";
	  int i;
	  int vida = 0;
	  int acerto = 0;
	  int perde_vida = 0;
	  int erro = 0;
	  int ponto = 0;
	  while (voltar == 0) {
	    // IDENTIFICAÇÃO LETRAS CHUTADAS 
	    for (i = 0; i < strlen(palavra); i++) {
	      letras_chutadas[i] = '-';
	    }
	    // IDENTIFICAÇÃO LETRAS DA FORCA
	    for (i = 0; i < strlen(palavra); i++) {
	      armazena_acertos[i] = '-';
	    }
	    while (vida == 0) {
	      erro = 0; // reforçar saída do while
	      printf("================ NIVEL [ %d ] ===================\n", posicao);
	      printf("\n");
	      printf(">> Dica 1 - %s", dica_1);
	      printf("\n");
	      printf(">> Dica 2 - %s", dica_2);
	      printf("\n");
	      printf("\n## ULTIMA LETRA CHUTADA  %s ##", letras_chutadas);
	      printf("\n## VIDAS [%d] ## \n\n", (6 - perde_vida)); // conta as vidas na soma dentro do for
	      if ((6 - perde_vida) == 6) {
	        desenhoforca();
	      } else if ((6 - perde_vida) == 5) {
	        forca1();
	      } else if ((6 - perde_vida) == 4) {
	        forca2();
	      } else if ((6 - perde_vida) == 3) {
	        forca3();
	      } else if ((6 - perde_vida) == 2) {
	        forca4();
	      } else if ((6 - perde_vida) == 1) {
	        forca5();
	      } else if ((6 - perde_vida) == 0) {
	        forca6();
	      }
	      printf("   | %s", armazena_acertos);
	      printf("\n");
	      printf("\n insira a letra : ");
	      scanf("%s", & letra);
	      for (i = 0; i < strlen(palavra); i++) {
	        letras_chutadas[i] = letra[i]; // armazena letra chutada
	        if (letra[0] == palavra[i]) {
	          if (letra[0] == armazena_acertos[i]) {
	            letra_repetida();
	          } else {
	            system("cls");
	            armazena_acertos[i] = palavra[i]; // modificado
	            erro = 1;
	            acerto++;
	          }
	        }
	      }
	      if (acerto == strlen(palavra)) {
	        Sleep(3000);
	        system("cls");
	        trofeu();
	        vida = 6;
	        voltar = 6;
	        ponto = 1;
	        return ponto;
	      }
	      if (erro != 1) {
	        printf("\n >> LETRA ERRADA <<  ");
	        letra_erada();
	        perde_vida++;
	        if (perde_vida == 6) {
	          system("cls");
	          printf("\n ## (X_X) ## SUAS VIDAS ACABARAM, VOCE FOI ENFORCADO  ## (X_X) ##  ");
	          enforca();
	          system("cls");
	          vida = 6;
	          voltar = 6;
	          ponto = 0;
	          return ponto;
	        }
	      }
	    }
	    system("cls");
	  }
	}
	//----------------------------------------------------------------
	int main() {
	  bem_vindo();
	  system("cls");
	  char op;
	  int sairloop = 0;
	  while (sairloop == 0) {
	    menu();
	    scanf("%c", & op); // ler opÃ§Ã£o menu
	    //================  
	    if (op == '1') {
	      system("cls");
	      regras();
	      int ponto_total = 0;
	      int ponto = 0;
	      int posicao = 0;
	      char ** dica_1 = dica1();
	      char ** dica_2 = dica2();
	      char ** palavra = palavras1();
	      for (int i = 0; i < 12; i++) {
	        posicao++;
	        ponto = jogo(posicao, palavra[i], dica_1[i], dica_2[i]);
	        if (ponto == 1) {
	          ponto = ponto + i;
	        }
	      }
	      // ============================
	      system("cls");
	      printf(" >> Resultado final do jogo :\n\n>> Acertos %d das 12 palavras da forca\n\n", ponto_total);
	      printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------");
	      printf("\n\n                       APERTE ENTER PARA VOLTAR");
	      getch();
	      system("cls");
	      carrega();
	    } 
	    //================
	    else if (op == '2') {
	      system("cls");
	      regras();
	      carrega();
	    }
	    else if (op == '3') {
	      sobre();
	      carrega();
	    }
	    else if (op == '4') {
	      system("cls");
	      sairloop = 1;
	      sair();
	    }
	    //================
	    else {
	      ope_rrado_menu();
	    }
	  } 
	  getch();
	  return 0;
	}
