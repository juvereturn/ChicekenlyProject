#include"Matrix.h"
#include<iostream>

void myMatrix::Matrix1Edit(){//To change the first matrix
int i, j, n;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			std::cout << "Input the of " << i + 1 <<" row and "<< j + 1 << " column: ";
			std::cin >> n;
	        Matrix1[i][j] = n;
		}
	}
}
	
void myMatrix::Matrix2Edit(){//To change the second matrix
int i, j, n;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			std::cout << "Input the of " << i + 1 <<" row and "<< j + 1 << " column: ";
			std::cin >> n;
	        Matrix2[i][j] = n;
		}
	}
}


int myMatrix::AddFunction(int i, int j){//To add matrices together
			Matrix3[i][j] = Matrix1[i][j] + Matrix2[i][j];
			return Matrix3[i][j];
}

int myMatrix::SubtractFunction1(int i, int j){//To subtract 1st matrix with 2nd Matrix
			Matrix3[i][j] = Matrix1[i][j] - Matrix2[i][j];
			return Matrix3[i][j];
}

int myMatrix::SubtractFunction2(int i, int j){//To subtract 2nd matrix with 1st Matrix
			Matrix3[i][j] = Matrix2[i][j] - Matrix1[i][j];
			return Matrix3[i][j];
}

int myMatrix::MultiplyFunction(int i, int j){//To multiply matrices
	int l;
		Matrix[i][j] = 0;
		for(l = 0; l < 3; l++){
			Matrix3[i][j] += Matrix1[i][l] * Matrix2[l][j];
			return Matrix3[i][j];
		}
}
int myMatrix::ScalarMultiplyFunction1(int i, int j, int n){//To do scalar multiplication for the 1st matrix
			 Matrix3[i][j] = Matrix1[i][j] * n;
			 return Matrix3[i][j];
}

int myMatrix::ScalarMultiplyFunction2(int i, int j, int n){//To do scalar multiplication for the 2nd matrix
			Matrix3[i][j] = Matrix2[i][j] * n;
			return Matrix3[i][j];

}

int myMatrix::MatrixTransposeFunction1(int i, int j){//To tranpose the 1st matrix
			Matrix3[i][j] = Matrix1[j][i];
			return Matrix3[i][j];
}

int myMatrix::MatrixTransposeFunction2(int i, int j){//To tranpose the 2nd matrix
			Matrix3[i][j] = Matrix2[j][i];
			return Matrix3[i][j];
}