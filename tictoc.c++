#include <iostream>
#include <array>
using namespace std;

//draw funtion
void draw(char mat[3][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<"___"<<"___"<<endl;
            cout<<" "<<mat[i][j]<<" |";
            
            //mat[i][j]=num++;
        }
        cout<<endl;
     }


}
//makr the chosen position with x/o
void mark(char mat[3][3]){

//draw(mat);


 

    /* code */

      char x;
    cout<<"Player 1 Choose your position:___";
   cin>>x;
    cout<<"\n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==x){
                mat[i][j]='x';
            }
        }
     }

     draw(mat);

     //player 2s turn
      char o;
    cout<<"Player 2 Choose your position:___";
   cin>>o;
    cout<<"\n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==o){
                mat[i][j]='o';
            }
        }
     }

     draw(mat);



 }
 
/// player 1s turn
  






   





//chck if 3 x's or o's follow each other
bool isWin(char mat[3][3]){


    for(int i=0; i<3; i++){


      if(mat[i][0] == mat[i][1] && mat[i][0]=='x' && mat[i][0] == mat[i][2] || mat[0][i] == mat[1][i] && mat[0][i]=='x' && mat[0][i] == mat[2][i]){
       cout<<"Player 1 wins"<<endl;
       return false;


    }
    

    //

    if(mat[0][0] == mat[1][1]&& mat[0][0]=='x' && mat[0][0] == mat[2][2] || mat[0][2] == mat[1][1] && mat[0][2]=='x' && mat[0][2] == mat[2][0]){
        cout<<"Player 1 wins"<<endl;
        return false;
    }
    

    //player 2

    if(mat[i][0] == mat[i][1] && mat[i][0]=='o' && mat[i][0] == mat[i][2] || mat[0][i] == mat[1][i]&& mat[0][i] == mat[2][i]){
       cout<<"Player 2 wins"<<endl;
       return false;


    }
    

    //

    if(mat[0][0] == mat[1][1]&& mat[0][0]=='o' && mat[0][0] == mat[2][2] || mat[0][2] == mat[1][1] && mat[0][2] == mat[2][0]){
        cout<<"Player 2 wins"<<endl;
        return false;
    }

    }
    


    ///for(int i=0; i<3; i++)
    //for(int j=0; j<3; j++)
    //if(mat[i][j] != 'X' && mat[i][j] != 'O')
    //return true;



return true;
}










int main(){


    char mat [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    draw(mat);
  while (isWin(mat))
  {
    /* code */
    mark(mat);
    isWin(mat);
  }  



}