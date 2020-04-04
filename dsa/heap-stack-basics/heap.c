void main()
{
// memory to the pointer is allocated in the stack memory
int *p;
// array of size 5 in heap memory is allocated 
p = new int[5]
// syntax in c language - above syntax in cpp language
p = (int*)malloc(sizeof(int)*5)
// when we do not need the heap memory that we need to first deallocate and the make the pointer as null
delete []p
// if delete is not used then the heap memory is simplt lost and hence first must be deleted
// loss of memory is called memory leak
// heap memory allocation done with the help of pointers and cannot be allocated directly
p = NULL;
}
