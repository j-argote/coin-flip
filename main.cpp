#include <iostream> 
#include <cstdlib>
using namespace std; 

//define function CoinFlip(); parameter->none; returns string "heads" or "tails"
//generates a random number between 1 and 0 inclusive
//if 1 then return "Heads" else return "Tails"
string CoinFlip(){
  if(rand() % 2 == 1){
    return "Heads";
  }
  else{
    return "Tails";
  }
}

int main(){
  int numOfFlips;
  //read in the number of coin flips
  cin >> numOfFlips;
  //set seed to 2 for srand()
  srand(2);
  //call CoinFlip function based on the read in value
  //print out the result as many times as the read in value
  for(int i = 0; i < numOfFlips; i++){
    cout << CoinFlip() << endl;
  }
  return 0;
}