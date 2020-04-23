#include<iostream>

using namespace std;
class LowerTriangular
{
    private:
        int* A;
        int n;
    public:
    LowerTriangular()
    {
        n = 2;
        int num_elements = n*(n+1)/2;
        A = new int[num_elements];

    }
    LowerTriangular(int* A,int n)
    {
        this->n = n;
        this->A =  A;

    }

    int Get(int i, int j);
    void Display();
};


int LowerTriangular::Get(int i, int j)
{
    if(i<=j)
    {
        return A[i*(i-1)/2+j];
    }
    else
    {
        return 0;
    }
}
void LowerTriangular::Display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                std::cout<<A[i*(i+1)/2+j]<<" ";
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
    int A[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    LowerTriangular l1 = LowerTriangular(A,5);
    int element = l1.Get(1,2);

    std::cout<<"The element is: "<<element<<std::endl;

    l1.Display();
}