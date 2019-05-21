#include<iostream>
#include"Matrix.h"

int main(){
myMatrix m;
int i, j, n;
int input;
std::cout << "Input your first matrix\n" << std::endl; //Input The first matrix
m.Matrix1Edit(); //Input The first matrix
std::cout << "\n";
std::cout << "Input your second matrix\n" << std::endl;
m.Matrix2Edit(); //Input The second matrix
std::cout << "\n";
while(input != 11){
	std::cout << "Input 1 to change matrix 1\nInput 2 to change matrix 2\nInput 3 to add matrices together\nInput 4 to subtract matrix1 with matrix2\nInput 5 to subtract matrix2 with matrix1\nInput 5 to multiply matrices\nInput 7 to do scalar multiplication with matrix1\nInput 8 to do scalat multiplication with matrix2\nInput 9 to transpose matrix1\nInput 10 to transpose matrix2\nInput 11 to exit\n"; // Instructions
	std::cout << "Input the number here: ";
	std::cin >> input;
	if (input == 1){//To change the first matrix
		m.Matrix1Edit();
		std::cout << "\n";
	} else if (input == 2){//To change the second matrix
		m.Matrix2Edit(); 
		std::cout << "\n";
	} else if (input == 3){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.AddFunction(i, j) << " ";//To add matrices together
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 4){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.SubtractFunction1(i, j) << " ";//To subtract 1st matrix with 2nd Matrix
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 5){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.SubtractFunction2(i, j) << " ";//To subtract 2nd matrix with 1st Matrix
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 6){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.MultiplyFunction(i, j) << " ";//To multiply matrices
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 7){
		std::cout << "Enter a number for a scalar multiplication: ";
		std::cin >> n;
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.ScalarMultiplyFunction1(i, j, n) << " ";//To do scalar multiplication for the 1st matrix
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 8){
		std::cout << "Enter a number for a scalar multiplication: ";//To do scalar multiplication for the 2nd matrix
		std::cin >> n;
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.ScalarMultiplyFunction2(i, j, n) << " ";
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 9){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.MatrixTransposeFunction1(i, j) << " ";//To tranpose the 1st matrix
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	} else if (input == 10){
		for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
				std::cout << m.MatrixTransposeFunction2(i, j) << " ";//To tranpose the 2nd matrix
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	}
		

}
}
