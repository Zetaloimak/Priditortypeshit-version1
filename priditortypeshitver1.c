#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void player();

void print(char* text, int delay_ms) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        Sleep(delay_ms);
    }
}

void kao()
{
    int op;
    char name[] = "\n123456789\n:";
    print(name, 50);
    scanf("%d", &op);
    if (op == 21) {
        printf("fucling kao\noh my friend");
        for (int i = 0; i <= 123; i++)
        {
            printf("kuy kao =p\n");
        }
    }
    else {
        printf("hello world");
    }
}

void kop()
{
    char stdui[] = "\nhello\n this time I wanna announcement\nthat in 11/5/26\nI will did'nt touch program that much(still be programmer!!)\nbout 3-6 mount\nor till school end term\nyou can see me after friday";
    char dent[] = " or random day\nTHX FOR ALOT SUPPORT!!\n\nI still programmer\nZeta\n\nLove FC<3";
    printf("hello world!!");
    print(stdui, 40);
    print(dent, 40);
}

void pok()
{
    int a;
    scanf("%d", &a);
    while (1) {
        printf("\nhello world!!");
        if (a == 1742) {
            printf("non mode activide");
            for (int i = 1; i <= 60; i++) {
                printf("\nHUNTER I NA HEE\n");
            }
            printf("\nthx");
            break;
        }
        else {
            break;
        }
    }
}

void focusauan()
{
    char focus[] = "เค้ารักเธอรู้ไหม";
    print(focus, 40);
}


void opensever()
{
    float o, p;
    printf("hello world\n");
    Sleep(1000);
    printf("1.0version");
    printf("\ninput a :");
    scanf("%f", &o);
    printf("intput b :");
    scanf("%f", &p);
    printf("Sum : %f", o + p);
}

void minus()
{
    float l, i;
    printf("hello world\n");
    Sleep(1000);
    printf("1.0version");
    printf("\ninput a :");
    scanf("%f", &l);
    printf("intput b :");
    scanf("%f", &i);
    printf("Sum : %f", l - i);
}

void multiply()
{
    float z, f;
    printf("hello world\n");
    Sleep(1000);
    printf("1.0version");
    printf("\ninput a :");
    scanf("%f", &z);
    printf("intput b :");
    scanf("%f", &f);
    printf("Sum : %f", z * f);
}

void openser()
{
    int choic;
    printf("\nwhat your sever?\n1.sum\n2.minus\n3.multiply\n:");
    scanf("%d", &choic);
    if (choic == 1) {
        opensever();
    }
    else if (choic == 2) {
        minus();
    }
    else if (choic == 3) {
        multiply();
    }
}

void liftoff()
{
    int open;
    char lif[] = "\nhello world\nopen sever?\n1.yes\n2.no";
    char ope[] = "\nopen sever!!\n";
    char cancel[] = "\nclose sever!!!!\n";
    print(lif, 40);
    scanf("%d", &open);
    if (open == 1) {
        print(ope, 40);
    }
    else {
        print(cancel, 40);
    }
}

void penfan()
{
    char fan[50];
    int i = 0;
    char sad[50];
    printf("\nเป็นแฟนกันมั้ย :)");
    scanf("%s", fan);
}

void t_aek()
{
    char aek[] = "\nhello\nhow are you\ngood?";
    print(aek, 40);
}

void thelastan(){
    printf("Hello world");
    char poen[] = "hello every one\nI wanna announcement\nthat the priditortypeshit Ver1.0 will not be anble to use at\n1/1/27\nWe will swicth it to python version that name\npriditortypeshit\nVer1.5\n";
    char thank[] = "thank for a lot of support\n''and make this program a legend''\nLove fc <3";
    print(poen, 40);
    print(thank, 40);
}

void student()
{
    char lop[20];
    while (1) {
        char top[] = "\nPr1diT0r7typeShit\n;;2569;;\nVER:1.0\nwhat your service sir?\n:";
        char by[] = "\nbye bye\n";
        print(top, 40);
        scanf("%s", lop);
        if (strcmp(lop, "sever,iop.sss") == 0) {
            liftoff();
        }
        else if (strcmp(lop, "cls''") == 0) {
            print(by, 40);
            break;
        }
        else if (strcmp(lop, "an.213") == 0) {
            kop();
        }
        else if (strcmp(lop, "hunter") == 0) {
            pok();
        }
        else if (strcmp(lop, "kao") == 0) {
            kao();
        }
        else if (strcmp(lop, "firstcode") == 0) {
            openser();
        }
        else if (strcmp(lop, "howwasyourday") == 0) {
            player();
        }
        else if (strcmp(lop, "fan") == 0) {
            penfan();
        }
        else if (strcmp(lop, "test.test") == 0) {
            t_aek();
        }
        else if (strcmp(lop, "luvfan") == 0) {
            focusauan();
        }else if (strcmp(lop, "legend") == 0){
            thelastan();
        }
    }

}

void player()
{
    int luv;
    char day[4];
    printf("\nsev??\n:");
    scanf("%d", &luv);
    if (luv == 1742) {
        printf("\nyou're dev\nhello dev\n");
        printf("\nhow was your day\n");
        scanf("%s", day);
        if (strcmp(day, "good") == 0) {
            printf("\ngood=)");
        }
        else {
            printf("\nyou will have it keep going =)\n");
        }
    }
}

void ip()
{
    int b;
    char h[] = "you survive just once\nMe f -f -f -=f fuck U\nWhat do u mean fuck?\n";
    char l[] = "\ngo niga!!\n";
    char o[] = "\nthis is not goonig good\nwhy?\nStop this long intro\nTAKE IT IN GAME\n";
    char intro[] = "\nhh ah hah ah hah(*now run)\nYOU GOT HUNTER CHOOSE NUM\nME : F---- Fuck\n";
    for (int i = 0; i < 3; i++) {
        printf(".");
        Sleep(100);
    }
    print(intro, 40);
    scanf("%d", &b);
    if (b >= 0) {
        print(h, 40);
        for (int i = 0; i < 4; i++) {
            print(l, 40);
        }
        print(o, 40);
        student();
    }
    else if (b == -1) {
        student();
    }
}

void gameintro()
{
    int a;
    char world[] = "Unknow FOREST\n;;HW\nh..h.....\nwhere am I?";
    char hello[] = "\nme : i don't know?\n,......Who are you??\n1Run\nd!@(Ehe8@!19udqa()dwdH22=dke@-3l--P\n:";
    print(world, 40);
    Sleep(1000);
    print(hello, 40);
    scanf("%d", &a);
    if (a == 1) {
        ip();
    }
    else {
        ip();
    }
}

int main()
{
    char gamestdio[] = "=======\n game studio.h\n  =======\n";
    char loading[] = "loading";
    char dev[] = "Dev : Zetaloimak\nLove FC <3";
    print(gamestdio, 40);
    printf("hello world\n");
    Sleep(1000);
    print(loading, 40);
    for (int i = 0; i < 4; i++) {
        printf(".");
        Sleep(1000);
    }
    Sleep(1000);
    printf("\nload complete\n");
    Sleep(1000);
    print(dev, 40);
    gameintro();
}