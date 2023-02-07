#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <windows.h>
#include <ctime>


using namespace std ;

void print_avalieh();
void entekhab_zaban();
void menu_e();
void Guide_line_e();
void start_e();
void tp4c_e();
void tpc2_e();
void tpc2_p();
void menu_p();
void start_p();
void Guide_line_p();
void tp4c_p();
void data ();


clock_t start;//timer
double duration;//timer
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//color
//SetConsoleTextAttribute(h, 0xf); // range khat mamoli


int main (void)
{
    // by not today
    print_avalieh() ;
    return 0 ;
}
void data()
{
    SetConsoleTextAttribute(h, 0xf);
    time_t ttime = time(0);
    char* dt = ctime(&ttime);
    cout << "          "<<char(201);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(187)<<endl;
    cout <<"                       "<<dt;
    cout<<"          "<<char(200);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(188);
    cout << endl;


}
void menu_e()
{
    short choose ;
    cout << endl;
    cout << "1.Start\n" ;
    cout << "2.Guide line \n" ;
    cout << "3.Exit \n" ;
    cout << "Enter number : ";
    cin >> choose ;
    if(choose==1)
    {
        start_e();
    }
    if(choose==2)
    {
        Guide_line_e();
    }
    if(choose==3)
    {
        short a ;
        cout << "Are you sure ?\n" ;
        cout << "1.Yes \n" ;
        cout << "2.No \n" ;
        cin >> a ;
        if(a==1)
        {
            SetConsoleTextAttribute(h, 0x4);
            cout << "                            " << char(3) ;
            SetConsoleTextAttribute(h, 0xf);
            cout << "  GOOD BYE  " ;
            SetConsoleTextAttribute(h, 0x4);
            cout << char(3) << endl ;
            SetConsoleTextAttribute(h, 0xf);
            Sleep(5000);
            exit(0) ;
        }
        if(a==2)
        {
            menu_e();
        }
    }
    else
    {
        SetConsoleTextAttribute(h, 0x6);
        cout << "Wrong order" << endl ;
        SetConsoleTextAttribute(h, 0xf);
        menu_e();
    }
}
void print_avalieh()
{
    SetConsoleTextAttribute(h, 0xd);
    cout << "          "<<char(201);
    for(int i=0 ; i<60  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(187)<<endl;
    cout <<"                                    "<<"QUORIDOR"<<endl;
    cout<<"                                  "<<"[ NOT TODAY ]"<<endl;
    cout<<"          "<<char(200);
    for(int i=0 ; i<60  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(188)<<endl;
    SetConsoleTextAttribute(h, 0x2);
    Sleep(2000);
    cout <<"                              x     Roya salehi    x " << endl ;
    Sleep(2000);
    cout <<"                            x      Hossein aghaei    x  " << endl ;
    Sleep(2000);
    cout <<"                          x    Mohammad kazem harandi   x  " << endl ;
    Sleep(2000);
    SetConsoleTextAttribute(h, 0xf);
    entekhab_zaban();
}
void Guide_line_e()
{
    cout << endl;
    SetConsoleTextAttribute(h, 0x9);
    cout << "\aWelcome to DALIZ game! \n";
    cout << "before starting a game you should pay attention to guide \n";
    cout << "this game run in board that like below board(below board is smaller than main board)\n \n";
    cout << "  1  2  3  4  5  6  7  8  9  \n";
    cout << "  .     .     .     .     .  a\n";
    cout << "                             b\n";
    cout << "  .     .     .     .     .  c\n";
    cout << "                             d\n";
    cout << "  .     .     .     .     .  e\n";
    cout << "                             f\n";
    cout << "  .     .     .     .     .  g\n";
    cout << "                             i\n";
    cout << "  .     .     .     .     .  h\n\n";
    cout << "1.you must move your nuts only on periods \n";
    cout << "periods are in odd row and odd column \n\n";
    cout << "2.you must put your walls on spaces\n\n";
    cout << "3.your wall must cover two reriods\n\n";
    cout << "4.odd columns are :a,c,e,g,h,...\n\n";
    cout << "5.mechanism of put the walls:\n";
    cout << "first you should select a house then select of its direction \n\n";
    cout << "6.the game will ended when on of players put his nut in bottom period that in his direction/n";
    cout << "7.some hints are typed in each part of game.please pay aention them!\n\n";
    cout << "8.in (four players classic)game,game is started with upper nut,then the turn will rotate to the left\n\n";
    cout << "9.if you want read main rule of game please go to this address \n";
    cout << "https://hoopagames.ir/wp-content/uploads/2021/12/Daliz-Guide-booklet-R3-09.pdf\n";
    cout <<"GOOD luck\n\n";
    SetConsoleTextAttribute(h, 0xf);
    menu_e();
}
void entekhab_zaban()
{
    cout << endl;
    short a ;
    SetConsoleTextAttribute(h, 0xf);
    cout << "choose your language / zaban mored nazar ra entekhab konid \n" ;
    cout << "1.English \n" ;
    cout << "2.Persian \n" ;
    cout << "Enter number : ";
    cin >> a ;
    if (a==1)
    {
        menu_e();
    }
    if (a==2)
    {
        menu_p();
    }
    else
    {
        SetConsoleTextAttribute(h, 0x6);
        cout << "Wrong order" << endl ;
        SetConsoleTextAttribute(h, 0xf);
        entekhab_zaban();
    }

}
void start_e()
{
    cout << endl ;
    short b ;
    SetConsoleTextAttribute(h, 0xf);
    cout << "Which kind of daliz game do you want to play?\n" ;
    cout << "1.Two players classic 2x \n" ;
    cout << "2.Four players classic \n" ;
    cout << "3.Back \n" ;
    cout << "Enter number : " ;
    cin >> b ;
    if (b==1)
    {
        tpc2_e();
    }
    if (b==2)
    {
        tp4c_e();
    }
    if (b==3)
    {
        menu_e();
    }
    else
    {
        SetConsoleTextAttribute(h, 0x6);
        cout << "Wrong order" << endl ;
        SetConsoleTextAttribute(h, 0xf);
        start_e();
    }
}
int chek_divar(char md[17][18] , char i , int j , short a)
{
    short ret = 0 ;
    if(a==1)
    {
        if (md[int(i-1)][j] == char(196))
        {
            ret = 1 ;
        }
    }
    if(a==2)
    {
        if (md[int(i+1)][j] == char(196))
        {
            ret = 1 ;
        }
    }
    if(a==3)
    {
        if (md[int(i)][j+1] == '|')
        {
            ret = 1 ;
        }
    }
    if(a==4)
    {
        if (md[int(i)][j-1] == '|')
        {
            ret = 1 ;
        }
    }
    return ret ;
}
void wall (char md[17][18] ,  char i2 , int j2 , short jahat)
{
    if(jahat==1)
    {
        md[int(i2-2)][j2]=char(124);
        md[int(i2)][j2]=char(124);
        md[int(i2-1)][j2]=char(124);
    }
    if(jahat==2)
    {
        md[int(i2+2)][j2]=char(124);
        md[int(i2)][j2]=char(124);
        md[int(i2+1)][j2]=char(124);
    }
    if(jahat==3)
    {
        md[int(i2)][j2+2]=char(196);
        md[int(i2)][j2]=char(196);
        md[int(i2)][j2+1]=char(196);
    }
    if(jahat==4)
    {
        md[int(i2)][j2-2]=char(196);
        md[int(i2)][j2]=char(196);
        md[int(i2)][j2-1]=char(196);
    }
}
void printv2 (char * p , int r , int c , int d1 , int d2 , int d3 , int d4)
{
    system ("cls") ;
    data ();
    cout << "          "<<char(201);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(187)<<endl;
    cout <<"                       Operation took "<< duration << " seconds"<<endl;
    cout<<"          "<<char(200);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(188);


    cout << endl ;
    SetConsoleTextAttribute(h, 0x2);
    cout << endl <<char(5)<<"  ";
    for (int z = 0 ; z < d1 ; z++)
    {
        cout << char(222) << "   " ;
    }
    SetConsoleTextAttribute(h, 0xc);
    cout<<"               "<<char(3)<<"  ";
    for (int z = 0 ; z < d2 ; z++)
    {
        cout << char(222) << "   " ;
    }
    SetConsoleTextAttribute(h, 0xf);
    cout << endl <<endl ;
    int a=1;
    cout<<"   ";
    for(int i=0 ; i<9 ; i++)
    {
        cout<<a<<"   ";
        a++;
    }
    for(int i=9 ; i<17 ; i++)
    {
        cout<<a<<"  ";
        a++;
    }
    cout<<endl;
    cout<<endl;
    for(int i = 0 ; i < r ; i++)
    {
        cout << "   " ;
        for (int j = 0 ; j < c ; j++)
        {
            if (*(p+i * c+j)== char(5))
            {
                SetConsoleTextAttribute(h, 0x2);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(3))
            {
                SetConsoleTextAttribute(h, 0xc);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(6))
            {
                SetConsoleTextAttribute(h, 0x5);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(4))
            {
                SetConsoleTextAttribute(h, 0x3);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(196)||*(p+i * c+j)== char(124))
            {
                SetConsoleTextAttribute(h, 0x6);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else
            {
                cout << *(p+i * c+j) << "   " ;
            }
        }
        cout << endl ;
        cout << endl ;
    }
    SetConsoleTextAttribute(h, 0x5);
    cout << endl << endl<<char(6)<<"  ";
    for (int z = 0 ; z < d3 ; z++)
    {
        cout << char(222) << "   " ;
    }
    SetConsoleTextAttribute(h, 0x3);
    cout<<"               "<<char(4)<<"  ";
    for (int z = 0 ; z < d4 ; z++)
    {
        cout << char(222) << "   " ;
    }
    SetConsoleTextAttribute(h, 0xf);
    cout << endl <<endl ;
}
int chek_kheft(char md[17][18] , char i ,int j )
{
    short t1=0;
    short t2=0;
    bool check=false;

    if(i%2==1)
    {
        for (int jt = 0 ; jt < 17 ; jt+=2 )
        {
            if (md[int(i)][jt] ==char(32) )
                t1 ++;
        }
    }
    if (t1>=2)
    {
        check = true;
    }
    if(j%2==1)
    {
        for (int it = 0 ; it < 17 ; it+=2 )
        {
            if (md[int(it)][j] ==char(32) )
                t2++;
        }
    }
    if (t2>=2)
    {
        check = true;
    }
    return check ;
}
void tagir_mohre(char md[17][18] , char i , int j , short a)
{
    if (a==1)
    {
        swap(md[int(i)][j] , md[i-2][j]) ;
    }
    if (a==2)
    {
        swap(md[int(i)][j] , md[i+2][j]) ;
    }
    if (a==3)
    {
        swap(md[int(i)][j] , md[int(i)][j+2]) ;
    }
    if (a==4)
    {
        swap(md[int(i)][j] , md[int(i)][j-2]) ;
    }
    if(a==5)
    {
        swap(md[int(i)][j] , md[int(i-2)][j+2]);
    }
    if(a==6)
    {
        swap(md[int(i)][j] , md[int(i-2)][j-2]);
    }
    if(a==7)
    {
        swap(md[int(i)][j] , md[int(i+2)][j-2]);
    }
    if(a==8)
    {
        swap(md[int(i)][j] , md[int(i+2)][j+2]);
    }
    if(a==9)
    {
        swap(md[int(i)][j] , md[int(i-4)][j]);
    }
    if(a==10)
    {
        swap(md[int(i)][j] , md[int(i+4)][j]);
    }
    if(a==11)
    {
        swap(md[int(i)][j] , md[int(i)][j-4]);
    }
    if(a==12)
    {
        swap(md[int(i)][j] , md[int(i)][j+4]);
    }
}
void print (char * p , int r ,int c ,int d1 , int d2)
{
    system ("cls") ;
    data ();
    cout << "          "<<char(201);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(187)<<endl;
    cout <<"                       Operation took "<< duration << " seconds"<<endl;
    cout<<"          "<<char(200);
    for(int i=0 ; i<48  ; i++)
    {
        cout<<char(205);
    }
    cout<<char(188);


    cout << endl ;
    //cout << "Operation took "<< duration << "seconds" << endl;
    cout << endl <<"                 ";
    SetConsoleTextAttribute(h, 0x3);
    for (int z = 0 ; z < d1 ; z++)
    {
        cout << char(222) << "   " ;
    }
    cout << endl <<endl ;
    int a=1;
    cout<<"   ";
    SetConsoleTextAttribute(h, 0xf);
    for(int i=0 ; i<9 ; i++)
    {
        cout<<a<<"   ";
        a++;
    }
    for(int i=9 ; i<17 ; i++)
    {
        cout<<a<<"  ";
        a++;
    }
    cout<<endl;
    cout<<endl;
    for(int i = 0 ; i < r ; i++)
    {
        cout << "   " ;
        for (int j = 0 ; j < c ; j++)
        {
            if (*(p+i * c+j)== char(5))
            {
                SetConsoleTextAttribute(h, 0x3);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(6))
            {
                SetConsoleTextAttribute(h, 0x6);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else if (*(p+i * c+j)== char(196) || *(p+i * c+j)== char(124))
            {
                SetConsoleTextAttribute(h, 0xc);
                cout << *(p+i * c+j) << "   " ;
                SetConsoleTextAttribute(h, 0xf);
            }
            else
            {
                cout << *(p+i * c+j) << "   " ;
            }
        }
        cout << endl ;
        cout << endl ;
    }
    cout << endl << endl <<"                 ";
    SetConsoleTextAttribute(h, 0x6);
    for (int z = 0 ; z < d2 ; z++)
    {
        cout << char(222) << "   " ;
    }
    cout << endl << endl ;
    SetConsoleTextAttribute(h, 0xf);
}
void tp4c_e()
{
    int tp = 4 ;
    short resume ;
    short nom = 1 ;  short nobat4=1; // az inja zakhire shoro mishe :/
    int d1 = 5 , d2 = 5 , d3 = 5 ,  d4 =5 ;
    string nameofplayers[4] ;
    ofstream x ("c:\\daliz\\zdade.txt") ;
    for (int i = 0 ; i < tp ;i++)
    {
        cout << "enter the name of player " << nom << " : " ;
        cin >> nameofplayers[i] ;

        x << nameofplayers[i] << endl;
        nom++ ;
        // zakhire dade monde!
    }
    x.close() ;
    char md[17][18] ;
    char h = 97 ;
    for (int i = 0 ; i < 17 ; i++)//meghdar dehi
    {
        for (int j = 0 ; j < 18 ; j++)
        {
            if(i==0 && j==8)
            {
                md[i][j] = char(5) ;
            }

            else if(i==16 && j==8)
            {
                md[i][j] = 6 ;
            }
            else if(i==8 && j==0)
            {
                md[i][j] = 3 ;
            }
            else if(i==8 && j==16)
            {
                md[i][j] = 4 ;
            }
            else if(j==17)
            {
                md[i][j] = h ;
                h++;
            }
            else if((j%2)==1 || (i%2)==1)
            {
                md[i][j] = 32 ;
            }
            else
            {
                md[i][j] = char(250) ;
            }
        }
    }
    printv2( *md , 17 , 18 , d1 , d2 , d3 ,d4);
    start = clock();
    while(1)  //shoro bazi
    {
        //timer();

        short ent ;
        int j ;
        char i ;
        do
        {
            if(nobat4%4 == 1)
            {
                cout << nameofplayers[0]<< " you have two choices. do you want to move the nut or put the wall on?" << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
            else if(nobat4%4 == 2)
            {
                cout << nameofplayers[1]<< " you have two choices. do you want to move the nut or put the wall on?" << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
            else if(nobat4%4 == 3)
            {
                cout << nameofplayers[2]<< " you have two choices. do you want to move the nut or put the wall on?" << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
            else if(nobat4%4 == 0)
            {
                cout << nameofplayers[3]<< " you have two choices. do you want to move the nut or put the wall on?" << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
        }
        while((ent==2 && nobat4%4==1 && d1<1) || (ent ==2 && nobat4%4==2 && d2<1) ||(ent==2 && nobat4%4==3 && d3<1) || (ent ==2 && nobat4%4==0 && d4<1) || (ent!=1 && ent!=2) );
        if (ent==1) // taghir mohre
        {

            cout << "specify the houses you want to move. using the rows and colmouns " << endl ;
            do
            {
                cout <<"the house that you choose should contain your nut! \n" ;
                cout << "which nut do you want to move? ( row , colume ) \n" ;
                cin >> i >> j ;
                i -= 'a' ;
                j--;
            }
            while((nobat4%4 ==1 && md[int(i)][j]!=char(5)) || (nobat4%4 == 2 && md[int(i)][j] != char(3)) ||(nobat4%4 == 3 && md[int(i)][j] != char(6)) || (nobat4 %4== 0 && md[int(i)][j] != char(4)));
            // enteghal be khone ye ...
            while(1)
            {
                short a , ret = 0 ;
                cout << "where do you want to move your nut? \n" ;
                cout << "1.top   -- 5.top-right  --  9.jumping twice up \n"  ;
                cout << "2.down  -- 6.top-left   -- 10.jumping twice down \n" ;
                cout << "3.right -- 7.down-left  -- 11.jumping twice‏ left \n" ;
                cout << "4.left  -- 8.down-right -- 12.jumping twice right \n";

                cin >> a ;
                if (a==1)
                {
                    if (i >= 2)
                    {
                        if(md[int(i-2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall! \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt emty \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no upper house !\n" ;
                    }
                }
                if (a==2)
                {
                    if ( i <= 14)
                    {
                        if(md[int(i+2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall! \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no downer house !\n" ;
                    }
                }
                if (a==3)
                {
                    if ( j <= 14)
                    {
                        if(md[int(i)][j+2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no right house!\n" ;
                    }
                }
                if (a==4)
                {
                    if ( j >= 2)
                    {
                        if(md[int(i)][j-2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no left house! \n" ;
                    }
                }
                if (a==5 && i >= 2 && j <= 14)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196) ) || (md[int(i)][j+2] != char(250)  && md[int(i)][j+3] == char(124)))                                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally\n" ;
                    }
                }
                if (a==6 && i >= 2 && j >= 2)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124) ))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally\n" ;
                    }
                }
                if (a==7 && i <= 14 && j >= 2)
                {

                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally\n" ;
                    }
                }
                if (a==8 && i <= 14 && j <= 14)
                {

                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196) ) || (md[int(i)][j+2] != char(250) && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally\n" ;
                    }
                }
                if (a==9 && i >= 4 )
                {
                    if ( md[int(i-2)][j] != char(250) && md[int(i-1)][j] != char(196) && md[int(i-3)][j] != char(196) && md[int(i-4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that \n";
                    }
                }
                if(a==10 && i<=12)
                {
                    if ( md[int(i+2)][j] != char(250) && md[int(i+1)][j] != char(196) && md[int(i+3)][j] != char(196) && md[int(i+4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that\n";
                    }
                }

                if(a==11 && j>=4)
                {
                    if ( md[int(i)][j-2] != char(250) &&( md[int(i)][j-1] !=char(124) || md[int(i)][j-3] !=char(124)) && md[int(i)][j-4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that \n";
                    }
                }

                if(a==12 && j<=12)
                {
                    if ( md[int(i)][j+2] != char(250) && md[int(i)][j+1] != char(124) && md[int(i)][j+3] != char(124) && md[int(i)][j+4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that \n";
                    }
                }
            }
            nobat4 ++;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            printv2( *md , 17 , 18 , d1 , d2 , d3 , d4) ;
        }
        if (ent==2) // gozashtan divar
        {
            if ((nobat4%4 == 1 && d1 >= 1 ) || (nobat4%4 == 2 && d2 >= 1)  || (nobat4%4 == 3 && d3 >= 1) || (nobat4%4 == 0 && d4 >= 1))
            {
                char i2;
                int j2;
                //int chek_kheft2 ;
                while(1)
                {
                    do
                    {
                        cout<<"in which house do you want to put the wall?"<<endl;
                        cout<<"(i , j)"<<endl;
                        cin>>i2>>j2;
                        i2-='a';
                        j2--;
                    }
                    while(  md[int(i2)][j2] == char(250) || md[int(i2)][j2] == char(5)||md[int(i2)][j2] == char(6) ||md[int(i2)][j2] == char(3)||md[int(i2)][j2] == char(4)||chek_kheft(md,i2,j2)==false || (i2%2==1 && j2%2==1)  );
                    short jahat;
                    //(i2%2==1 && j2%2==1) || (j2%2==0 && i2%2==0)
                    do
                    {
                        cout<<"where do you want to pull the wall?"<<endl;
                        cout<<"1.top"<<endl;
                        cout<<"2.down"<<endl;
                        cout<<"3.right"<<endl;
                        cout<<"4.left"<<endl;
                        cin>>jahat;
                    }
                    while (jahat > 4 || jahat < 0) ;
                    if (jahat==1)
                    {
                        if( md[i2-1][j2] == 32 )
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==2)
                    {
                        if(md[i2+1][j2] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==3)
                    {
                        if(md[int(i2)][j2+1] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==4)
                    {
                        if(md[int(i2)][j2-1] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    else
                    {
                        cout << "wrong \n" ; // hosele tozih nadaram :/
                    }
                }
            }
            else
            {
                cout << "it isnt your turn or you dont have any wall !\n" ;
            }
            if (nobat4%4 == 1)
            {
                d1--;
            }
            if(nobat4%4==2)
            {
                d2--;
            }
            if(nobat4%4==3)
            {
                d3--;
            }
            if(nobat4%4==0)
            {
                d4--;
            }
            nobat4++;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            printv2( *md , 17 , 18 , d1 , d2 , d3 ,d4);
        }
        //elam barande
        if(md[16][j] == char(5))
        {

            cout << "congratulations "<< nameofplayers[0] << " you win !\n" ;
            cout << "DO you want to continue ?\n";
            cout << "1.Yes\n";
            cout << "2.NO\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[0][j] == char(6))
        {

            cout << "congratulations "<< nameofplayers[2] << " you win!\n" ;

            cout << "Do you want to continue ?\n";
            cout << "1.Yes\n";
            cout << "2.NO\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[int(i)][16] == char(3))
        {

            cout << "congratulations "<< nameofplayers[1] << " you win!\n" ;

            cout << "DO you want to continue ?\n";
            cout << "1.Yes\n";
            cout << "2.No\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[int(i)][0] == char(4))
        {

            cout << "congratulations "<< nameofplayers[3] << " you win!\n" ;
            cout << "DO you want to continue ? \n";
            cout << "1.Yes\n";
            cout << "2.No\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
    }
}
void tpc2_e()
{
    SetConsoleTextAttribute(h, 0xf);
    int tp = 2 ;
    short counter1=0;
    short counter2=0;
    short resume ;
    bool nobat = false ;
    short nom = 1 ;// az inja zakhire shoro mishe :/
    int d1 = 10 , d2 = 10 ;
    string nameofplayers[2] ;
    ofstream x ("c:\\daliz\\zdade.txt") ;
    for (int i = 0 ; i < tp ;i++)
    {
        cout << "enter the name of player " << nom << " : " ;
        cin >> nameofplayers[i] ;
        x << nameofplayers[i] << endl;
        nom++ ;
    }
    x.close() ;
    char md[17][18] ;
    char h = 97 ;
    for (int i = 0 ; i < 17 ; i++)//meghdar dehi
    {
        for (int j = 0 ; j < 18 ; j++)
        {
            if(i==0 && j==8)
            {
                md[i][j] = 5 ;
            }
            else if(i==16 && j==8)
            {
                md[i][j] = 6 ;
            }
            else if(j==17)
            {
                md[i][j] = h ;
                h++;
            }
            else if((j%2)==1 || (i%2)==1)
            {
                md[i][j] = 32 ;
            }
            else
            {
                md[i][j] = char(250) ;
            }
        }
    }
    print( *md , 17 , 18 , d1 , d2);
    int a1 , a2 ; // mohre haye dovom entekhabi

    do // mohre 2 balaye
    {
        cout << "the number of column should be odd and dont put on your first nut \n" ;
        cout << nameofplayers[0] <<" in which column do you want to place the second nut " ;
        cin >> a1 ;
    }
    while (((a1%2)== 0) || (a1 == 9) || a1 > 17 ) ;
    md[0][a1-1] = char(5) ;

    do // mohre 2 payene
    {
        cout << "the number of column should be  odd and dont put on your first nut \n" ;
        cout << nameofplayers[1] <<" in which column do you want to place the second nut " ;
        cin >> a2 ;
    }
    while (((a2%2)==0) || (a2 == 9) || a2 > 17 ) ;
    md[16][a2-1] =char(6) ;
    print( *md , 17 , 18 , d1 , d2 ) ;
    start = clock();
    while(1) // shoroe bazi
    {

        short ent ;
        int j ;
        char i ;
        do
        {
            if(nobat == false)
            {
                cout << nameofplayers[0]<< " you have two choices. do you want to move the nut or put the wall on? " << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
            else if(nobat == true)
            {
                cout << nameofplayers[1]<< " you have two choices. do you want to move the nut or put the wall on ?" << endl ;
                cout << "1.nut" << endl ;
                cout << "2.wall" << endl ;
                cin >> ent ;
            }
        }
        while((ent==2 && nobat==false && d1<1) || (ent ==2 && nobat==true && d2<1)|| (ent!=1 && ent!=2));
        if (ent==1) // taghir mohre
        {
            cout << "specify the houses you want to move. using the rows and columns " << endl ;
            do
            {
                cout <<"the house that you choose should contain your nut! \n" ;
                cout << "which nut do you want to move? ( row , colume ) \n" ;
                cin >> i >> j ;
                i -= 'a' ;
                j--;
            }
            while((nobat == false && md[int(i)][j] !=5) || (nobat == true && md[int(i)][j] !=6) || (i<0 || i>16) || (j<0 ||  j>16) );
            // enteghal be khone ye ...
            while(1)
            {
                short a , ret = 0 ;
                cout << "where do you want to move your nut? \n" ;
                cout << "1.top   -- 5.top-right  --  9.jumping twice‏ up \n"  ;
                cout << "2.down  -- 6.top-left   -- 10.jumping twice‏ down\n" ;
                cout << "3.right -- 7.down-left  -- 11.jumping twice‏ left\n" ;
                cout << "4.left  -- 8.down-right -- 12.jumping twice‏ right\n";

                cin >> a ;
                if (a==1)
                {
                    if (i >= 2)
                    {
                        if(md[int(i-2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                //SetConsoleTextAttribute(h, 0x);
                                cout << "this house is surrounded by a wall! \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty‏ \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no upper house!‏ \n " ;
                    }
                }
                if (a==2)
                {
                    if ( i <= 14)
                    {
                        if(md[int(i+2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall ! \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty‏ \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no downer house!‏ \n " ;
                    }
                }
                if (a==3)
                {
                    if ( j <= 14)
                    {
                        if(md[int(i)][j+2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall !\n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no right house !\n" ;
                    }
                }
                if (a==4)
                {
                    if ( j >= 2)
                    {
                        if(md[int(i)][j-2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "this house is surrounded by a wall ! \n" ;
                            }
                        }
                        else
                        {
                            cout << "the house isnt empty‏ \n" ;
                        }
                    }
                    else
                    {
                        cout << "there is no left house!‏ \n " ;
                    }
                }
                if (a==5 && i >= 2 && j <= 14)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196) ) || (md[int(i)][j+2] != char(250)  && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally‏\n" ;
                    }
                }
                if (a==6 && i >= 2 && j >= 2)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124) ))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally‏\n" ;
                    }
                }
                if (a==7 && i <= 14 && j >= 2)
                {
                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally‏\n" ;
                    }
                }
                if (a==8 && i <= 14 && j <= 14)
                {
                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196) ) || (md[int(i)][j+2] != char(250) && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "it isnt possible for you to move diagonally‏\n" ;
                    }
                }
                if (a==9 && i >= 4 )
                {
                    if ( md[int(i-2)][j] != char(250) && md[int(i-1)][j] != char(196) && md[int(i-3)][j] != char(196) && md[int(i-4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that ";
                    }
                }
                if(a==10 && i<=12)
                {
                    if ( md[int(i+2)][j] != char(250) && md[int(i+1)][j] != char(196) && md[int(i+3)][j] != char(196) && md[int(i+4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that ";
                    }
                }
                if(a==11 && j>=4)
                {
                    if ( md[int(i)][j-2] != char(250) &&( md[int(i)][j-1] !=char(124) || md[int(i)][j-3] !=char(124)) && md[int(i)][j-4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that ";
                    }
                }
                if(a==12 && j<=12)
                {
                    if ( md[int(i)][j+2] != char(250) && md[int(i)][j+1] != char(124) && md[int(i)][j+3] != char(124) && md[int(i)][j+4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"it isnt possible for you to do that ";
                    }
                }
            }
            nobat = !nobat ;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            print( *md , 17 , 18 , d1 , d2) ;
        }
        if (ent==2) // gozashtan divar
        {
            if ((nobat == false && d1 >= 1 ) || (nobat == true && d2 >= 1))
            {
                char i2;
                int j2;
                while(1)
                {
                    do
                    {
                        cout<<"in which house do you want to put the wall? "<<endl;
                        cout<<"(i , j)"<<endl;
                        cin>>i2>>j2;
                        i2-='a';
                        j2--;
                    }
                    while( md[int(i2)][j2] == char(250)||md[int(i2)][j2] == char(5)||md[int(i2)][j2] == char(6)||chek_kheft(md,i2,j2)==false || (i2%2==1 && j2%2==1) );
                    short jahat;
                    do
                    {
                        cout<<"where do you want to pull the wall? "<<endl;
                        cout<<"1.top"<<endl;
                        cout<<"2.down"<<endl;
                        cout<<"3.right"<<endl;
                        cout<<"4.left"<<endl;
                        cin>>jahat;
                    }
                    while (jahat > 4 || jahat < 0) ;

                    if (jahat==1)
                    {
                        if( md[i2-1][j2] == 32 )
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    else if (jahat==2)
                    {
                        if(md[i2+1][j2] == 32)
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    else if (jahat==3)
                    {
                        if(md[int(i2)][j2+1] == 32)
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    else if (jahat==4)
                    {
                        if(md[int(i2)][j2-1] == 32)
                        {
                            wall(md , i2 , j2 , jahat  );
                            break ;
                        }
                    }
                    else
                    {
                        cout << "wrong \n" ; // hosele tozih nadaram :/
                    }
                }
            }
            else
            {
                cout << "it isnt your turn or you dont have any wall!\n" ;
            }
            if (nobat == false)
                d1--;
            if (nobat == true)
                d2-- ;
            nobat = !nobat ;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            print( *md , 17 , 18 , d1 , d2) ;
        }
        for(int j=0 ; j<17 ; j++)
        {
            if(md[16][j]==char(5))
            {
                counter1 ++;
                if(counter1==2)
                {
                    cout << "congratulations "<< nameofplayers[0] << " you win ! \n" ;
                    cout << "DO you want to continue ?\n";
                    cout << "1.Yes\n";
                    cout << "2.NO\n";
                    cin >> resume ;
                    if(resume==1)
                    {
                        start_e();
                    }
                    if(resume==2)
                    {
                        menu_e();
                    }
                }
                else
                {
                    md[16][j]=char(250);
                }
            }
        }

        for(int j=0 ; j<17 ; j++)
        {
            if(md[0][j]==char(6))
            {
                counter2 ++;
                if(counter2==2)
                {
                    cout << "congratulations "<< nameofplayers[1] << " you win ! \n" ;
                    cout << "DO you want to continue ?\n";
                    cout << "1.Yes\n";
                    cout << "2.NO\n";
                    cin >> resume ;
                    if(resume==1)
                    {
                        start_e();
                    }
                    if(resume==2)
                    {
                        menu_e();
                    }
                }
                else
                {
                    md[0][j]=char(250);
                }
            }
        }
        duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
        print( *md , 17 , 18 , d1 , d2) ;

    }
}
void tpc2_p()
{
    SetConsoleTextAttribute(h, 0xf);
    int tp = 2 ;
    short counter1=0;
    short counter2=0;
    short resume;
    bool nobat = false ;
    short nom = 1 ;// az inja zakhire shoro mishe :/
    int d1 =10 , d2 = 10 ;
    string nameofplayers[2] ;
    ofstream x ("c:\\daliz\\zdade.txt") ;
    for (int i = 0 ; i < tp ;i++)
    {
        cout << "nam sherkatkonande " << nom << " ra vared konid : " ;
        cin >> nameofplayers[i] ;
        x << nameofplayers[i] << endl;
        nom++ ;
    }
    x.close() ;
    char md[17][18] ;
    char h = 97 ;
    for (int i = 0 ; i < 17 ; i++)//meghdar dehi
    {
        for (int j = 0 ; j < 18 ; j++)
        {
            if(i==0 && j==8)
            {
                md[i][j] = 5 ;
            }
            else if(i==16 && j==8)
            {
                md[i][j] = 6 ;
            }
            else if(j==17)
            {
                md[i][j] = h ;
                h++;
            }
            else if((j%2)==1 || (i%2)==1)
            {
                md[i][j] = 32 ;
            }
            else
            {
                md[i][j] = char(250) ;
            }
        }
    }
    print( *md , 17 , 18 , d1 , d2);
    int a1 , a2 ; // mohre haye dovom entekhabi

    do // mohre 2 balaye
    {
        cout << "Shomare sotoun bayad fard bashad va nabayad mohre aval ra shamel shavad! \n" ;
        cout << nameofplayers[0] <<" Dar kodam sotoun mikhahi mohre dovom ra gharar bedahi? \n" ;
        cin >> a1 ;
    }
    while (((a1%2)== 0) || (a1 == 9) || a1 > 17 ) ;
    md[0][a1-1] = 5 ;

    do // mohre 2 payene
    {
        cout << "Shomare sotoun bayad fard bashad va mohre aval ra shamel nashavad \n" ;
        cout << nameofplayers[1] <<" Dar kodam sotoun mikhahi mohre dovomat ra gharar dahi? \n" ;
        cin >> a2 ;
    }
    while (((a2%2)==0) || (a2 == 9) || a2 > 17 ) ;
    md[16][a2-1] = 6 ;
    print( *md , 17 , 18 , d1 , d2 ) ;
    start = clock();
    while(1) // shoroe bazi
    {
        //timer();

        short ent ;
        int j ;
        char i ;
        do
        {
            if(nobat==false)
            {
                cout << nameofplayers[0] << "Aya mikhahi mohre harkat bedahi ya divar bechini? " << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
            else if(nobat==true)
            {
                cout << nameofplayers[1] << "Aya mikhahi mohre harkat bedahi ya divar bechini?" << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
        }
        while((ent==2 && nobat==false && d1<1) || (ent ==2 && nobat==true && d2<1) || (ent!=1 && ent!=2));
        if (ent==1) // taghir mohre
        {
            cout << "Ba estefade az satr va sotoun mohre mored nazar ra moshakhs kon" << endl ;
            do
            {
                cout <<"khane mored nazar bayad mohre shoma ra shamel shavad \n" ;
                cout << "kodam mohre ra mikhahi harkat bedahi?(satr , sotoun) \n" ;
                cin >> i >> j ;
                i -= 'a' ;
                j--;
            }
            while((nobat == false && md[int(i)][j] !=5) || (nobat == true && md[int(i)][j] !=6) || (i<0 || i>16) || (j<0 ||  j>16) );
            // enteghal be khone ye ...
            while(1)
            {
                short a , ret = 0 ;
                cout << "mohre ra be kodam samt mikhahi harkat bedahi? \n" ;
                cout << "1.Bala   --  5.Bala-rast  -- 9.Dobar bala paridan\n"  ;
                cout << "2.Payin  --  6.Bala-chap  -- 10.Dobar payin paridan\n" ;
                cout << "3.Rast   --  7.Payin-chap -- 11.Dobar chap paridan\n" ;
                cout << "4.Chap   --  8.Payin-rast -- 12.Dobar rast paridan\n";

                cin >> a ;
                if (a==1)
                {
                    if (i >= 2)
                    {
                        if(md[int(i-2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                //SetConsoleTextAttribute(h, 0x);
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane balayi vojoud nadarad!\n" ;
                    }
                }
                if (a==2)
                {
                    if ( i <= 14)
                    {
                        if(md[int(i+2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode\n"  ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist!\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane payini vojoud nadarad!\n" ;
                    }
                }
                if (a==3)
                {
                    if ( j <= 14)
                    {
                        if(md[int(i)][j+2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane rasti vojoud nadarad\n" ;
                    }
                }
                if (a==4)
                {
                    if ( j >= 2)
                    {
                        if(md[int(i)][j-2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist!\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane chapi vojoud nadarad!\n" ;
                    }
                }
                if (a==5 && i >= 2 && j <= 14)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196) ) || (md[int(i)][j+2] != char(250)  && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==6 && i >= 2 && j >= 2)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124) ))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad! \n" ;
                    }
                }
                if (a==7 && i <= 14 && j >= 2)
                {
                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad! \n" ;
                    }
                }
                if (a==8 && i <= 14 && j <= 14)
                {
                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196) ) || (md[int(i)][j+2] != char(250) && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==9 && i >= 4 )
                {
                    if ( md[int(i-2)][j] != char(250) && md[int(i-1)][j] != char(196) && md[int(i-3)][j] != char(196) && md[int(i-4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
                if(a==10 && i<=12)
                {
                    if ( md[int(i+2)][j] != char(250) && md[int(i+1)][j] != char(196) && md[int(i+3)][j] != char(196) && md[int(i+4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
                if(a==11 && j>=4)
                {
                    if ( md[int(i)][j-2] != char(250) &&( md[int(i)][j-1] !=char(124) || md[int(i)][j-3] !=char(124)) && md[int(i)][j-4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
                if(a==12 && j<=12)
                {
                    if ( md[int(i)][j+2] != char(250) && md[int(i)][j+1] != char(124) && md[int(i)][j+3] != char(124) && md[int(i)][j+4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
            }
            nobat = !nobat ;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            print( *md , 17 , 18 , d1 , d2) ;
        }
        if (ent==2) // gozashtan divar
        {
            if ((nobat == false && d1 >= 1 ) || (nobat == true && d2 >= 1))
            {
                char i2;
                int j2;
                while(1)
                {
                    do
                    {
                        cout<<"Dar kodam khane mikhahi divar ra gharar dahi?"<<endl;
                        cout<<"(i , j)"<<endl;
                        cin>>i2>>j2;
                        i2-='a';
                        j2--;
                    }
                    while( md[int(i2)][j2] == char(250)||md[int(i2)][j2] == char(5)||md[int(i2)][j2] == char(6)||chek_kheft(md,i2,j2)==false || (i2%2==1 && j2%2==1) );
                    short jahat;
                    do
                    {
                        cout<<"Be kodam samt mikhahi divar ra emtedad bedahi?"<<endl;
                        cout<<"1.Bala"<<endl;
                        cout<<"2.Payin"<<endl;
                        cout<<"3.Rast"<<endl;
                        cout<<"4.Chap"<<endl;
                        cin>>jahat;
                    }
                    while (jahat > 4 || jahat < 0) ;

                    if (jahat==1)
                    {
                        if( md[i2-1][j2] == 32 )
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    if (jahat==2)
                    {
                        if(md[i2+1][j2] == 32)
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    if (jahat==3)
                    {
                        if(md[int(i2)][j2+1] == 32)
                        {
                            wall(md , i2 , j2 , jahat );
                            break ;
                        }
                    }
                    if (jahat==4)
                    {
                        if(md[int(i2)][j2-1] == 32)
                        {
                            wall(md , i2 , j2 , jahat  );
                            break ;
                        }
                    }
                    else
                    {
                        cout << "Khata! \n" ; // hosele tozih nadaram :/
                    }
                }
            }
            else
            {
                cout << "nobat shoma nist ya divari baraye shoma vojoud nadarad! \n" ;
            }
            if (nobat == false)
                d1--;
            if (nobat == true)
                d2-- ;
            nobat = !nobat ;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            print( *md , 17 , 18 , d1 , d2) ;
        }

        for(int j=0 ; j<17 ; j++)
        {
            if(md[16][j]==char(5))
            {
                counter1++;
                if(counter1==2)
                {
                    cout << "Tabrik "<< nameofplayers[0] << " Barande shodi !\n" ;
                    cout << "Aya mikhahid edame bedahid?\n";
                    cout << "1.Bale\n";
                    cout << "2.Kheir\n";
                    cin >> resume ;
                    if(resume==1)
                    {
                        start_p();
                    }
                    if(resume==2)
                    {
                        menu_p();
                    }
                }
                else
                {
                    md[16][j]=char(250);
                }
            }
        }

        for(int j=0 ; j<17 ; j++)
        {
            if(md[0][j]==char(6))
            {
                counter2 ++;
                if(counter2==2)
                {
                    cout << "Tabrik "<< nameofplayers[1] << " Barande shodi!\n" ;
                    cout << "Aya mikhahid edame bedahid?\n";
                    cout << "1.Bale\n";
                    cout << "2.Kheir\n";
                    cin >> resume ;
                    if(resume==1)
                    {
                        start_p();
                    }
                    if(resume==2)
                    {
                        menu_p();
                    }
                }
                else
                {
                    md[0][j]=char(250);
                }
            }
        }
        duration = (clock() - start ) / (double) CLOCKS_PER_SEC;

    }
}
void menu_p()
{
    short choose ;
    cout << endl;
    cout << "1.Shoro\n" ;
    cout << "2.Rahnama \n" ;
    cout << "3.Khorouj \n" ;
    cout << "adad vared konid : ";
    cin >> choose ;
    if(choose==1)
    {
        start_p();
    }
    else if(choose==2)
    {
        Guide_line_p();
    }
    else if(choose==3)
    {
        short a ;
        cout << "Aya motmaen hasti ?\n" ;
        cout << "1.Bale \n" ;
        cout << "2.Kheir \n" ;
        cin >> a ;
        if(a==1)
        {
            SetConsoleTextAttribute(h, 0x4);
            cout << "                            " << char(3) ;
            SetConsoleTextAttribute(h, 0xf);
            cout << "  Khodahafez  " ;
            SetConsoleTextAttribute(h, 0x4);
            cout << char(3) << endl ;
            SetConsoleTextAttribute(h, 0xf);
            Sleep(5000);
            exit(0) ;
        }
        else if(a==2)
        {
            menu_p();
        }
        else
        {
            SetConsoleTextAttribute(h, 0x6);
            cout << "khata" << endl ;
            SetConsoleTextAttribute(h, 0xf);
            menu_p();
        }

    }
    else
    {
        SetConsoleTextAttribute(h, 0x6);
        cout << "khata" << endl ;
        SetConsoleTextAttribute(h, 0xf);
        menu_p();
    }
}
void start_p()
{
    cout << endl ;
    short b ;
    SetConsoleTextAttribute(h, 0xf);
    cout << "Kodam halat az bazi daliz ra mikhahid?\n" ;
    cout << "1.Bazi do nafare classic 2x \n" ;
    cout << "2.Bazi chahar nafare classic \n" ;
    cout << "3.Bazgasht \n" ;
    cout << "Enter number : " ;
    cin >> b ;
    if (b==1)
    {
        tpc2_p();
    }
    if (b==2)
    {
        tp4c_p();
    }
    if (b==3)
    {
        menu_p();
    }
    else
    {
        SetConsoleTextAttribute(h, 0x6);
        cout << "Khata" << endl ;
        SetConsoleTextAttribute(h, 0xf);
        start_p();
    }


}
void Guide_line_p()
{
    cout << endl;
    SetConsoleTextAttribute(h, 0x9);
    cout << "\a Be bazi dliz khosh amadid! \n";
    cout << "Ghabl az shoro bazi behtare be rahnama deghat koni \n";
    cout << "In bazi dakhel safhei mesle safhe zir ejra mishe(safhe zir az safhe asli kochic tare)\n \n";
    cout << "  1  2  3  4  5  6  7  8  9  \n";
    cout << "  .     .     .     .     .  a\n";
    cout << "                             b\n";
    cout << "  .     .     .     .     .  c\n";
    cout << "                             d\n";
    cout << "  .     .     .     .     .  e\n";
    cout << "                             f\n";
    cout << "  .     .     .     .     .  g\n";
    cout << "                             i\n";
    cout << "  .     .     .     .     .  h\n\n";
    cout << "1.Shoma mojazid mohre ha ra faghat roye noghteh ha jabeja konid \n";
    cout << "Noghte ha dar satr ha va soton haye fard hastand \n\n";
    cout << "2.Shoma bayed divar ha ra dar khane haye khali begozarid\n\n";
    cout << "3.Divar shoma bayad 2 khane ra poshesh dahad\n\n";
    cout << "4.Soton haye fard ebaratand as :a,c,e,g,h,...\n\n";
    cout << "5.Farayande gozashtan divar:\n";
    cout << "Ebteda bayad yek khane entekhab shavad sepas jahat divar taeen shavad \n\n";
    cout << "6.Vaghti yek mohre be akharin noghte masirash miresad bazi tamam mishavad/n";
    cout << "7.Dar har ghesmat bazi tozihati dade shode ast .Lotfan be an ha tavajoh konid!\n\n";
    cout << "8.Dar bazi(4 nafare classic),bazi ba mohre balaee shoro mishavad,sepas nobat pad saat gard micharkhad\n\n";
    cout << "9.Baraye kasb etelaat bishtar be address zir morajee konid \n";
    cout << "https://hoopagames.ir/wp-content/uploads/2021/12/Daliz-Guide-booklet-R3-09.pdf\n";
    cout <<"MOVAFAGH BASHID\n\n";
    SetConsoleTextAttribute(h, 0xf);
    menu_p();
}
void tp4c_p()
{
    int tp = 4 ;
    short resume ;
    short nom = 1 ;  short nobat4=1; // az inja zakhire shoro mishe :/
    int d1 = 5 , d2 = 5 , d3 = 5 ,  d4 =5 ;
    string nameofplayers[4] ;
    ofstream x ("c:\\daliz\\zdade.txt") ;
    for (int i = 0 ; i < tp ;i++)
    {
        cout << "nam sherkatkonande " << nom << " ra vared konid : " ;
        cin >> nameofplayers[i] ;

        x << nameofplayers[i] << endl;
        nom++ ;
        // zakhire dade monde!
    }
    x.close() ;
    char md[17][18] ;
    char h = 97 ;
    for (int i = 0 ; i < 17 ; i++)//meghdar dehi
    {
        for (int j = 0 ; j < 18 ; j++)
        {
            if(i==0 && j==8)
            {
                md[i][j] = 5 ;
            }

            else if(i==16 && j==8)
            {
                md[i][j] = 6 ;
            }
            else if(i==8 && j==0)
            {
                md[i][j] = 3 ;
            }
            else if(i==8 && j==16)
            {
                md[i][j] = 4 ;
            }
            else if(j==17)
            {
                md[i][j] = h ;
                h++;
            }
            else if((j%2)==1 || (i%2)==1)
            {
                md[i][j] = 32 ;
            }
            else
            {
                md[i][j] = char(250) ;
            }
        }
    }
    printv2( *md , 17 , 18 , d1 , d2 , d3 ,d4);
    start = clock();
    while(1)  //shoro bazi
    {
        //timer();

        short ent ;
        int j ;
        char i ;
        do
        {
            if(nobat4%4==1)
            {
                cout << nameofplayers[0] << "Aya mikhahi mohre harkat bedahi ya divar bechini?" << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
            else if(nobat4%4==2)
            {
                cout << nameofplayers[1] << "Aya mikhahi mohre harkat bedahi ya divar bechini?" << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
            if(nobat4%4==3)
            {
                cout << nameofplayers[2] << "Aya mikhahi mohre harkat bedahi ya divar bechini?" << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
            else if(nobat4%4==0)
            {
                cout << nameofplayers[3] << "Aya mikhahi mohre harkat bedahi ya divar bechini?" << endl ;
                cout << "1.Mohre" << endl ;
                cout << "2.Divar" << endl ;
                cin >> ent ;
            }
        }
        while((ent==2 && nobat4%4==1 && d1<1) || (ent ==2 && nobat4%4==2 && d2<1) ||(ent==2 && nobat4%4==3 && d3<1) || (ent ==2 && nobat4%4==0 && d4<1) || (ent!=1 && ent!=2) );
        if (ent==1) // taghir mohre
        {

            cout << "Ba estefade az satr va sotoun mohre mored nazar ra moshakhs kon" << endl ;
            do
            {
                cout <<"khane mored nazar bayad mohre shoma ra shamel shavad \n" ;
                cout << "kodam mohre ra mikhahi harkat bedahi?(satr , sotoun)\n" ;
                cin >> i >> j ;
                i -= 'a' ;
                j--;
            }
            while((nobat4%4 ==1 && md[int(i)][j]!=char(5)) || (nobat4%4 == 2 && md[int(i)][j] != char(3)) ||(nobat4%4 == 3 && md[int(i)][j] != char(6)) || (nobat4 %4== 0 && md[int(i)][j] != char(4)));
            // enteghal be khone ye ...
            while(1)
            {
                short a , ret = 0 ;
                cout << "mohre ra be kodam samt mikhahi harkat bedahi? \n" ;
                cout << "1.Bala   --  5.Bala-rast  -- 9.Dobar bala paridan \n"  ;
                cout << "2.Payin  --  6.Bala-chap  -- 10.Dobar payin paridan\n" ;
                cout << "3.Rast   --  7.Payin-chap -- 11.Dobar chap paridan\n" ;
                cout << "4.Chap   --  8.Payin-rast -- 12.Dobar rast paridan \n";

                cin >> a ;
                if (a==1)
                {
                    if (i >= 2)
                    {
                        if(md[int(i-2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane balayi vojoud nadarad!\n" ;
                    }
                }
                if (a==2)
                {
                    if ( i <= 14)
                    {
                        if(md[int(i+2)][j] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist!\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane payine vojoud nadarad!\n" ;
                    }
                }
                if (a==3)
                {
                    if ( j <= 14)
                    {
                        if(md[int(i)][j+2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist!\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane rasti vojoud nadarad!\n" ;
                    }
                }
                if (a==4)
                {
                    if ( j >= 2)
                    {
                        if(md[int(i)][j-2] == char(250) )
                        {
                            ret = chek_divar(md , i , j , a ) ;
                            if(ret==0)
                            {
                                tagir_mohre(md , i , j , a ) ;
                                break ;
                            }
                            else
                            {
                                cout << "in khane ba divar baste shode!\n" ;
                            }
                        }
                        else
                        {
                            cout << "in khane khali nist!\n" ;
                        }
                    }
                    else
                    {
                        cout << "khane chapi vojoud nadarad!\n" ;
                    }
                }
                if (a==5 && i >= 2 && j <= 14)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196) ) || (md[int(i)][j+2] != char(250)  && md[int(i)][j+3] == char(124)))                                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==6 && i >= 2 && j >= 2)
                {
                    if (( md[int(i-2)][j] != char(250) && md[int(i-3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124) ))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==7 && i <= 14 && j >= 2)
                {

                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196)) || (md[int(i)][j-2] != char(250) && md[int(i)][j-3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==8 && i <= 14 && j <= 14)
                {

                    if (( md[int(i+2)][j] != char(250) && md[int(i+3)][j] == char(196) ) || (md[int(i)][j+2] != char(250) && md[int(i)][j+3] == char(124)))
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout << "emkan harkat orib vojoud nadarad!\n" ;
                    }
                }
                if (a==9 && i >= 4 )
                {
                    if ( md[int(i-2)][j] != char(250) && md[int(i-1)][j] != char(196) && md[int(i-3)][j] != char(196) && md[int(i-4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break ;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
                if(a==10 && i<=12)
                {
                    if ( md[int(i+2)][j] != char(250) && md[int(i+1)][j] != char(196) && md[int(i+3)][j] != char(196) && md[int(i+4)][j] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }

                if(a==11 && j>=4)
                {
                    if ( md[int(i)][j-2] != char(250) &&( md[int(i)][j-1] !=char(124) || md[int(i)][j-3] !=char(124)) && md[int(i)][j-4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }

                if(a==12 && j<=12)
                {
                    if ( md[int(i)][j+2] != char(250) && md[int(i)][j+1] != char(124) && md[int(i)][j+3] != char(124) && md[int(i)][j+4] == char(250) )
                    {
                        tagir_mohre(md , i , j , a ) ;
                        break;
                    }
                    else
                    {
                        cout<<"in emkan baraye shoma vojoud nadarad!\n";
                    }
                }
            }
            nobat4 ++;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            printv2( *md , 17 , 18 , d1 , d2 , d3 , d4) ;
        }
        if (ent==2) // gozashtan divar
        {
            if ((nobat4%4 == 1 && d1 >= 1 ) || (nobat4%4 == 2 && d2 >= 1)  || (nobat4%4 == 3 && d3 >= 1) || (nobat4%4 == 0 && d4 >= 1))
            {
                char i2;
                int j2;
                //int chek_kheft2 ;
                while(1)
                {
                    do
                    {
                        //chek_kheft2 = 0 ;
                        cout<<"Dar kodam khane mikhahi divar ra gharar dahi?"<<endl;
                        cout<<"(i , j)"<<endl;
                        cin>>i2>>j2;
                        i2-='a';
                        j2--;
                        //chek_kheft2 = chek_kheft(md , i2) ;
                        //|| (chek_kheft2 < 2)
                    }
                    while(  md[int(i2)][j2] == char(250) || md[int(i2)][j2] == char(5)||md[int(i2)][j2] == char(6) ||md[int(i2)][j2] == char(3)||md[int(i2)][j2] == char(4)||chek_kheft(md,i2,j2)==false || (i2%2==1 && j2%2==1)  );
                    short jahat;
                    //(i2%2==1 && j2%2==1) || (j2%2==0 && i2%2==0)
                    do
                    {
                        cout<<"Be kodam samt mikhahi divar ra emtedad bedahi?"<<endl;
                        cout<<"1.bala"<<endl;
                        cout<<"2.payin"<<endl;
                        cout<<"3.rast"<<endl;
                        cout<<"4.chap"<<endl;
                        cin>>jahat;
                    }
                    while (jahat > 4 || jahat < 0) ;
                    if (jahat==1)
                    {
                        if( md[i2-1][j2] == 32 )
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==2)
                    {
                        if(md[i2+1][j2] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==3)
                    {
                        if(md[int(i2)][j2+1] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    if (jahat==4)
                    {
                        if(md[int(i2)][j2-1] == 32)
                        {
                            wall(md , i2 , j2 , jahat);
                            break;
                        }
                    }
                    else
                    {
                        cout << "khata!\n" ; // hosele tozih nadaram :/
                    }
                }
            }
            else
            {
                cout << "nobat shoma nist ya divari baraye shoma vojoud nadarad!\n" ;
            }
            if (nobat4%4 == 1)
            {
                d1--;
            }
            if(nobat4%4==2)
            {
                d2--;
            }
            if(nobat4%4==3)
            {
                d3--;
            }
            if(nobat4%4==0)
            {
                d4--;
            }
            nobat4++;
            duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
            printv2( *md , 17 , 18 , d1 , d2 , d3 ,d4);
        }
        //elam barande
        if(md[16][j] == char(5))
        {

            cout << "tabrik "<< nameofplayers[0] << " shomabarande shodid !\n" ;
            cout << "aya mikhahid edame dahid?\n";
            cout << "1.bale\n";
            cout << "2.kheir\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[0][j] == char(6))
        {

            cout << "tabrik "<< nameofplayers[2] << " shoma barande shodid!\n" ;

            cout << "aya mikhahid edame dahid?\n";
            cout << "1.bale\n";
            cout << "2.kheir\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[int(i)][16] == char(3))
        {

            cout << "tabrik "<< nameofplayers[1] << " shoma barande shodid!\n" ;

            cout << "aya mikhahid edame dahid ?\n";
            cout << "1.bale\n";
            cout << "2.kheir\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        if(md[int(i)][0] == char(4))
        {

            cout << "tabrik "<< nameofplayers[3] << " shoma barande shodid!\n" ;
            cout << "aya mikhahid edame dahid ? \n";
            cout << "1.bale\n";
            cout << "2.kheir\n";
            cin >> resume ;
            if(resume==1)
            {
                start_e();
            }
            if(resume==2)
            {
                menu_e();
            }

        }
        //duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
    }
}



