#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int con = 3; //inicia a variável de continue
int comeco (int a);

typedef struct personagem { //struct com os status dos personagens
    int  vida, cura;
    char *nome;
} Geral;

int menu (){
    int opcao;
    char ler;
    FILE *fp;

    system("cls");

    fp = fopen("menu.txt", "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
        }// imprimir lentamente
    }

    fclose(fp);

    printf("\n\n");

    do{
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 2){
            printf("ENTRADA INVÁLIDA!");
            fflush(stdin);
        }
        switch(opcao){
            case 1:
                comeco(1);
                break;
            case 2:
                printf("\nBem vindo a Scalys!\nEsse jogo é um rpg por turnos, ou seja, você escolherá uma opção a cada rodada.\nAtacar: O personagem tira dano do oponente, mas pode ocorrer miss click, ou seja, você não vai tirar dano.\nDefender: O seu personagem receberá dano reduzido, porém seu ataque também será reduzido.\nUsar poção:Você recupera a vida do personagem. Mas você tem um número limitado de poções por turno!\nBom jogo!\n");
                printf("\n\n");
                system("pause");
                printf("\nAgora que já entendeu, vamos começar. Digite 1\n");
                break;
        }
    }while(opcao != 1);

}

int gameover (){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(5);

    fp = fopen("over.txt", "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(5);
        }
    }
    fclose(fp);
    exit(0);
}

int comeco (int a){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("intro.txt", "r"); // abrir arquivo intro.txt

    if (fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){ //imprimir o conteúdo de intro na tela
        putchar(ler);
        delay(25);
        } // imprimir lentamente
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    printf("\n\n");

    fp = fopen("cena1.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
        putchar(ler);
        delay(25);
        }
    }

    printf("\n\n");

    fclose(fp);

    system("pause");

    return 0;
}

int boss1 (int b){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("lutagoku.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    textcolor(7);

    fp = fopen("goku.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            if (ler=='\n'){
                delay(80);
            }
        }
    }

    printf("\n\n----AALEY INVOCA GOKU----\n");

    fclose(fp);

    printf("\n\n");
    return 0;
}

int boss2 (int c){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("lutajoffrey.txt", "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    textcolor(7);

    fp = fopen("joffrey.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            if (ler=='\n'){
                delay(80);
            }
        }
    }

    printf("\n\n----AALEY INVOCA JOFFREY----\n");

    fclose(fp);

    printf("\n\n");
    return 0;
}

int boss3 (int d){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("lutajoker.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    textcolor(7);

    fp = fopen("joker.txt", "r");
    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            if (ler=='\n'){
                delay(80);
            }
        }
    }

    printf("\n\n----AALEY INVOCA JOKER----\n");

    fclose(fp);

    printf("\n\n");
    return 0;
}

int boss4 (int e){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("lutaloki.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    textcolor(7);

    fp = fopen("loki.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            if (ler=='\n'){
                delay(80);
            }
        }
    }

    printf("\n\n----AALEY INVOCA LOKI----\n");

    fclose(fp);

    printf("\n\n");
    return 0;
}

int boss5 (int f){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("lutaaaley.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");

    system("pause");

    textcolor(7);

    fp = fopen("aalys.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            if (ler=='\n'){
                    delay(80);
            }
        }
    }

    fclose(fp);

    printf("\n\n");
    return 0;
}

int batalha (int g, Geral *Nikolai, Geral* Vilao, int numerovilao){
    char ler;
    FILE *fp;
    int num, x, defesa, cura = 4, escolha;
    Nikolai->vida = 30 + g;

    textcolor(12);
    do{
        do{
            printf("Hora do show!! O que irá fazer?\n");
            printf("1 - Atacar.\n2 - Defender.\n3 - Usar poção.\n");
            do{
                scanf("%d", &num);
                fflush(stdin);
                if (num > 3 || num < 1)
                    printf("\nENTRADA INVÁLIDA\n");

                if (cura < 1 && num == 3){
                    num = -1;
                    printf("Aqui não é hospital, acabaram suas poções!\n");
                    printf("1 - Atacar.\n2 - Defender.\n3 - Usar poção.\n");
                }
            }while (num > 3 || num < 1);

            defesa = 0;

            switch (num){

                case 1: //nikolai tira vida do boss
                    x = rand() % 7;
                    Vilao->vida = Vilao->vida - x;
                    break;

                case 2: //dano do boss e nikolai na rodada é reduzido
                    x = rand() % 4;
                    defesa = x;
                    Vilao->vida = Vilao->vida - x;
                    break;

                case 3: //usa poção pra recuperar vida
                    Nikolai->vida = Nikolai->vida + Nikolai->cura;
                    cura--;
                    break;
            }

            if (Vilao->vida <= 0)
                Vilao->vida = 0;

            if (Vilao->vida <= 0){
                printf("\n%s está com: %d de vida!\n", Vilao->nome, Vilao->vida);
                printf("\nNikolai está com: %d de vida!\n", Nikolai->vida);
                system("pause");
                system("cls");
                fp = fopen("youwin.txt", "r");
                if (fp == NULL) {
                    printf("Erro na abertura do arquivo.\n");
                    exit(1);
                }
                else{
                    while ((ler=fgetc(fp))!= EOF ){
                        putchar(ler);
                        /*if (ler=='\n')
                        {
                            delay(1);
                        }*/
                    }
                }
                fclose(fp);
                printf("\n\n");
                system("pause");
                return 0;
            }

            //ataque do bossfinal - Aaley
            if (numerovilao == 5){
                x = rand() % 5;
                if (x != 0){
                    x = rand() % 8;
                    Nikolai->vida = Nikolai->vida - (x - defesa);
                }
                else{
                        Vilao->vida = Vilao->vida + Vilao->cura;
                }
            }
            else{
                x = rand() % 8;
                Nikolai->vida = Nikolai->vida - (x - defesa);
            }

            if (Nikolai->vida <= 0)
                Nikolai->vida = 0;

            printf("\n%s está com: %d de vida!\n", Vilao->nome, Vilao->vida);
            printf("\nNikolai está com: %d de vida!\n", Nikolai->vida);

            printf("\n");
            system ("pause");
            system("cls");
        }while ((Nikolai->vida > 0) && (Vilao->vida > 0));

        if (Vilao->vida <= 0){
            fp = fopen("youwin.txt", "r");
            if (fp == NULL){
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }
            else{
                while ((ler=fgetc(fp))!= EOF ){
                    putchar(ler);
                   /* if (ler=='\n')
                    {
                        delay(1);
                    }*/
                }
            }
            fclose(fp);
            printf("\n\n");
            system("pause");
        }

        else{
            if (con > 0)
            {
                printf ("Você morreu. Deseja continuar?\n1 - Sim\n2 - Não\n");
                do{
                    scanf ("%d", &escolha);
                    fflush(stdin);
                }while (escolha < 1 || escolha > 2);
                if (escolha == 2 || con < 1){
                    gameover();
                }
                else{
                    con--;
                    Nikolai->vida = 30 + g;
                }
            }
            else{
                printf("Você não tem mais nenhum continue.");
                    gameover();
            }
        }
    }while ((Nikolai->vida > 0) && (Vilao->vida > 0));

    return 0;
}

int epil (int h){
    char ler;
    FILE *fp;

    system("cls");

    textcolor(10);

    fp = fopen("epilogo.txt", "r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    else{
        while ((ler=fgetc(fp))!= EOF ){
            putchar(ler);
            delay(25);
        }
    }

    fclose(fp);

    printf("\n\n");
    return 0;
}

int main(void){
    int i;
    Geral **Personagens;

    setlocale(LC_ALL, "Portuguese");

    Personagens = (Geral**)malloc(6*sizeof(Geral*));        //Alocando o vetor de ponteiros
    for(i=0;i<6;i++){                                        //Percorrendo vetor de ponteiros
        Personagens[i] = (Geral*)malloc(sizeof(Geral));     //Alocando cada ponteiro para struct
    }

    Personagens[0]->cura = 13;
    Personagens[0]->nome = "Nikolai";
    Personagens[0]->vida = 30;

    Personagens[1]->nome = "Goku";
    Personagens[1]->vida = 40;

    Personagens[2]->nome = "Joffrey";
    Personagens[2]->vida = 55;

    Personagens[3]->nome = "Joker";
    Personagens[3]->vida = 65;

    Personagens[4]->nome = "Loki";
    Personagens[4]->vida = 80;

    Personagens[5]->cura = 5;
    Personagens[5]->nome = "Aaley";
    Personagens[5]->vida = 120;

    srand(time(NULL));//inicializa semente

    textcolor(3); //mudar cor do texto bib conio.h//

    printf("            ___           ___           ___           ___       ___           ___   \n");
    printf("           /\\  \\         /\\  \\         /\\  \\         /\\__\\     |\\__\\         /\\  \\             \n");
    printf("          /::\\  \\       /::\\  \\       /::\\  \\       /:/  /     |:|  |       /::\\  \\                \n");
    printf("         /:/\\ \\  \\     /:/\\:\\  \\     /:/\\:\\  \\     /:/  /      |:|  |      /:/\\ \\  \\           \n");
    printf("        _\\:\\~\\ \\  \\   /:/  \\:\\  \\   /::\\~\\:\\  \\   /:/  /       |:|__|__   _\\:\\~\\ \\  \\     \n");
    printf("-*-*-  /\\ \\:\\ \\ \\__\\ /:/__/ \\:\\__\\ /:/\\:\\ \\:\\__\\ /:/__/        /::::\\__\\ /\\ \\:\\ \\ \\__\\   -*-*-\n");
    printf("       \\:\\ \\:\\ \\/__/ \\:\\  \\  \\/__/ \\/__\\:\\/:/  / \\:\\  \\       /:/~~/~    \\:\\ \\:\\ \\/__/  \n");
    printf("        \\:\\\ \\:\\__\\    \\:\\  \\            \\::/  /   \\:\\  \\     /:/  /       \\:\\ \\:\\__\\      \n");
    printf("         \\:\\/:/  /     \\:\\  \\           /:/  /     \\:\\  \\    \\/__/         \\:\\/:/  /             \n");
    printf("          \\::/  /       \\:\\__\\         /:/  /       \\:\\__\\                  \\::/  /                  \n");
    printf("           \\/__/         \\/__/         \\/__/         \\/__/                   \\/__/                      \n");


    system("pause"); //espera entrada do usuario pra continuar o programa

    menu();

    boss1(1);
        system("pause");
        batalha(0,Personagens[0],Personagens[1],1);

    boss2(1);
        system("pause");
        batalha(10,Personagens[0],Personagens[2],2);

    boss3(1);
        system("pause");
        batalha(20,Personagens[0],Personagens[3],3);

    boss4(1);
        system("pause");
        batalha(30,Personagens[0],Personagens[4],4);

    boss5(1);
        system("pause");
        batalha(50,Personagens[0],Personagens[5],5);

    epil(1);
}
