#include<iostream>

using namespace std;
class TP
{
    private:
        int* A;
        int n;
    public:

    TP(int* A,int n)
    {
        this->n = n;
        this->A = A;

    }

    int Get(int i, int j);
    void Display();
};

int TP::Get(int i, int j)
{
    // Upper triangular part of the matrix
    if(i<=j)
    {
        return A[j-i];
    }
    else
    {
        return A[n-1+(i-j)];
    }
}
void TP::Display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
            cout<<A[j-i]<<"  ";
            }
            else
            {
            cout<<A[n-1+(i-j)]<<"  ";
            }
        }

        cout<<"\n";

    }

}

int main()
{
    int A[] = {2,3,4,5,6,7,8,9,10};
    TP tp1 = TP(A,5);
    int element = tp1.Get(1,2);

    std::cout<<"The element is: "<<element<<std::endl;

    tp1.Display();
}