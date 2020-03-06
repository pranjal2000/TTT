#include <iostream>
#include <cstdlib> 
using namespace std;
    char arr[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char player = 'X';

void entry(char n){
    system("CLS");
cout<<"**** Welcome to The TIC TAC TOE Game ****"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==n)
            arr[i][j]= player;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void changeplayer(){
    if (player=='X')
    player = 'O';
    else 
    player = 'X';
    
}
char winner(){
    if(arr[0][0]==player && arr[0][1]==player && arr[0][2]==player)
    return player;
    if(arr[1][0]==player && arr[1][1]==player && arr[1][2]==player)
    return player;
    if(arr[2][0]==player && arr[2][1]==player && arr[2][2]==player)
    return player;
    if(arr[0][1]==player && arr[1][1]==player && arr[2][1]==player)
    return player;
    if(arr[0][2]==player && arr[1][2]==player && arr[2][2]==player)
    return player;
    if(arr[0][0]==player && arr[1][0]==player && arr[2][0]==player)
    return player;
    if(arr[0][0]==player && arr[1][1]==player && arr[2][2]==player)
    return player;
    if(arr[0][2]==player && arr[1][1]==player && arr[2][0]==player)
    return player;
return '/';
}
int main(){
    
cout<<"**** Welcome to The TIC TAC TOE Game ****"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<< " ";
    }
        cout<<endl;
}
while(true){
    char n;
    cout<<"Enter from the numbers above to make your move: ";
    cin>>n;
    entry(n);
    if (winner ()== player){
    cout<<player<<" wins!" <<endl;
    break;
    }
    changeplayer();
}
system("pause");
    return 0;
}


