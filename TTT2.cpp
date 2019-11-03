#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;


class player{
    protected: 
        char *name1,*name2;
        char choice1,choice2;
};

class board{
    public:
        char array[3][3];
        int array_flag[3][3];
        board(){
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++){
                    array[i][j] = ' ';
                    array_flag[i][j]=0;
                }
        }
        //reminder
};

class TTT:protected player,public board{
    public:
        bool p1win,p2win;
        bool set_values(char *,char *,char ,char );
        void board_display();
        void display();
        void assign();
        bool check(int n);
        //void update();
};

bool TTT::set_values(char *player1,char *player2,char ch1,char ch2){
    name1=player1;
    name2=player2;
    choice1=toupper(ch1);
    choice2=toupper(ch2);
    if((name1==NULL) || (name2==NULL)){
        return false;
    }
    else
    {
        return true;
    }
    
}

void TTT::board_display(){
    cout << "Make yourself familiar with the structure of the board" << endl;
    cout << endl;
    //cout << "___________________" << endl;
    cout << "|  1  |  2  |  3  |" << endl;
    cout << "______*______*____*" << endl;
    cout << "|  4  |  5  |  6  |" << endl;git 
    cout << "______*______*____*" << endl;
    cout << "|  7  |  8  |  9  |" << endl;
    //cout << "___________________" << endl;

}

void TTT::display(){
    //cout <<"___________________" << endl;
    cout <<"|  "<<array[0][0]<<"  |  "<<array[0][1]<<"  |  "<<array[0][2]<<"  |\n";
    cout <<"______*_____*_____*" << endl;
    cout <<"|  "<<array[1][0]<<"  |  "<<array[1][1]<<"  |  "<<array[1][2]<<"  |"<<endl;
    cout <<"______*_____*_____*" << endl;
    cout <<"|  "<<array[2][0]<<"  |  "<<array[2][1]<<"  |  "<<array[2][2]<<"  |"<<endl;
    //cout <<"___________________" << endl;

}
void TTT::assign(){
    int i=0,c;
    p1win = false;
    p2win = false;
    while(p1win!=true && p2win!=true){
        //check for draw
         c=0;
        for(i=0;i<3;i++)
            for(int j=0;j<3;j++){
                if(array_flag[i][j]==1)
                    c++;
            
        if(c==9){
            cout<<"its a DRAW !!!!";
            exit(1);
        }}
        
        bool element_insert = false;
        while(element_insert!=true){
            cout <<endl<<name1<< "'s Choice" << endl;
            int n;
            cin>>n;
            element_insert = check(n);
            if(element_insert){
                switch (n)
                {
                case 1:
                    array[0][0]=choice1;
                    array_flag[0][0]=1;
                    break;
                case 2:
                    array[0][1]=choice1;
                    array_flag[0][1]=1;
                    break;
                case 3:
                    array[0][2]=choice1;
                    array_flag[0][2]=1;
                    break;
                case 4:
                    array[1][0]=choice1;
                    array_flag[1][0]=1;
                    break;
                case 5:
                    array[1][1]=choice1;
                    array_flag[1][1]=1;
                    break;
                case 6:
                    array[1][2]=choice1;
                    array_flag[1][2]=1;
                    break;
                case 7:
                    array[2][0]=choice1;
                    array_flag[2][0]=1;
                    break;
                case 8:
                    array[2][1]=choice1;
                    array_flag[2][1]=1;
                    break;
                case 9:
                    array[2][2]=choice1;
                    array_flag[2][2]=1;
                    break;
                
                default:
                    printf("wrong input\n this line should never come\n");
                    break;
                }
            }
        }
        display();

        //check for draw
         c=0;
        for(i=0;i<3;i++)
            for(int j=0;j<3;j++){
                if(array_flag[i][j]==1)
                    c++;
            
        if(c==9){
            cout<<"its a DRAW !!!!";
            exit(1);
        }}

            if ((array[0][0] == choice1) && (array[0][1] == choice1) && (array[0][2] == choice1))
            {
            	cout<<endl;
                cout <<name1<< " is the Winner";
                p1win = true;
                exit(1);  
            }
            else if ((array[1][0] == choice1) && (array[1][1] == choice1) && (array[1][2] == choice1))
            {
            	cout<<endl;
                 cout <<name1<< " is the Winner";
                p1win = true;
                exit(1);
            }
            else if ((array[2][0] == choice1) && (array[2][1] == choice1) && (array[2][2] == choice1))
            {
         	cout<<endl;
            cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);
            }
        // Vertical
        else if ((array[0][0] == choice1) && (array[1][0] == choice1) && (array[2][0] == choice1))
        {
        	cout<<endl;
             cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);
        }
        else if ((array[0][1] == choice1) && (array[1][1] == choice1) && (array[2][1] == choice1))
        {
        	cout<<endl;
             cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);;
        }
        else if ((array[0][2] == choice1) && (array[1][2] == choice1) && (array[2][2] == choice1))
        {
        	cout<<endl;
             cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);
        }
        // Diagonal
        else if ((array[0][0] == choice1) && (array[1][1] == choice1) && (array[2][2] == choice1))
        {
        	cout<<endl;
             cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);
        }
        else if ((array[0][2] == choice1) && (array[1][1] == choice1) && (array[2][0] == choice1))
        {
        	cout<<endl;
            cout <<name1<< " is the Winner";
            p1win = true;
            exit(1);
        }
        else
        {
            cout << endl;
        }
        /*
                        For Player 2
        */
        cout <<endl<<name2<< "'s Choice" << endl;
        element_insert = false;
        while (element_insert != true) {
            cout <<name2<< ": Enter your no" << endl;
            int n;
            cin >>n;
            element_insert = check(n);
            if (element_insert) {
                switch (n)
                {
                case 1:
                    array[0][0]=choice2;
                    array_flag[0][0]=1;
                    break;
                case 2:
                    array[0][1]=choice2;
                    array_flag[0][1]=1;
                    break;
                case 3:
                    array[0][2]=choice2;
                    array_flag[0][2]=1;
                    break;
                case 4:
                    array[1][0]=choice2;
                    array_flag[1][0]=1;
                    break;
                case 5:
                    array[1][1]=choice2;
                    array_flag[1][1]=1;
                    break;
                case 6:
                    array[1][2]=choice2;
                    array_flag[1][2]=1;
                    break;
                case 7:
                    array[2][0]=choice2;
                    array_flag[2][0]=1;
                    break;
                case 8:
                    array[2][1]=choice2;
                    array_flag[2][1]=1;
                    break;
                case 9:
                    array[2][2]=choice2;
                    array_flag[2][2]=1;
                    break;
                
                default:
                    printf("wrong input\n this line should never come\n");
                    break;
                }
            }
        }

        display();


        if ((array[0][0] == choice2) && (array[0][1] == choice2) && (array[0][2] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else if ((array[1][0] == choice2) && (array[1][1] == choice2) && (array[1][2] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else if ((array[2][0] == choice2) && (array[2][1] == choice2) && (array[2][2] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        // Vertical
        else if ((array[0][0] == choice2) && (array[1][0] == choice2) && (array[2][0] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else if ((array[0][1] == choice2) && (array[1][1] == choice2) && (array[2][1] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else if ((array[0][2] == choice2) && (array[1][2] == choice2) && (array[2][2] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        // Diagonal
        else if ((array[0][0] == choice2) && (array[1][1] == choice2) && (array[2][2] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else if ((array[0][2] == choice2) && (array[1][1] == choice2) && (array[2][0] == choice2))
        {
        	cout<<endl;
            cout <<name2<< " is the Winner"<<endl;
            p2win = true;
            exit(1);
        }
        else
        {
            cout << endl;
        }
        
        //check for draw
        c=0;
        for(i=0;i<3;i++)
            for(int j=0;j<3;j++){
                if(array_flag[i][j]==1)
                    c++;
            
        if(c==9){
            cout<<"its a DRAW !!!!";
            exit(1);
        }}
    }
}

bool TTT::check(int position){
     if(position<0 || position > 9)
        return false;
    else{
     
        switch (position)
            {
                case 1:
                    if(array_flag[0][0]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 2:
                    if(array_flag[0][1]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 3:
                    if(array_flag[0][2]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 4:
                    if(array_flag[1][0]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 5:
                    if(array_flag[1][1]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 6:
                    if(array_flag[1][2]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 7:
                    if(array_flag[2][0]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 8:
                    if(array_flag[2][1]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                case 9: 
                    if(array_flag[2][2]==1){
                        cout<<"\nposition already occupied\n";
                        return false;
                    }
                    else
                        return true;
                    break;
                    
        }
    }
}
 
int main(){
    cout << "Welcome to Tic Tac Toe !\n";
    cout << "enter Player Details\n";
    char p1[30], p2[30], ch1, ch2;
    cout << "enter Player1 name:\n";
    scanf("%s",p1);
    cout << "enter Player2 name:\n";
    scanf("%s",p2);
    char *temp1=p1;
    char *temp2=p2;

    cout << "\nenter the choice of the players of X or O\n";
    cout << "enter choice of player1"  << endl;
    cin >> ch1;
    cout << "enter choice of player2"  << endl;
    cin >> ch2;
    TTT game;
    bool game_start = game.set_values(temp1, temp2, ch1, ch2);
    if(game_start){
        cout << "\n all the details have been assigned successfully\n";
    }else{
        cout << "something went wrong \n";
        return -1;
    }
    cout << "\nPlease make yourself familiar with the board layout\n";
    game.board_display();
    cout << "\n Lets Begin !" << endl;
    game.assign();
    return 0;
}   


