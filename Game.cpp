// task 3- Make a number guessing game in c++ 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  srand(time(0));
  int Rnumber= 1+(rand()%100);
  int lives= 11;
  int userGuess;
  cout<<" You have 10 lives to guess the magical number ...Get set Go !"<<endl<<endl;
  cout<<"enter your guess :"<<"                                      No. of lives"<<endl;
  while(lives>=1)
  { 
    cin>>userGuess;
    if(lives==1)
    {
        cout<<" you loose ! better luck next time !"<<endl;
        break;
    }

    if(userGuess==Rnumber)
    {
        cout<<"yeah , You Win! You got it right!";
        break;
    }
    else if(userGuess<Rnumber)
    {
        cout<<"nah! This is small one! Go for some bigger ."<<"                 "<<lives-2<<endl;
        lives--;
    }
    else if(userGuess>Rnumber)
    {
        cout<<"Its a bigger one. Try to guess the smaller one."<<"              "<<lives-2<<endl;
        lives--;
    }
  }
  return 0;
}


