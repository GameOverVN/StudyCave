#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void RandomValuesToMatrix(int**, int);
void OutputMatrixToScreen(int**, int);
void MaxElementInEvenColumns(int**, int);
void EqualCheckForDiagonalElements(int**, int);
int SearchMinimalElementAboveMainDiagonal(int**, int);

int main()
{
	int const SIZE = 17;

	int** matrix = new int*[SIZE];

	for(int i = 0; i < SIZE; i ++)
	{
		matrix[i] = new int[SIZE];
	}

	RandomValuesToMatrix(matrix, SIZE);

    int commandID;
    do {
        cout << endl << "Enter menu point: \n"
                "1. Point A \n"
                "2. Point B \n"
                "3. Point C \n"
                "4. Show matrix \n"
                "0. Exit \n"
                ">> ";

        cin >> commandID;

        switch (commandID) {
            case 1: {
                cout << endl << "Point A:" << endl;
                MaxElementInEvenColumns(matrix, SIZE);
                break;
            }
            case 2: {
                cout << endl << "Point B:" << endl;
                EqualCheckForDiagonalElements(matrix, SIZE);
                break;
            }
            case 3: {
                cout << endl;
                int minElement = SearchMinimalElementAboveMainDiagonal(matrix, SIZE);
                cout << "Point C: \n Minimal element: " << minElement << endl;
                break;
            }
            case 4:
            {
                cout << endl << "Matrix:" << endl;
                OutputMatrixToScreen(matrix, SIZE);
            }
            case 0:
                break;
            default:
                cout << "Unknown command" << endl;

        }
    }while(commandID != 0);

    return 0;
}

void RandomValuesToMatrix(int** matrix, int const SIZE)
{
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix[i][j] = rand() % 21 - 10;
		}
	}
}

void OutputMatrixToScreen(int** matrix, int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(3) << matrix[i][j] << "|";
		}
		cout << endl;
	}
}

void MaxElementInEvenColumns(int** matrix, int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int max = INT_MIN;
		if (i % 2 == 0 && i != 0)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (matrix[i][j] > max)
				{
					max = matrix[i][j];
				}
			}
			cout << "Max element of even column: " << max << endl;
		}
	}
}

void EqualCheckForDiagonalElements(int** matrix, int const SIZE)
{
	int trueCounter = 0;
	for (int i = 0, columnCounter = 0; i < SIZE; i++)
	{
		if (matrix[i][columnCounter] == matrix[i][SIZE - columnCounter])
		{
			trueCounter++;
            columnCounter++;
		}
	}
	if (trueCounter == SIZE)
	{
		cout << "All diagonal elements are equal" << endl;
	}
	else
	{
		cout << "Diagonal elements are not equal" << endl;
	}
}

int SearchMinimalElementAboveMainDiagonal(int** matrix, int const SIZE)
{
    int min = INT_MAX;
    int stringCounter = 0;
    int columnCounter = 0;
    while(stringCounter != SIZE)
    {
        for(int i = 0; i <= columnCounter; i ++)
        {
            if(matrix[stringCounter][columnCounter] < min)
            {
                min = matrix[stringCounter][columnCounter];
            }
        }
        stringCounter ++;
        columnCounter ++;
    }
    return min;
}

