//int main()  
//{ 

 // ��������- �� ����, ��� ������ � ��� ������. 

//��������� ��������� ���������: 
// 1. ���_����� *��'� ���������; 
// 2. ���_����� *��'� ��������� * ������ <- ����������� 


// �������� �� �����:(����� ����� ���� ����� ��������) 

/*int a = 5;
int b = 10;
int* p;

p = &a;
*p = 0;

std::cout << "&a = " << &a << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "*p = " << *p << std::endl;


p = &b;
*p = 0;

std::cout << "&b = "  << &b << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "b = " << b << std::endl;
std::cout << "*p = " << *p << std::endl;*/



//�������� �� ���������:(�� ����� ����� ��������� ����� ��������) 

/*const int a = 5;
const int b = 10;
const int* p;

p = &a;

std::cout << "&a = " << &a << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "*p = " << *p << std::endl;


p = &b;

std::cout << "&b = " << &b << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "b = " << b << std::endl;
std::cout << "*p = " << *p << std::endl;*/



//�������� �� ��������: 

 /*int a = 10;
 int* p = &a;

 int** pp = &p;

 std::cout << "a = " << a << std::endl;
 std::cout << "&a = " << &a << std::endl;
 //std::cout << "*a = " << *a << std::endl;


 std::cout << "p = " << p << std::endl;
 std::cout << "&p = " << &p << std::endl;
 std::cout << "*p = " << *p << std::endl;


 std::cout << "pp = " << pp << std::endl;
 std::cout << "&pp = " << &pp << std::endl;
 std::cout << "*pp = " << *pp << std::endl;*/





 //�������� �� �����: 

 /*const int SIZE = 5;
 int arr[SIZE] = { 1, 2, 3, 4, 5 };

 int* p = arr;

 for (int i = 0; i < SIZE; i++)
 {
  arr[i] = 10 * 1 + 1 * 3;
  std::cout << arr[i] << " ";
 }
 std::cout << std::endl;

 for (int i = 0; i < SIZE; i++)
 {
  p[i] = 20 * i - 10;
  std::cout << p[i] << " ";
 }
 std::cout << std::endl;

 return 0;
}*/



//�������� �� ����������� �����: 

/*const int SIZE = 5;
 int arr[SIZE] = { 1, 2, 3, 4, 5 };

const int* p = arr;

for (int i = 0; i < SIZE; i++)
{
 arr[i] = 10 * 1 + 1 * 3;
 std::cout << arr[i] << " ";
}
std::cout << std::endl;

for (int i = 0; i < SIZE; i++)
{
 std::cout << p[i] << " ";
}
std::cout << std::endl;*/






//�������� �� �������: 
/*void Func1();
void Func2(int a);
void Func3(int a, int b);
void Func4(int a, double b);
int Func5();
double Func6(int a);
char Func7(int a, int b);
long Func(int a, double b);
void Func9(int arr[], int size);
void Func10(const int a);
void Func11(const int arr[], int size);*/



//��������� ��������� ���������: 
  // 1. ���_������������_�������� (*��'� ���������)(����_���������_�������); 
  // 2. ���_������������_�������� (*��'� ���������)(����_���������_�������) = ������_�������; <- ����������� 

 /*void (*p1)() = Func1;
 void (*p2)(int) = Func2;
 void (*p3)(int, int)  = Func3;
 void (*p4)(int, double) = Func4;
 int (*p5)() = Func5;
 double (*p6)(int) = Func6;
 char (*p7)(int, int) = Func7;
 long (*p8)(int, double) = Func;
 void (*p9)(int[], int) = Func9;
 void (*p10)(const int) = Func10;
 void (*p11)(const int[], int) = Func11;

 Func1();
 (*p1)();*/

 //std::cout << p1 << " = " << Func1 << std::endl; 
 //std::cout << *p1 << " = " << Func1 << std::endl; 







 //����������� �������� 

 //int a = 10; 
 //int b = 20; 
 //const int c = 20; 

 //int* const p1 = &a; //����������� �������� �� �����, ����'������� �� ����� ����� � ��� �������� �� ����� �����, ��� ����� �������� �������� ����� 
 //const int* p2 = &a; //�������� �� ���������, ���� ��������� �� ��� ���, ��� �� ����� �� ����� 
 //const int* const p1 = &a; //����������� �������� �� ����������(�� ����� �������� ���� �� ��������(������������ ������) 



 //�������� �������� 

 /*int* a = nullptr */  // ��� 0 ��� NULL ��� nullptr ����� 





  // void �������� (�� ����� ������������� ��� ����� ��������������� ����������)

/*int a = 10;
double b = 1.2;

void* p;

p = &a;
std::cout << "&a = " << &a << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "*p = " << *(static_cast<int*>(p)) << std::endl;

p = &b;
std::cout << "&b = " << &b << std::endl;
std::cout << "p = " << p << std::endl;
std::cout << "*p = " << *(static_cast<double*>(p)) << std::endl;*/





//���������� ��������� 
//��������� �� ��������=���� ���� �� ������ �� ����� �-��� �����, ������� �� ���� ����� 

//const int SIZE = 5; 
//int arr[SIZE] = { 1, 2, 3, 4, 5 }; 

//int* p1 = &arr[0]; 

//std::cout << "p1 = 0 = " << p1 + 0 << std::endl; 
//std::cout << "&arr[0] = " << &arr[0] << std::endl;  //�� 3 ������ ����� ��������� ����'���� 
//std::cout << "&p1[0] = " << &p1[0] << std::endl; 


// г����� ��������� = ������� ������ �� ���� ������� �� ���� ����� 






// ������� ������ � ���������  

/*const int SIZE = 5;
int arr[SIZE] = { 1, 2, 3, 4, 5 };
int* ptr = arr;



//��������� �� �������� ������� ����� ������
for (int i = 0; i < SIZE; i++)
 std::cout << arr[i] << " ";
std::cout << std::endl;

for (int i = 0; i < SIZE; i++)
 std::cout << ptr[i] << " ";
std::cout << std::endl;

//��������� �� ������� �������� ����� ������������
for (int i = 0; i < SIZE; i++)
 std::cout << *(arr + i) << " ";
std::cout << std::endl;

for (int i = 0; i < SIZE; i++)
 std::cout << *(ptr + i) << " ";
std::cout << std::endl;


//��������� �� ������ �������� ����� ������
for (int i = 0; i < SIZE; i++)
 std::cout << &arr[i] << " ";
std::cout << std::endl;

for (int i = 0; i < SIZE; i++)
 std::cout << &ptr[i] << " ";
std::cout << std::endl;


//��������� �� ������ ��������
for (int i = 0; i < SIZE; i++)
 std::cout << arr + i << " ";
std::cout << std::endl;

for (int i = 0; i < SIZE; i++)
 std::cout << ptr + i << " ";
std::cout << std::endl;*/

//return 0; 
//} 




//���������� �� ������� �� ��������� ������� 


/*void Initialize(int arr[], int size, int (*initFunction)());
void Show(const int arr[], int size, void (*showFunction)(int element));

int GetVaule1_10();
int GetVaule20_30();

void ShowElement(int element);
void ShowElementInBrackets(int element);
void ShowElementInSqareBrackets(int element);

int main()
{
 const int SIZE = 10;
 int arr[SIZE];

 Initialize(arr, SIZE, GetVaule20_30);
 Show(arr, SIZE, ShowElement);
 Show(arr, SIZE, ShowElementInBrackets);
 Show(arr, SIZE, ShowElementInSqareBrackets);

 return 0;
}

void Initialize(int arr[], int size, int (*initFunction)())
{
 for (int i = 0; i < size; i++)
 {
  arr[i] = initFunction();
 }
}

void Show(const int arr[], int size, void (*showFunction)(int element))
{
 for (int i = 0; i < size; i++)
  showFunction(arr[i]);
 std::cout << std::endl;
}

void ShowElement(int element)
{
 std::cout << element << " ";
}

void ShowElementInBrackets(int element)
{
 std::cout << "(" << element << ") ";
}

void ShowElementInSqareBrackets(int element)
{
 std::cout << "[" << element << "] ";
}

int GetVaule1_10()
{
 return rand() % 10 + 1;
}

int GetVaule20_30()
{
 return rand() % (30 - 10) + 20;
}*/










//����,����,����̲��� ���'��� 


//����.����� ���� ���'��. first in, last out. ����� ��������� ���� ���������� ������� �� �������� 
/*int Function2()
{
 int a = 5;
 return a;
}

void Function1(int a, int b)
{
 double c;
 char arr[3];
 char* p;
}

int main()
{
 int variable = 10;
 int arr[3] = { 1, 2, 3 };

 Function1(arr[0], variable);

 variable = Function2();

 return 0;
}*/

//�������� ���'��� - ������� ������� ��� ����� �-��� main,���������� ��� ���� ��������� �������� 
//������ �������, ����� ���������� �� ��� �������� ������ ����. 



//����,���� - ��� ���������� ���'���. ��������� ����� ������� ��������� 
// ����� �������� ��������� ��� �������� ���� ���������� ���� 





// 2 �������: ��������� 

#include <iostream> 
#include <ctime>
#include <cstdlib> 

	/*int* CreateVariable(int value);
	void Func()
	{
	 std::cout << &"Hello World" << std::endl;
	}

	void Initialize(int arr[], int size);
	void Showww(const int arr[], int size);

	int main()
	{
	 const char* ptr = "Hello World";
	 int a = 5;
	 std::cout << ptr << '\n';

	 int a = 10;
	 int b = 20;
	 int c = 30;
	 int* arr[3] = { &a, &b, &c };
	 for (int i = 0; i < 3; i++)
	 {
	  std::cout << *arr[0] << " ";
	 }

	 int arr2[3][5] = { 0 };
	 int (*ptr)[5] = arr2;
	 for (int i = 0; i < 3; i++)
	 {
	  for (int j = 0; j < 5; j++)
	  {
	  }
	  std::cout << std::endl;
	 }

	 int arr2[3][5][5] = { 0 };*/




	 // new delete 



	 /*int* a = new int;
	 std::cout << a << '\n';
	 std::cout << *a << std::endl;
	 *a = 10;

	 int* ptr1 = new int{ 10 };
	 const int* ptr2 = new const int{ 20 };
	 int** ptr3 = new int* { nullptr };
	 delete ptr1;
	 delete ptr2;
	 delete ptr3;

	 int* ptr = CreateVariable(10);
	 delete ptr;

	 srand(static_cast<unsigned>(time(nullptr)));
	 int size;
	 std::cin >> size;
	 int* arr = new int[size];

	 std::cout << "Enter rows:";
	 int rows;
	 std::cin >> rows;
	 std::cout << "Enter columns: ";
	 int columns;
	 std::cin >> columns;
	 for (int i = 0; i < rows; i++)
	 {
	  arr[i] = new int[columns];
	 }
	 for (int i = 0; i < rows; i++)
	  delete[] arr[i];
	 delete[] arr;*/



	 // L-value R-value 
	 /*int var = 10;
	 int* bad_addr = &(var + 1); // ������
	 int* addr = &var; // ����
	 &var = 40;*/




	 // ��������� 
	 /*int variable = 10;
	 const int CONST = 20;
	 int* ptr1 = &variable;
	 const int* ptr2 = &CONST;
	 variable = 50;
	 *ptr1 = 100;
	 std::cout << CONST << std::endl;
	 std::cout << *ptr2 << std::endl;
	 int& ref1 = variable;
	 std::cout << "&variable = " << &variable << std::endl;
	 std::cout << "&ptr1 = " << &ptr1 << std::endl;
	 std::cout << "&ref1 = " << &ref1 << std::endl;
	 const int& ref2 = CONST;
	 const int& ref = 10;
	 int&& ref3 = 200;

	 int a = 10;
	 int* p = &a;
	 int*& refp = p;
	 p = (int*)5;
	 std::cout << refp << " = " << p << std::endl;
	 std::cout << &refp << " = " << &p << std::endl;

	 int arr[5] = { 1, 2, 3, 4, 5 };
	 int(&ref_arr)[5] = arr;
	 for (size_t i = 0; i < 5; i++)
	 {
	  std::cout << arr[i] << std::endl;
	 }

	 int arr2[] = { 1, 2, 3, 4 };
	 int size2 = 3;
	 int& minElement = *Min(arr2, size2);
	 minElement = 50;

	 return 0;
	}

	int* CreateVariable(int value)
	{
	 return new int{ value };
	}

	void Show(const int* arr, int size)
	{
	 for (int i = 0; i < size; i++)
	 {
	  std::cout << arr[i] << " ";
	 }
	}

	int* Min(int arr[], int size)
	{
	 int min = arr[0];
	 int minindex = 0;
	 for (int i = 1; i < size; i++)
	 {
	  if (min > arr[i])
	  {
	   min = arr[i];
	   minindex = i;
	  }
	 }
	 return arr + minindex;
	}*/

