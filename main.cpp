#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<fstream>

using namespace std;
int col_len = 11;
void gotoRowCol(int rpos, int cpos)
{
    int xpos=cpos, ypos = rpos;
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = cpos;
    scrn.Y = rpos;
    SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
    for(int j=0; j<m*21000; j++)
    {

    }
}

void line_1(int Sr,int Sc,int Ec,char ch)
{
    for(int i=Sc ; i<=Ec ; i++)
    {
        gotoRowCol(Sr,i);
        //sleep(100);
        cout << ch;
    }
}
void line_2(int Sr,int Er,int Ec,char ch)
{
    for(int i=Sr ; i<=Er ; i++)
    {
        gotoRowCol(i,Ec);
       // sleep(100);
        cout << ch;
    }
}
void line_3(int Sc,int Er,int Ec,char ch)
{
    for(int i=Ec ; i>=Sc ; i--)
    {
        gotoRowCol(Er,i);
       // sleep(100);
        cout << ch;
    }
}
void line_4(int Sc,int Er,int Sr,char ch)
{
    for(int i=Er ; i>=Sr ; i--)
    {
        gotoRowCol(i,Sc);
       // sleep(100);
        cout << ch;
    }
}
void box(int row_len,int col_len,int starting_r,int starting_c)
{
    int ending_r = row_len;
    int ending_c = col_len;

    line_1(starting_r,starting_c,ending_c,char(219));
    line_2(starting_r,ending_r,ending_c,char(219));
    line_3(starting_c,ending_r,ending_c,char(219));
    line_4(starting_c,ending_r,starting_r,char(219));

}

void print_in_box(int row_len,int col_len,int number)
{
    gotoRowCol(row_len,col_len);
    cout << number;
}

void change_Turn(int & turn)
{
    if(turn==0)
    {
        turn = 1;
    }
    else
    {
        turn = 0;
    }
}
void board(int row_len,int col_len,int row,int col)
{
    int r1 = row_len;
    int r2 = col_len;
    int x = (r1+row)/2;
    int y = (r2+col)/2;
    int num = 100;
    for(int k =1 ; k<= 10;k++)
    {


    for(int i = 1; i<= 10 ; i++)
    {
        box(r1,r2,row,col);
        print_in_box(x,y,num);
        //row += row_len;
        col += col_len;
        //r1 += row_len;
        r2 += col_len;
        y+= col_len;
        num--;

    }
    x += row_len;
    col = 1;
    r2 = col_len;
    row += row_len;
    r1 += row_len;
    y = (r2+col)/2;
    }
    //int s=0;

    gotoRowCol(3,(col_len*col_len)+6);
    cout << "Hello World!";
    /*
    gotoRowCol(5,(col_len*col_len)+6);
    cout << "Hello World!";
    while(getch()==s)
    {
        int roll = rand() % 6;
        s = roll+1;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << s;
        sleep(20);
    }*/
}

void snakes(int & score)
{
    if(score == 97)
    {
        score = 12;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "Eaten by snake and comes to score 12";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                    ";
    }
    if(score == 20)
    {
        score = 3;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "Eaten by snake and comes to score 3";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                   ";
    }
    if(score == 58)
    {
        score = 16;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "Eaten by snake and comes to score 16";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                    ";
    }
}
void ladders(int & score)
{
    if(score == 9)
    {
        score = 23;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "ladder used and comes to 23";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                    ";
    }
    if(score == 34)
    {
        score = 78;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "ladder used and comes to 78";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                   ";
    }
    if(score == 45)
    {
        score = 60;
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "ladder used and comes to 60";
        sleep(100000);
        gotoRowCol(7,(col_len*col_len)+6);
        cout << "                                    ";
    }
}
void dices_roll(int roll)
{
    int sl = 1300;
    for(int i=1; i<= 6 ; i++)
    {
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " <<char(254);
    gotoRowCol(31,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254);
    gotoRowCol(30,(col_len*col_len)+6);
    sleep(sl);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254);
    sleep(sl);
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " <<char(254);
    gotoRowCol(31,(col_len*col_len)+6);
    cout << "  "<<char(254)<< "  " ;
    sleep(sl);
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " <<char(254);
    sleep(sl);
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " <<char(254);
    gotoRowCol(31,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " <<char(254);
    sleep(sl);
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(30,(col_len*col_len)+6);
    cout << char(254)<< " "<<char(254)<< " " ;
    sleep(sl);
    gotoRowCol(30,(col_len*col_len)+6);
    cout <<"     ";
    gotoRowCol(31,(col_len*col_len)+6);
    cout <<"     ";
    }

    if(roll==1)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254);
    }
    if(roll==2)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " ;
    }
    if(roll==3)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " <<char(254);
    }
    if(roll==4)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " <<char(254);
        gotoRowCol(31,(col_len*col_len)+6);
        cout << "  "<<char(254)<< "  " ;
    }
    if(roll==5)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " <<char(254);
        gotoRowCol(31,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254);
    }
    if(roll==6)
    {
        gotoRowCol(30,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " <<char(254);
        gotoRowCol(31,(col_len*col_len)+6);
        cout << char(254)<< " "<<char(254)<< " " <<char(254);
    }

}
void moving_goti_p1(int &score, int row_len, int col_len, int &turn_row, int &turn_col,int & turn,int & game,int & var)
{
    while(game==0)
    {
        srand(time(0));
        int roll = rand() % 6 + 1;
        //gotoRowCol(4,(col_len*col_len)+6);
        dices_roll(roll);
        //cout << "Player 1 Dice roll is "<< roll;
        //cin>>roll;
        sleep(10000);
        if(roll==6)
        {
            game=1;
            score=1;
            int row_r = score / 10;
            int col_c = score % 10;
            if (col_c == 0)
            {
                row_r--;
                col_c = 10;
            }
            gotoRowCol(turn_row - (row_r * row_len), turn_col - (col_c * col_len));
            cout<<"Ø";
        }
        if(roll!=6)
        {
            change_Turn(turn);
        }
        break;
    }
    int abc=0;
    while(game==1)
    {
        //srand(time(0));
        int roll = rand() % 6 + 1;
        //gotoRowCol(4,(col_len*col_len)+6);
        //cout << "Player 1 Dice roll is "<< roll;
        //cin>>roll;
        dices_roll(roll);
        sleep(10000);
        abc=abc+roll;
        var=var+roll;
        if(roll==6 & score<95)
        {
            score=score+roll;
        }
        if(score+var < 101 & roll%6!=0)
        {
            score=score+abc;
        }
        if(roll%6!=0 & abc<18)
        {
            change_Turn(turn);
        }
        if(abc<18 & roll%6!=0)
        {
            snakes(score);
            ladders(score);
            int row_r = score / 10;
            int col_c = score % 10;


            if (col_c == 0)
            {
                row_r--;
                col_c = 10;
            }

            if(score < 100)
            {


                gotoRowCol(turn_row - (row_r * row_len), turn_col - (col_c * col_len));
                cout<< "Ø";
                gotoRowCol(59,109);
                cout<<" ";
                if(score==100)
                {
                    cout << "Player-2 wins";
                }
            }
            }
            break;
        }
    }

void moving_goti_p2(int &score, int row_len, int col_len, int &turn_row, int &turn_col,int & turn,int & game,int & var)
{
    while(game==0)
    {
        srand(time(0));
        int roll = rand() % 6 + 1;
        //gotoRowCol(4,(col_len*col_len)+6);
        dices_roll(roll);
       // cout << "Player 2 Dice roll is "<< roll;
        //cin>>roll;
        sleep(10000);
        if(roll==6)
        {
            game=1;
            score=1;
            int row_r = score / 10;
            int col_c = score % 10;


            if (col_c == 0)
            {
                row_r--;
                col_c = 10;
            }

            gotoRowCol(turn_row - (row_r * row_len), turn_col - (col_c * col_len));
            cout<<"¶";
        }
        if(roll!=6)
        {
            change_Turn(turn);
        }
        break;
    }
    int abc=0;
    while(game==1)
    {
        //srand(time(0));
        int roll = rand() % 6 + 1;
        //gotoRowCol(4,(col_len*col_len)+6);
        //cout << "Player 2 Dice roll is "<< roll;
        dices_roll(roll);
        //cin>>roll;
        sleep(10000);
        abc=abc+roll;
        var=var+roll;
        if(roll==6 & score < 95)
        {
            score=score+roll;
        }
        if(score+var < 101 & roll%6!=0)
        {
            score=score+abc;
        }
        if(roll%6!=0 & abc<18)
        {
            change_Turn(turn);
        }
        if(roll%6!=0 & abc<18)
        {
            snakes(score);
            ladders(score);
            int row_r = score / 10;
            int col_c = score % 10;
            if (col_c == 0)
            {
                row_r--;
                col_c = 10;
            }
            if(score <  100)
            {


                gotoRowCol(turn_row - (row_r * row_len), turn_col - (col_c * col_len));
                cout<<"¶";
                gotoRowCol(57,109);
                cout<<" ";
                if(score==100)
                {
                    cout << "Player-2 wins";
                }
            }
            }
            break;
        }
}
void erasing_goti(int score,int row_len,int col_len,int & turn_row,int & turn_col)
{
    int row_r = score / 10;
    int col_c = score % 10;
    if (col_c == 0)
    {
        row_r--;
        col_c = 10;
    }

    gotoRowCol(turn_row - (row_r * row_len), turn_col - (col_c * col_len));

    cout << ' ';
    if (score > 1)
    {
        gotoRowCol((row_len*10)-1 , (col_len*10)-1);
        cout << " " ;
    }
    if (score > 1)
    {
        gotoRowCol((row_len*10)-3 , (col_len*10)-1);
        cout << " " ;
    }
}

void instructions()
{
    gotoRowCol(9,(col_len*col_len)+6);
    cout << "Well come to snakes and ladders Game";
    gotoRowCol(10,(col_len*col_len)+6);
    cout << "-------------------------------------";
    gotoRowCol(11,(col_len*col_len)+6);
    cout << "Snake from 20 ------>  3";
    gotoRowCol(12,(col_len*col_len)+6);
    cout << "Snake from 58 ------> 16";
    gotoRowCol(13,(col_len*col_len)+6);
    cout << "Snake from 97 ------> 12";
    gotoRowCol(14,(col_len*col_len)+6);
    cout << "-------------------------------------";
    gotoRowCol(15,(col_len*col_len)+6);
    cout << "LADDER from 09 ------> 23";
    gotoRowCol(16,(col_len*col_len)+6);
    cout << "LADDER from 34 ------> 78";
    gotoRowCol(17,(col_len*col_len)+6);
    cout << "LADDER from 45 ------> 60";
    gotoRowCol(18,(col_len*col_len)+6);
    cout << "-------------------------------------";

}
void writer(int & player_1,int & player_2,int & turn)
{

    ofstream saving("Instruction.txt");
    saving << player_1<<endl<<player_2<<endl<<turn;
}
void reader(int & player_1,int & player_2,int & turn)
{

    ifstream reloading("Instruction.txt");
    reloading>>player_1>> player_2  >> turn;
}
void on_loading_printing(int player1,int player2,int turn_row_p1,int turn_row_p2,int turn_col,int row_len,int col_len)
{
    int row_r_player1 = player1 / 10;
    int col_c_player1 = player1 % 10;
            if (col_c_player1 == 0)
            {
                row_r_player1--;
                col_c_player1 = 10;
            }
    gotoRowCol(turn_row_p1 - (row_r_player1 * row_len), turn_col - (col_c_player1 * col_len));
    cout<<"Ø";
    int row_r_player2 = player2 / 10;
    int col_c_player2 = player2 % 10;
            if (col_c_player2 == 0)
            {
                row_r_player2--;
                col_c_player2 = 10;
            }
    gotoRowCol(turn_row_p2 - (row_r_player2 * row_len), turn_col - (col_c_player2 * col_len));
    cout<<"¶";
}
int main()
{
    int loading;
    cout << "Enter 1 to Load Previous game ! : ";
    cin >> loading;
    if(loading!=1)
    {


    instructions();
    int check_sixes_p1 = 0;
    int check_sixes_p2 = 0;
    int turn =0;
    int sc_p1 = 0;
    int sc_p2 = 0;
    int r_l = 6;
    int c_l = 11,e=10000;

    int turn_row = r_l * 10;
    int turn_col = c_l * 11;
    int p1_turn_row = turn_row -1;
    int p2_turn_row = turn_row -3;
    turn_col--;

    //box(r_l,c_l,r_l,c_l);
    board(r_l,c_l,1,1);
    int var=0;
    int win =0;
    while(win==0)
    {
        //writer(sc_p1,sc_p2,turn);
        if(turn==0)
        {
            gotoRowCol(4,(c_l*c_l)+6);
            cout<<"Player 1 turn         ";
            getch();
            erasing_goti(sc_p1,r_l,c_l,p1_turn_row,turn_col);
            moving_goti_p1(sc_p1,r_l,c_l,p1_turn_row,turn_col,turn,check_sixes_p1,var);
            gotoRowCol(5,(c_l*c_l)+6);
            cout << "Player 1 score is "<< sc_p1;
            sleep(e);
            //getch();
            if(sc_p1==100)
            {
                cout << "Player 1 win!";
                win = 1;
            }
        }
        if(win==1)
        {
            turn=0;
        }
        var=0;
        if(turn ==1)
        {
            gotoRowCol(4,(c_l*c_l)+6);
            cout<<"Player 2 turn         ";
            getch();
            erasing_goti(sc_p2,r_l,c_l,p2_turn_row,turn_col);
            moving_goti_p2(sc_p2,r_l,c_l,p2_turn_row,turn_col,turn,check_sixes_p2,var);
            gotoRowCol(6,(c_l*c_l)+6);
            cout << "Player 2 score is "<< sc_p2;
            if(sc_p2==100)
            {
                cout << "Player 2 win!";
                win = 1;
            }
        }
        var=0;
        writer(sc_p1,sc_p2,turn);
    }
    }
    if(loading==1)
    {


    instructions();
    int check_sixes_p1 = 1;
    int check_sixes_p2 = 1;
    int turn ;//=0;
    int sc_p1 ;//= 0;
    int sc_p2 ;//= 0;
    int r_l = 6;
    int c_l = 11,e=10000;

    int turn_row = r_l * 10;
    int turn_col = c_l * 11;
    int p1_turn_row = turn_row -1;
    int p2_turn_row = turn_row -3;
    turn_col--;

    //box(r_l,c_l,r_l,c_l);
    board(r_l,c_l,1,1);
    int var=0;
    int win =0;
    reader(sc_p1,sc_p2,turn);
    on_loading_printing(sc_p1,sc_p2,p1_turn_row,p2_turn_row,turn_col,r_l,c_l);
    while(win==0)
    {
        //reader(sc_p1,sc_p2,turn);

        if(turn==0)
        {
            gotoRowCol(4,(c_l*c_l)+6);
            cout<<"Player 1 turn         ";
            getch();
            erasing_goti(sc_p1,r_l,c_l,p1_turn_row,turn_col);
            moving_goti_p1(sc_p1,r_l,c_l,p1_turn_row,turn_col,turn,check_sixes_p1,var);
            gotoRowCol(5,(c_l*c_l)+6);
            cout << "Player 1 score is "<< sc_p1;
            writer(sc_p1,sc_p2,turn);
            sleep(e);
            //getch();
            if(sc_p1==100)
            {
                cout << "Player 1 win!";
                win = 1;
            }
        }
        if(win==1)
        {
            turn=0;
        }
        var=0;
        if(turn ==1)
        {
            gotoRowCol(4,(c_l*c_l)+6);
            cout<<"Player 2 turn         ";
            getch();
            erasing_goti(sc_p2,r_l,c_l,p2_turn_row,turn_col);
            moving_goti_p2(sc_p2,r_l,c_l,p2_turn_row,turn_col,turn,check_sixes_p2,var);
            gotoRowCol(6,(c_l*c_l)+6);
            cout << "Player 2 score is "<< sc_p2;
            writer(sc_p1,sc_p2,turn);
            if(sc_p2==100)
            {
                cout << "Player 2 win!";
                win = 1;
            }
        }
        var=0;
    }
    }
    return 0;
}
