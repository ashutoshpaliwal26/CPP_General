#include <iostream> 
using namespace std;

// '''Function Declaration'''

// It is check that a no is prime of not.
void prime_check(int num);

// It prints all the prime no bettween two no.
void prime_no(int a, int b);

// It prints fibonachi seriese up till 
void fibonaci(int num);

// It calculate the factorial of a number
int factorial(int num);

// It calculate the nCr of a number
int nCr(int fact, int r);

// it find the minimum no from an array element;
int arrMin(int num);

// It find the maximum  no from an array element.
int arrMax(int num);

// For linear Index searching in array by giving them a key.
int linearIndexSearch(int array[], int num, int key);

// For binary Index searching in array by giving them a key.
int binaryArraySearch(int array[], int n, int key);

// It swap two no from each other.
void swap(int a, int b);

// It short an array in assending order.
int selectionArrayShort(int array[], int n)

// Main function
int main(){
    return 0;
}
// '''Function Defination'''

// It is check that a no is prime of not.
void prime_check(int num)
{
    int x;
    for (int i = 2; i < num; i++)
    {
        x = num % i;
        if (x == 0)
        {
            cout << num << " is a not a prime no." << endl;
            break;
        }
    }
    if (x == 1)
    {
        cout << num << " is a prime no." << endl;
    }
}

// It prints all the prime no bettween two no.
void prime_no(int a, int b)
{
    if (a == 0 || a == 1)
    {
        /* code */
        cout << 1 << endl;
    }

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                /* code */
                if (i == j)
                {
                    /* code */
                    cout << i << endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
}

// It prints all possible fibonaci no up till n
void fibonaci(int num)
{
    int a , b ,c;
	a = 0;
	b = 1;
	// cout << a << endl << b << endl ;
	for(int i = 1; i <=num; i++)
	{
		cout << a << endl;
		c = a+b;
		a = b ;
		b = c ;
		// cout << "a" << endl;
	}
	
}

// It prints factorial of a number
int factorial(int num)
{   int x = 1;
    for (int i = 1; i <= num; i++)
    {
       /* code */
       x = x*i;
    }
    // cout << x << endl ;
    return x ;
}

// It calculate the nCr
int nCr(int fact, int r)
{
    int a = fact-r ;
    int b = factorial(fact)/(factorial(a)*factorial(r)) ;
    return b;
}

// it find the minimum no from an array element;
int arrMin(int num)
{
    int minimum = 1215752191;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        /* code */
        cin >> array[i];
    }

    for (int i = 0; i < num; i++)
    {
        /* code */
        if (array[i] < minimum)
        {
            /* code */
            minimum = array[i];
        }
    }
    return minimum;
}

// It find the maximum no from an array elemnet.
int arrMax(int num)

{
    int max = -771660342;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        /* code */
        cin >> array[i];
    }
    for (int i = 0; i < num; i++)
    {
        /* code */
        if (array[i] > max)
        {
            /* code */
            max = array[i];
        }
    }

    return max;
}

// For linear Index searching in array by giving them a key.
int linearIndexSearch(int array[], int num, int key){
    for (int i = 0; i < num; i++)
    {
        /* code */
        if (array[i]==key)
        {
            return i ;
        }
        
    }
    return -1;
    
}

// For binary Index searching in array by giving them a key.
int binaryArraySearch(int array[], int n, int key)
{
	int start = 0;
	int end = n;
	while (start<=end)
	{
		int middle_Element = (start+end)/2;
		if (array[middle_Element] == key)
		{
			/* code */
			return middle_Element ;
		}
		else if (array[middle_Element] > key)
		{
			end = middle_Element - 1 ;
		}
		else{
			start = middle_Element + 1 ;
		}
		
	}
	return -1;
	
}

// It swap two no from there places.
// It only swap first element.
void swap(int a, int b){
    int t = a;
    a = b ;
    b = t;
    cout << a << " " << b <<  " " ;
}
