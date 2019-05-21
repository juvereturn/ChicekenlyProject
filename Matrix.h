class myMatrix {
private:
int Matrix1[3][3];
int Matrix2[3][3];
int Matrix3[3][3];//For the answer
public:
void Matrix1Edit();
void Matrix2Edit();
int AddFunction(int i, int j);
int SubtractFunction1(int i, int j);
int SubtractFunction2(int i, int j);
int MultiplyFunction(int i, int j);
int ScalarMultiplyFunction1(int i, int j, int n);
int ScalarMultiplyFunction2(int i, int j, int n);
int MatrixTransposeFunction1(int i, int j);
int MatrixTransposeFunction2(int i, int j);
};