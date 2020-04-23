#include<iostream>

using namespace std;
class Diagonal
{
    private:
        int* A;
        int n;
    public:
    Diagonal()
    {
        n = 2;
        A = new int[2];

    }
    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~Diagonal()
    {
        delete []A;
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void Diagonal::Set(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}

int Diagonal::Get(int i, int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    else
    {
        return 0;
    }
}
void Diagonal::Display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                std::cout<<A[i]<<" ";
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
    Diagonal d1 = Diagonal(4);
    d1.Set(1,1,1);
    d1.Set(2,2,2);
    d1.Set(3,3,3);
    d1.Set(4,4,4);

    int element = d1.Get(1,2);

    std::cout<<"The element is: "<<element<<std::endl;

    d1.Display();
}