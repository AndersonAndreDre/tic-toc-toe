#include <iostream>
#include <array>
using namespace std;


//makr the chosen position with x/o
void mark(char mat[3][3]){
 

     char n;
   cin>>n;
    cout<<"\n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==n){
                mat[i][j]='x';
            }
        }
     }
   
}
//chck if 3 x's or o's follow each other
bool isWin(char mat[3][3]){
bool t=false;
int x_count=0;
int o_count=0;
int j=0;
while (j!=3)
{
    
    for(int i=0;i<3;i++){
    
   if(mat[i][j]=='x'){
    x_count++;
    o_count=0;

   }
   else if (mat[i][j]='o')
   {
    o_count++;
    x_count=0;
   }
   
   
   j++;
}
if(x_count==3){
    cout<<"Player 1 wins"<<endl;
    t= true;


}
if(o_count==3){
    cout<<"Player 2 wins"<<endl;
    t= true;
}


  


}
return t;
}

int main(){

    char mat [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<"___"<<"___"<<endl;
            cout<<" "<<mat[i][j]<<" |";
            
            //mat[i][j]=num++;
        }
        cout<<endl;
     }
     
     
    //mark with x on 


    cout<<"Player 1 Choose your position:___";
    ;
     //char c=static_cast<char>(n);
     int l=0;
     while(l!=3){
        mark(mat);
        isWin(mat);
        l++;


        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<"___"<<"___"<<endl;
            cout<<" "<<mat[i][j]<<" |";
            
            //mat[i][j]=num++;
        }
        cout<<endl;
     }
        
     }     
     



     

     cout<<"Player 2 Choose your position:___";






}