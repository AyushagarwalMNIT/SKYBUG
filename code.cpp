#include<iostream>
#include<ctime>

using namespace std;
int main(){
    int guess, attempt = 0;
//generate the random nummber
srand(time(0));
int rnum = (rand() % (100-1)) + 1;
    cout<<"NUMBER GUESSING GAME";

    do{
        cout<< "Guess the number between 1 and 100"<<endl;
        cin>>guess;
        attempt++;

        if(guess>rnum){cout<<"too high"<<endl;}
        else if(guess<rnum){cout<<"too low"<<endl;}
        else{cout<<"guesses the correct number in "<<attempt <<" attempts"<<endl;}
    } while(guess != rnum);

    return 0;
}

