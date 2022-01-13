/*=================================================================================
 ╔═════╗  ╔═════╗ ╔═╗     ╔═════╗ ╔════╗ ╔════╗ ╔═══╗ ╔═════╗ ╔═══╗ ╔═════╗ ╔═╗
 ║ ╔═╗ ║  ║ ╔═╗ ║ ║ ║     ║ ╔═╗ ║ ║ ╔══╝ ║ ╔══╝ ╚╣ ╠╝ ║ ╔═╗ ║ ╚╣ ╠╝ ║ ╔═╗ ║ ║ ║
 ║ ╚═╝ ╚╗ ║ ║ ║ ║ ║ ║     ║ ║ ║ ║ ║ ╚══╗ ║ ╚══╗  ║ ║  ║ ║ ╚═╝  ║ ║  ║ ║ ║ ║ ║ ║
 ║ ╔══╗ ║ ║ ║ ║ ║ ║ ║ ╔═╗ ║ ║ ║ ║ ║ ╔══╝ ║ ╔══╝  ║ ║  ║ ║ ╔═╗  ║ ║  ║ ╚═╝ ║ ║ ║ ╔═╗
 ║ ╚══╝ ║ ║ ╚═╝ ║ ║ ╚═╝ ║ ║ ╚═╝ ║ ║ ║    ║ ║    ╔╣ ╠╗ ║ ╚═╝ ║ ╔╣ ╠╗ ║ ╔═╗ ║ ║ ╚═╝ ║
 ╚══════╝ ╚═════╝ ╚═════╝ ╚═════╝ ╚═╝    ╚═╝    ╚═══╝ ╚═════╝ ╚═══╝ ╚═╝ ╚═╝ ╚═════╝
 ================================= NUMBER v1.0.1 ==================================
 ____________________________ property of BOLOFFICIAL _____________________________
 _________________________________ on 15.12.2021 __________________________________
 ==================================================================================*/
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void MENU();
void PLAY(int &BEGIN,int &END,int &LIVES);
void SETTINGS(int &BEGIN,int &END,int &LIVES);
void OWN(int &BEGIN,int &END,int &LIVES);
void RULES();
//"123456789|123456789|123456789|123456789|123456789|123456789|"
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    string main_menu;
    int BEGIN=0,END=50,LIVES=5;
    while(true){
            //"123456789|123456789|123456789|123456789|123456789|123456789|"
        cout<<"+------------------------------------------+"<<endl;
        cout<<"|                  NUMBER                  |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
        cout<<"|  1)ИГРАТЬ 2)НАСТРОЙКИ 3)ПРАВИЛА 4)ВЫХОД  |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
        while(true){
            cout<<"|>";
            cin>>main_menu;
            if((main_menu=="1")||
               (main_menu=="2")||
               (main_menu=="3")||
               (main_menu=="4")||
               (main_menu=="ИГРАТЬ")||
               (main_menu=="НАСТРОЙКИ")||
               (main_menu=="ПРАВИЛА")||
               (main_menu=="ВЫХОД"))
            {break;}
            else{
                    //"123456789|123456789|123456789|123456789|123456789|123456789|"
                cout<<"+------------------------------------------+"<<endl;
                cout<<"|Принимаются ответы:                       |"<<endl;
                cout<<"+------------------------------------------+"<<endl;
                cout<<"| 1 или ИГРАТЬ                             |"<<endl;
                cout<<"| 2 или НАСТРОЙКИ                          |"<<endl;
                cout<<"| 3 или ПРАВИЛА                            |"<<endl;
                cout<<"| 4 или ВЫХОД                              |"<<endl;
            }
        }
        if((main_menu=="1")||(main_menu=="ИГРАТЬ")){PLAY(BEGIN,END,LIVES);}
        if((main_menu=="2")||(main_menu=="НАСТРОЙКИ")){SETTINGS(BEGIN, END, LIVES);}
        if((main_menu=="3")||(main_menu=="ПРАВИЛА")){RULES();}
        if((main_menu=="4")||(main_menu=="ВЫХОД"))
        {
            cout<<"Завершение программы"<<endl;
            break;
        }
    }
}
void MENU(){
    string rules;
        //"123456789|123456789|123456789|123456789|123456789|123456789|"
    cout<<"+------------------------------------------+"<<endl;
    cout<<"|1)ВЫЙТИ В МЕНЮ                             "<<endl;
    while(true){
        cout<<"|>";
        cin>>rules;
        if((rules=="1")||(rules=="МЕНЮ")){
            break;
        }
                 //"123456789|123456789|123456789|123456789|123456789|123456789|"
        else{
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|Принимаются ответы:                       |"<<endl;
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|1 или МЕНЮ                                 "<<endl;
        }
    }
}
void RULES(){
        //"123456789|123456789|123456789|123456789|123456789|123456789|"
    cout<<"+------------------------------------------+"<<endl;
    cout<<"|                  ПРАВИЛА                 |"<<endl;
    cout<<"+----------+-------------------------------+"<<endl;
    cout<<"|Суть игры:| Программа загадывает число,   |"<<endl;
    cout<<"|          | а игрок должен его отгадать.  |"<<endl;
    cout<<"|          | Для этого ему дается несколько|"<<endl;
    cout<<"|          | попыток. Количество попыток   |"<<endl;
    cout<<"|          | и диапазон чисел задается в   |"<<endl;
    cout<<"|          | настройках.По умолчанию:      |"<<endl;
    cout<<"|          | Диапазон чисе:(0-50)          |"<<endl;
    cout<<"|          | Количество попыток: 5         |"<<endl;
    cout<<"+----------+-------------------------------+"<<endl;
    cout<<"|СЛОЖНОСТИ:| 1)easy    4)hard              |"<<endl;
    cout<<"|          | 2)normal  5)impossible        |"<<endl;
    cout<<"|          | 3)medium  6)own               |"<<endl;
    MENU();
}
void SETTINGS(int &BEGIN,int &END,int &LIVES){
    string selection;
        //"123456789|123456789|123456789|123456789|123456789|123456789|"
    cout<<"+------------------------------------------+"<<endl;
    cout<<"|                 НАСТРОЙКИ                |"<<endl;
    cout<<"+----------+-------------------------------+"<<endl;
    cout<<"|СЛОЖНОСТИ:| 1)easy       (0-50|5)         |"<<endl;
    cout<<"|          | 2)normal     (0-100|5)        |"<<endl;
    cout<<"|          | 3)medium     (0-200|5)        |"<<endl;
    cout<<"|          | 4)hard       (0-500||7)       |"<<endl;
    cout<<"|          | 5)impossible (0-1000|7)       |"<<endl;
    cout<<"|          | 6)own                         |"<<endl;
    while(true){
        cout<<"|>";
        cin>>selection;
        if((selection=="1")||
           (selection=="2")||
           (selection=="3")||
           (selection=="4")||
           (selection=="5")||
           (selection=="6")||
           (selection=="easy")||
           (selection=="normal")||
           (selection=="medium")||
           (selection=="hard")||
           (selection=="impossible")||
           (selection=="own")
           ){
            break;
        }
        else{
                //"123456789|123456789|123456789|123456789|123456789|123456789|"
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|Принимаются ответы:                       |"<<endl;
            cout<<"+------------------------------------------+"<<endl;
            cout<<"| 1 или easy                               |"<<endl;
            cout<<"| 2 или normal                             |"<<endl;
            cout<<"| 3 или medium                             |"<<endl;
            cout<<"| 4 или hard                               |"<<endl;
            cout<<"| 5 или impossible                         |"<<endl;
            cout<<"| 6 или own                                |"<<endl;
        }
    }
    if((selection=="1")||(selection=="easy"      )){ BEGIN = 0; END = 50;  LIVES = 5;}
    if((selection=="2")||(selection=="normal"    )){ BEGIN = 0; END = 100; LIVES = 5;}
    if((selection=="3")||(selection=="medium"    )){ BEGIN = 0; END = 200; LIVES = 5;}
    if((selection=="4")||(selection=="hard"      )){ BEGIN = 0; END = 500; LIVES = 7;}
    if((selection=="5")||(selection=="impossible")){ BEGIN = 0; END = 1000; LIVES = 7;}
    if((selection=="6")||(selection=="own"       )){OWN(BEGIN, END, LIVES);}
    MENU();
}
void OWN(int &BEGIN,int &END,int &LIVES){
    cout<<"|ВВЕДИТЕ НАЧАЛО ДИАПАЗОНА: ";
    while(true){
        cin>>BEGIN;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        if((BEGIN>-9999999)&&(BEGIN<9999999)){break;}
        else{
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|ВВЕДИТЕ ЧИСЛO от -9999999 и до 99999999   |"<<endl;
            cout<<"+------------------------------------------+"<<endl;
        }
    }
    cout<<"|ВВЕДИТЕ КОНЕЦ ДИАПАЗОНА: ";
    while(true){
        cin>>END;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        if((END>BEGIN)&&(END<9999999)){break;}
        else{
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|ВВЕДИТЕ ЧИСЛO до 99999999 и больше начала |"<<endl;
            cout<<"+------------------------------------------+"<<endl;
        }
    }
    cout<<"|ВВЕДИТЕ КОЛИЧЕСТВО ПОПЫТОК: ";
    while(true){
        cin>>LIVES;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        if((LIVES>0)&&(LIVES<9999999)){break;}
        else{
            cout<<"+------------------------------------------+"<<endl;
            cout<<"|ВВЕДИТЕ ЧИСЛO до 99999999                 |"<<endl;
            cout<<"+------------------------------------------+"<<endl;
        }
    }
}
void PLAY(int &BEGIN,int &END,int &LIVES){
    if((END==50)||(END==100)||(END==200)){LIVES=5;}
    if((END==500)||(END==1000)){LIVES=7;}
    int NUMBE=0;
    int ans=0;
    int score=0;
    while(true){
        NUMBE=BEGIN+rand()%END;
        if((NUMBE>(BEGIN-1))||(NUMBE<(END+1))){break;}
    }
    cout<<"+------------------------------------------+"<<endl;
    cout<<"|                    ИГРА                  |"<<endl;
    cout<<"+---------------+--------------------------+"<<endl;
    cout<<"|НАСТРОЙКИ ИГРЫ |МИНИМАЛЬНОЕ ЧИСЛО:"<<BEGIN<<endl;
    cout<<"|               |МАКСИМАЛЬНОЕ ЧИСЛО:"<<END<<endl;
    cout<<"|               |КОЛИЧЕСТВО ЖИЗНЕЙ:"<<LIVES<<endl;
    cout<<"+---------------+--------------------------+"<<endl;
    cout<<"|КАК ТЫ ДУМАЕШЬ КАКОЕ ЧИСЛО Я ЗАГАДАЛ?     |"<<endl;
    cout<<"+------------------------------------------+"<<endl;
    while(true){
        cout<<"|Я ДУМАЮ ЭТО ";
        cin>>ans;
        if(ans!=NUMBE){
            LIVES--;
            
            if(ans>NUMBE){cout<<"| <МЕНЬШЕ> ";}
            else{cout<<"| <БОЛЬШЕ> ";}
            cout<<"ОСТАЛОСЬ "<<LIVES<<" ЖИЗНЕЙ"<<endl;
            cout<<"|"<<endl;
        }
        if((ans==NUMBE)||(LIVES==0)){break;}
    }
    score = END - (END-LIVES);
    cout<<    "+------------------------------------------+"<<endl;
    if(ans==NUMBE){
        cout<<"|Поздравляю с победой                      |"<<endl;
    }
    else{cout<<"|LOSER я загадал число:"<<NUMBE<<endl;}
    MENU();
}
