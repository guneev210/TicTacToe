#include<iostream>
using namespace std;

void player1(char a[3][3]){
    char x;
    int y,z;
    cout<<"Player1: choice?"<<endl;
    cin>>x;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==x){
              a[i][j]='X';
              break; 
            }
        }
    }
}
void player2(char a[3][3]){
    char x;
     int y,z;
    cout<<"Player2: choice?"<<endl;
    cin>>x;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==x){
             a[i][j]='0'; 
              break; 
            }
        }
    }
}
void display(char a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
}

int main()
{
    char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    display(a);  
    player1(a);
    display(a);
    player2(a);
    display(a);
    player1(a);
    display(a);
    player2(a);
    display(a);
    player1(a);
    display(a);
    player2(a);
    display(a);
    player1(a);
    display(a);
    player2(a);
    display(a);
    player1(a);
    display(a);

}