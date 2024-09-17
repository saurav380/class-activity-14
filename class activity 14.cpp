#include<iostream>
using namespace std;

int main(){

    

    const int SECRET_NUMBER = std::rand() % 100+ 1;
    int guess = 0;
     
    std::cout<<"Guess the secret number between 1 to 100:";

    while(guess != SECRET_NUMBER){
       std::cin>>guess;

       if(guess< SECRET_NUMBER){
        std::cout<<"Too Low! try again";
       } 
      else if(guess> SECRET_NUMBER){
        std::cout<<"Too high! try again";

       }
       else{
        std::cout<<"Congratulations! You guessed it right.";
       }
    }
    return 0;

}