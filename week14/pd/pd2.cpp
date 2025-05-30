#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

const int SIZE = 3;

double matrixA[SIZE][SIZE];
double matrixB[SIZE][SIZE];
double matrixC[SIZE][SIZE];

void printMatrix(char name[], double m[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "  ";
        for (int j = 0; j < SIZE; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void parseMatrix(string input, double m[SIZE][SIZE])
{
    size_t start = input.find('[');
    size_t end = input.find(']');
    if (start == string::npos || end == string::npos)
        return;
    string content = input.substr(start + 1, end - start - 1);
    int row = 0;
    int col = 0;
    string currentNumber;
    int elementCount = 0;

    for (char currentChar : content)
    {
        if (isdigit(currentChar) || currentChar == '.')
        {
            currentNumber += currentChar;
        }
        else if (currentChar == ',')
        {
            if (!currentNumber.empty())
            {
                if (row < SIZE && col < SIZE)
                {
                    m[row][col] = strtod(currentNumber.c_str(), 0);
                    col++;
                    currentNumber = "";
                    elementCount++;
                    if (elementCount % SIZE == 0)
                    {
                        row++;
                        col = 0;
                    }
                }
                else
                {
                    return;
                }
            }
        }
    }

    if (!currentNumber.empty() && row < SIZE && col < SIZE)
    {
        m[row][col] = strtod(currentNumber.c_str(), 0);
        elementCount++;
        if (elementCount % SIZE == 0)
        {
            row++;
            col = 0;
        }
    }

    if (elementCount != SIZE * SIZE)
    {
        while (row < SIZE)
        {
            for (int j = col; j < SIZE; ++j)
            {
                m[row][j] = 0.0;
            }
            row++;
            col = 0;
        }
    }
}

void addMatrices(double a[SIZE][SIZE], double b[SIZE][SIZE], double res[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            res[i][j] = a[i][j] + b[i][j];
}

void subtractMatrices(double a[SIZE][SIZE], double b[SIZE][SIZE], double res[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            res[i][j] = a[i][j] - b[i][j];
}

void multiplyMatrices(double a[SIZE][SIZE], double b[SIZE][SIZE], double res[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            res[i][j] = 0;
            for (int k = 0; k < SIZE; ++k)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

bool isDiagonal(double m[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (i != j && m[i][j] != 0)
                return false;
    return true;
}

void scalarMultiply(double scalar, const double matrix[SIZE][SIZE], double result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            result[i][j] = scalar * matrix[i][j];
        }
    }
}

bool isIdentity(double m[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if ((i == j && m[i][j] != 1) || (i != j && m[i][j] != 0))
                return false;
    return true;
}

void transposeMatrix(double m[SIZE][SIZE])
{
    double transposed[SIZE][SIZE];
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            transposed[j][i] = m[i][j];
    printMatrix("Transpose", transposed);
}

int main()
{
    string input;
    cout << "Matrix Calculator (3x3). Enter command (e.g., A=[...], C=A+B, print(A), Exit):" << endl;
    while (getline(cin, input))
    {
        if (input == "Exit")
            break;
        if (input.length() >= 3 && input[1] == '=' && input[2] == '[')
        {
            if (input[0] == 'A')
                parseMatrix(input, matrixA);
            else if (input[0] == 'B')
                parseMatrix(input, matrixB);
            else if (input[0] == 'C')
                parseMatrix(input, matrixC);
        }
        else if (input.length() >= 7 && input.substr(0, 6) == "print(")
        {
            if (input[6] == 'A' && input.length() > 7 && input[7] == ')')
            {
                char name[] = "A";
                printMatrix(name, matrixA);
            }
            else if (input[6] == 'B' && input.length() > 7 && input[7] == ')')
            {
                char name[] = "B";
                printMatrix(name, matrixB);
            }
            else if (input[6] == 'C' && input.length() > 7 && input[7] == ')')
            {
                char name[] = "C";
                printMatrix(name, matrixC);
            }
        }
        else if (input.length() == 5 && input[2] != '=' && input[3] != '=')
        {
            char op1 = input[2];
            char op = input[3];
            char op2 = input[4];
            double (*m1)[SIZE][SIZE] = 0;
            double (*m2)[SIZE][SIZE] = 0;
            if (op1 == 'A')
                m1 = &matrixA;
            else if (op1 == 'B')
                m1 = &matrixB;
            if (op2 == 'A')
                m2 = &matrixA;
            else if (op2 == 'B')
                m2 = &matrixB;
            if (m1 && m2)
            {
                if (op == '+')
                    addMatrices(m1[0], m2[0], matrixC);
                else if (op == '-')
                    subtractMatrices(m1[0], m2[0], matrixC);
                else if (op == '*')
                    multiplyMatrices(m1[0], m2[0], matrixC);
            }
        }
        else if (input.length() >= 11 && input.substr(0, 11) == "isDiagonal(")
        {
            if (input[11] == 'A' && input.length() > 12 && input[12] == ')')
                cout << "isDiagonal(A) -> " << isDiagonal(matrixA) << endl;
            else if (input[11] == 'B' && input.length() > 12 && input[12] == ')')
                cout << "isDiagonal(B) -> " << isDiagonal(matrixB) << endl;
            else if (input[11] == 'C' && input.length() > 12 && input[12] == ')')
                cout << "isDiagonal(C) -> " << isDiagonal(matrixC) << endl;
        }
        else if (input.length() >= 4 && input[1] == '=' && isdigit(input[0]))
        {
            size_t starPos = input.find('*');
            if (starPos != string::npos && input.length() > starPos + 1)
            {
                double scalar = strtod(input.substr(0, input.find('=')).c_str(), 0);
                char matrixChar = input[starPos + 1];
                double (*matrixPtr)[SIZE][SIZE] = 0;
                if (matrixChar == 'A')
                    matrixPtr = &matrixA;
                else if (matrixChar == 'B')
                    matrixPtr = &matrixB;

                if (matrixPtr)
                {
                    scalarMultiply(scalar, *matrixPtr, matrixC);
                }
            }
        }
        else if (input.length() >= 5 && input[2] == '=' && isdigit(input[0]))
        {
            size_t starPos = input.find('*');
            if (starPos != string::npos && starPos > 2)
            {
                double scalar = strtod(input.substr(starPos + 1).c_str(), 0);
                char matrixChar = input[0];
                double (*matrixPtr)[SIZE][SIZE] = 0;
                if (matrixChar == 'A')
                    matrixPtr = &matrixA;
                else if (matrixChar == 'B')
                    matrixPtr = &matrixB;

                if (matrixPtr)
                {
                    scalarMultiply(scalar, *matrixPtr, matrixC);
                }
            }
        }
        else if (input.length() >= 11 && input.substr(0, 11) == "isIdentity(")
        {
            if (input[11] == 'A' && input.length() > 12 && input[12] == ')')
                cout << "isIdentity(A) -> " << isIdentity(matrixA) << endl;
            else if (input[11] == 'B' && input.length() > 12 && input[12] == ')')
                cout << "isIdentity(B) -> " << isIdentity(matrixB) << endl;
            else if (input[11] == 'C' && input.length() > 12 && input[12] == ')')
                cout << "isIdentity(C) -> " << isIdentity(matrixC) << endl;
        }
        else if (input.length() >= 10 && input.substr(0, 10) == "transpose(")
        {
            if (input[10] == 'A' && input.length() > 11 && input[11] == ')')
                transposeMatrix(matrixA);
            else if (input[10] == 'B' && input.length() > 11 && input[11] == ')')
                transposeMatrix(matrixB);
            else if (input[10] == 'C' && input.length() > 11 && input[11] == ')')
                transposeMatrix(matrixC);
        }
    }
    return 0;
}