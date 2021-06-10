#include <iostream>
using namespace std;

string box[17] = {"0", "1", "2", "3", "4", "5", "6","7", "8", "9", "10", "11", "12", "13", "14", "15", "16"};

void Display()
{
    system("CLS");
    system("COLOR 9");
    cout << "\t\tAdvance Tic Tac Toe " << endl;
    cout << "\tPlayer 1 (X)  -  Player 2 (O)\n"<< endl;
    cout << endl;
    cout << "\t\t     |     |     |     " << endl;
    cout<<"\t\t  "<<box[1]<<"  |  "<<box[2]<<"  |  "<<box[3]<<"  | "<<box[4]<<endl;
    cout << "\t\t_____|_____|_____|_____" << endl;
    cout << "\t\t     |     |     |     " << endl;
    cout<<"\t\t  "<<box[5]<<"  |  "<<box[6]<<"  |  "<<box[7]<<"  | "<<box[8]<<endl;
    cout << "\t\t_____|_____|_____|_____" << endl;
    cout << "\t\t     |     |     |     " << endl;
    cout<<"\t\t  "<<box[9]<<"  |  "<<box[10]<<" |  "<<box[11]<<" | "<<box[12]<<endl;
    cout << "\t\t_____|_____|_____|_____" << endl;
    cout << "\t\t     |     |     |     " << endl;
    cout<<"\t\t  "<<box[13]<<" |  "<<box[14]<<" |  "<<box[15]<<" | "<<box[16]<<endl;
    cout << "\t\t     |     |     |     " << endl;

};
int Decide(){
    if (box[1] == box[2] && box[2] == box[3] && box[3]==box[4])
		return 1;
   else if (box[5] == box[6] && box[6] == box[7] && box[7]==box[8])
		return 1;
   else if (box[9] == box[10] && box[10] == box[11] && box[11]==box[12])
		return 1;
   else if (box[13] == box[14] && box[14] == box[15] && box[15]==box[16])
		return 1;
   else if (box[1] == box[5] && box[5] == box[9] && box[9]==box[13])
		return 1;
   else if (box[2] == box[6] && box[6] == box[10] && box[10]==box[14])
		return 1;
   else if (box[3] == box[7] && box[7] == box[11] && box[11]==box[15])
		return 1;
   else if (box[4] == box[8] && box[8] == box[12] && box[12]==box[16])
		return 1;
   else if (box[1] == box[6] && box[6] == box[11] && box[11]==box[16])
		return 1;
   else if (box[4] == box[7] && box[7] == box[10] && box[10]==box[13])
		return 1;
    else if (box[1] != "1" && box[2] != "2" && box[3] != "3" && box[4] != "4" && box[5] != "5" && box[6] != "6" && box[7] != "7" && box[8] != "8" && box[9] != "9" && box[10] != "10" && box[12] != "12" && box[13] != "13" && box[14] != "14" && box[15] != "15" && box[16] != "16")
		return 0;
	else
		return -1;
}
int main(){
    int player = 1,i,choice;
	char mark;
	do
	{
		Display();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
        if (choice == 1 && box[1] == "1")
			box[1] = mark;
		else if (choice == 2 && box[2] == "2")
			box[2] = mark;
		else if (choice == 3 && box[3] == "3")
			box[3] = mark;
		else if (choice == 4 && box[4] == "4")
			box[4] = mark;
		else if (choice == 5 && box[5] == "5")
			box[5] = mark;
		else if (choice == 6 && box[6] == "6")
			box[6] = mark;
		else if (choice == 7 && box[7] == "7")
			box[7] = mark;
		else if (choice == 8 && box[8] == "8")
			box[8] = mark;
		else if (choice == 9 && box[9] == "9")
			box[9] = mark;
		else if (choice == 10 && box[10] == "10")
			box[10] = mark;
		else if (choice == 11 && box[11] == "11")
			box[11] = mark;
		else if (choice == 12 && box[12] == "12")
			box[12] = mark;
		else if (choice == 13 && box[13] == "13")
			box[13] = mark;
		else if (choice == 14 && box[14] == "14")
			box[14] = mark;
		else if (choice == 15 && box[15] == "15")
			box[15] = mark;
		else if (choice == 16 && box[16] == "16")
			box[16] = mark;
        else
		{
			cout<<"Invalid Choice ";
			player--;
			cin.ignore();
			cin.get();
		}
		i=Decide();
		player++;
	}while(i==-1);
	Display();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	cin.ignore();
	cin.get();
    
    return 0;
}