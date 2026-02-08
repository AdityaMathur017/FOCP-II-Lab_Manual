//SCORE COMPARING 
#include<iostream>
int main()
{int score1;
    int score2;
    int score3;
    std::cout<<"enter the score of the first player";
    std::cin>>score1;
    std::cout<<"enter the scoreof  the second player";
    std::cin>>score2;
    std::cout<<"enter the score of the third player";
    std::cin>>score3;
    if(score1>score2>score3){
        std::cout<<"player 1 is the winner and player 3 is the loser";
    }
    else if(score1>score3>score2){
        std::cout<<"player 1 is the winner and player 2 is the loser";
    }
    else if(score2>score1>score3){
        std::cout<<"player 2 is the winner and player 3 is the loser";
    }
    else if(score2>score3>score1){
    std::cout<<"player 2 is the winner and player1 is the loser";
    }
    else if(score3>score1>score2){
        std::cout<<"player 3 is the winner and player2 is the loser ";
    }
    else{
        std::cout<<"player3 is the winner and player 1 is the loser";
    }
    return 0;
}