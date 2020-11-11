#include <iostream>
#include <cmath>
using namespace std;
void loadinput();
void printgrid();
bool checkrow(int row, int column);
bool checkcolumn(int row, int column);
bool checksquare(int row, int column);
bool solve(int row, int column);
int inputgrid[9][9]; 
struct Playinggrid {
	int number;
	bool fixed;
} 
	grid[9][9];
void loadinput(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (inputgrid[i][j] == 0){
				
				grid[i][j].fixed = false;
				grid[i][j].number = 0;
			}
			
			else{
				grid[i][j].fixed = true;
				grid[i][j].number = inputgrid[i][j];
			}
		}
	}
}
				
void printgrid() {
	
	for (int i = 0; i < 9; i++)
	{
		
		for (int j = 0; j < 9; j++)
		{
			cout << grid[i][j].number << " ";
		}
		
		cout << endl;
	}
}
bool checkrow(int row, int column){
	for (int i = 0; i < 9; i++){
		if (i != column){
			if (grid[row][i].number == grid[row][column].number ){
				return false;
			}
		}
	}
		
	return true;
	
} 
bool checkcolumn(int row, int column){

	for (int i = 0; i < 9; i++){
		if (i != row){
			if (grid[i][column].number == grid[row][column].number ){
				return false;
			}
		}
	}
	return true;	
}
bool checksquare(int row, int column){
	int vsquare = row/3;
	int hsquare = column/3;
	
           	      for (int i = vsquare * 3; i < (vsquare*3 + 3); i++){
		for (int j = hsquare * 3; j < (hsquare*3 + 3); j++){
			if (!(i == row && j == column)){
				if (grid[ row ][ column ].number == grid[i][j].number){
				return false;
				}	
			}
		}	
	}
	return true;
}
bool solve(int row, int column){
		while (grid[row][column].fixed == true)
{
		column++;
		
		if(column > 8){
			column = 0;
			row++;
		}
		if (row > 8){
			return true;
		}
	}
	
	for (int n = 1; n < 10; n++){
		int nextrow, nextcolumn;
		
		grid[row][column].number = n;
		
		if ( checkcolumn(row, column) 
		  && checkrow(row, column) 
		  && checksquare(row, column)){
			nextrow = row;
			nextcolumn = column;
			
			nextcolumn++;
			if(nextcolumn > 8){
			nextcolumn = 0;
			nextrow++;
			}
			if (nextcolumn == 0 && nextrow == 9){
				return true;
			}
			if(solve(nextrow, nextcolumn)){
				return true;
			}
		}
	}
	grid[row][column].number = 0;
	return false;
	
}
int main(){
	
	solve(0, 0);
	
	printgrid();
	
	return 0;
}
