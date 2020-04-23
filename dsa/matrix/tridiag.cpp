#include<iostream>

using namespace std;
class TriDiagonal
{
    private:
        int* A;
        int n;
    public:
    TriDiagonal()
    {
        n = 2;
        int num_elements = 3*n-2;
        A = new int[num_elements];

    }
    TriDiagonal(int* A,int n)
    {
        this->n = n;
        this->A = A;

    }

    int Get(int i, int j);
    void Display();
};


int TriDiagonal::Get(int i, int j)
{
    if(i-j==1)
    {
        return A[i-1];
    }
    else if(i==j)
    {
        return A[i+n-1];
    }
    else if(i-j==-1)
    {
        return A[i+2*n-1];
    }
    else
    {
        return 0;
    }
}
void TriDiagonal::Display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
    if(i-j==1)
    {
        cout<<A[i-1]<<" ";
    }
    else if(i==j)
    {
        cout<<A[i+n-1]<<" ";
    }
    else if(i-j==-1)
    {
        cout<<A[i+2*n-1]<<" ";
    }
    else
    {
        cout<<"0 ";
    }
                    
        }
    cout<<"\n";

    }

}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,1,3,5,8};
    TriDiagonal td1 = TriDiagonal(A,5);
    int element = td1.Get(1,2);

    std::cout<<"The element is: "<<element<<std::endl;

    td1.Display();
}