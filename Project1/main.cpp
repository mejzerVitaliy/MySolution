#include <iostream>
// 
//int main() 
//{ 
// const int SIZE = 3; 
// 
// int arr[SIZE]; 
// 
// for (int index = 0; index < SIZE; index++) 
//  arr[index] = index * index; 
// 
// for (int index = 0; index < SIZE; index++) 
//  std::cout << "arr[" << index << "] = " << arr[index] << std::endl; 
// 
// return 0; 
//} 





// ����������� ������ (41) 

// ��������� ��������� 2-�������� ������: 
// ���_����� ��'�_������[ʳ������_ϳ�������][ʳ������_��������] 

// ��������� �� ��������� �������� 2-�������� ������: 
// ��'�_������[������_ϳ�������][������_��������_ϳ�������] 

/*#include <iostream>

 int main()
 {
 const int WEEKS = 2, DAYS = 5;

 int temperatures[WEEKS][DAYS];

 for (int i = 0; i < WEEKS; i++) {
  for (int j = 0; j < DAYS; j++) {
   temperatures[i][j] = j + i * j + i;
  }
 }

 for (int i = 0; i < WEEKS; i++) {
  for (int j = 0; j < DAYS; j++) {
   std::cout << "temperatures[" << i << "][" << j << "] = " << temperatures[i][j] << std::endl;
  }
  std::cout << std::endl;
 }

 return 0;
}*/



//����� (42) 

//#include <iostream> 
// 
//int main() 
//{ 
// std::cout << "Enter two word: "; 
// 
// char word[30]; 
// char word2[30]; 
//  
// std::cin >> word; 
// std::cin >> word2; 
// 
// std::cout << "Your word: " << word << std::endl; 
// std::cout << "Your word2: " << word2 << std::endl; 
// 
// return 0; 
//} 




// �������(43)- �� ���������� ���� ����, ���� ���� �������� ����� ���������� �� ��������� ���������. 


/*
��������� ���������� �������:
��� ������������ ���������  ��'� ������� (������ ���������)
{
���
}
*/

/*
��������� ������� �������:
��'� ������� (������ ���������);
*/

/*
��� �������� ������� | ��� ������ �������
�������� ���������   | ������� ���������
�������� ���������   | ������� ���������
����������            | ���������
*/

//int Multiple(int a, int b) 
//{ 
// return a * b; 
//} 
// 
//double ToCube(double number) 
//{ 
// double cube = number * number * number; 
// return cube; 
//} 
// 
//int main() 
//{ 
// double number = 2.5; 
// double cube = ToCube(number); 
// 
// std::cout << "Number = " << number << std::endl; 
// std::cout << "Cube = " << cube << std::endl; 
// 
// return 0; 
//} 


//void Show(int arr[], int size) 
//{ 
// for (int i = 0; i < size; i++) 
// { 
//  std::cout << arr[1] << " "; 
// } 
// std::cout << std::endl; 
//} 
// 
// 
//void Initialize(int arr[], int size) 
//{ 
// for (int i = 0; i < size; i++) 
// { 
//  arr[i] = i + i; 
// } 
//} 
// 
//int main() 
//{ 
// const int SIZE1 = 3; 
// const int SIZE2 = 5; 
// 
// int arr1[SIZE1]; 
// int arr2[SIZE2]; 
// 
// Initialize(arr1, SIZE1); 
// Initialize(arr2, SIZE2); 
// 
// Show(arr1, SIZE1); 
// Show(arr2, SIZE2); 
// 
// return 0; 
//} 


// �������� �������� ������ � ������ 

void A(int arr[], int size)
{
	arr[0] = 25;
}


void B(int a)
{
	a = 13;
}

int main()
{
	int arr[3] = { 1, 2, 3 };
	int a = 120;

	A(arr, 3);
	B(a);

	std::cout << arr[0] << std::endl;
	std::cout << a << std::endl;

	return 0;
}
