#include<iostream>

using namespace std;
// Creating a class for each element of the sparse matrix which is defined by 3 values 
class Element
{
    public:
        int row_val;
        int col_val;
        int val;
    public:

    Element()
    {
         row_val = 5;
         col_val = 5;
         val = 10;
    }
    Element(int row_val, int col_val, int val)
    {
        this->row_val = row_val;
        this->col_val = col_val;
        this->val = val;
    }

};
// Creating the class for a sparse matrix using the objects of the class above - as an array of objects of the class above 

class sparseMatrix
{
    public:
    int num_row;
    int num_col;
    int num_elements;
    
    // This is defined as a pointer which is eventually going to point at the array of elements
    Element* A;

    // This is the default constructor
    sparseMatrix()
    {
        num_row =  5;
        num_col = 5;
        num_elements = 5;
    }

    // This is the parametrized constructor which takes in values as input and sets the object values accordingly
    sparseMatrix(int num_row, int num_col, int num_elements, Element* A)
    {
        this->num_row = num_row;
        this->num_col = num_col;
        this->num_elements = num_elements;
        this->A = new Element[this->num_elements];
        
    }
    ~sparseMatrix()
    {
        delete [] A;
    }
    void Create(int row, int col, int val);
    void Get(int row, int col);
    void Display();
};


// Function for creating the sparse matrix
void sparseMatrix::Create(int num_row, int num_col, int num_non_zero)
{
sparseMatrix sp;
for(int i = 0; i<num_non_zero;i++)
{
    cout<<"Enter the row number of the element";
    cin>>sp.A[i].row_val;
    cout<<sp.A[i].row_val;
    cout<<"Enter the column number of the element";
    cin>>sp.A[i].col_val;
    cout<<"Enter the actual value of the element";
    cin>>sp.A[i].val;
}
}

// Function for displaying the sparse matrix 
 void sparseMatrix::Display()
 {
    sparseMatrix sp;
    int k = 0;
    cout<<"The number of rows in the sparse matrix are "<<sp.num_row;
    cout<<"The number of columns in the sparse matrix are"<<sp.num_col;
    cout<<"The number of non zero elements in the sparse matrix are"<<sp.num_elements;
    for(int i = 0;i<sp->num_row;i++)
    {
       for(int j=0;j<sp->num_col;j++)
       {
           if((i==sp->A[i].row_val)&&(j==sp->A[i].col_val))
           {
               cout<<sp->A[i].val<<" ";
           }
           else 
           {
               cout<<"0 ";
           }
       }

    }

 }


int main()
{
sparseMatrix sp1;
//sp1.Create(5,5,5);
sp1.Display();
}