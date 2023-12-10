#include <iostream>
#include <limits>

void board(char *spaces){
std::cout << '\n';
std::cout << " " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << " " << '\n';
std::cout << "____|_____|____" << '\n';
std::cout << " " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << " " << '\n';
std::cout << "____|_____|____" << '\n';
std::cout << " " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << " " << '\n';
std::cout << "    |     |     " << '\n';
std::cout << '\n';}

void Player(char player,char *spaces){
int input;
do{
std::cout<<"Choose a number between 1 and 9: \n";
std::cin>>input;
input --;
if(spaces[input]==' '){
spaces[input]=player;
break;
}}while(!input>0 || !input<8);
}

void Computer(char *spaces,char PC){
int number;
srand(time(NULL));
while(true){
number = rand() % 9;
if(spaces[number] == ' '){
spaces[number] = PC;
break;
}}}

int main() {
char player='X';
char PC='O';
char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
do{
board(spaces);
Player(player,spaces);
Computer(spaces,PC);
board(spaces);
}while(true);




}
//takeouts-Had to get some help while setting up the ground for playing
//The char spaces[] syntax is equivalent to char* spaces, both notations indicate that the function expects a pointer to the first element of an array of characters.(I forgot that array is already decaded into memory adress).
//Still need to add if conditions to check if the player won or lost 