#include<bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
          long long sx,sy,dx,dy;
          cin>>sx>>sy>>dx>>dy;

          //if destinationY is below sourceY then we can't proceed because we don't have y-1 move to go down
          if(dy<sy){
               cout<<-1<<endl;
               continue;
          }

          //Now try to move above with (x+1,y+1)
          int moveY=dy-sy;

          //Now due to move1 sourceX also changed by y times
          sx+=moveY;  

          //Now we have only one move left (x-1,y) if dx present on right of updated sourceX then we can't
          if(dx>sx){
               cout<<-1<<endl;
               continue;
          }
          int moveX=abs(sx-dx);

          cout<<moveX+moveY<<endl;
     }
}