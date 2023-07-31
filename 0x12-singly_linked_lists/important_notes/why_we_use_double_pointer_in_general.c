#include <stdio.h>
#include <stdlib.h>

//- when we pass a pointer we pass a copy of it not the actual pointer so if we modify it like this
void edit_int_singlePointer(int *integer)
{
	int *y = malloc(sizeof(int));
	*y = 123;
	integer = y;
}
//*  the pointer will point to y instead of 'x' (x is defined in the  main function ) so the value of 'integer'
//* inside 'edit_int_singlePointer' will be changed but out of the scope of 'edit_int_singlePointer'
//* the value won't be changed bcs we only edited a copy of the pointer not the pointer it self

//! to be able to change a pointer value we have to dereference it first but in this case we want to change the pointer address

//? and make it point to another Place in memory to do that we want to pass to the 'edit_int'  a double pinter to x
//? then dereference it inside the 'edit_int' function then assign it to another pointer
//? doing that will make the value of the pointer in main function get changed

void edit_int_doublePointer(int **integer)
{
	int *y = malloc(sizeof(int));
	*y = 123;
	*integer = y;
}

int main()
{

	int i = 10;
	int *x = &i;
	printf("before                  : %p , %i\n", x, *x);

	edit_int_singlePointer(x);							  // will print 10 due the fact the pointer address is changed only inside the function but not in the main
	printf("edit_int single pointer : %p , %i\n", x, *x); // bcs we edit a copy of the pointer , and we didn't dereference it

	// we want to change the pointer address and make it pointer to another place in memory not only change it's value
	//? so that we didn't dereference it , if we did we would change the value of the pointer
	//? but the pointer address will not be changed and we dont want that

	edit_int_doublePointer(&x); // will output 123 bcs we dereferenced the double pointer so we changed the value of it globally
	printf("edit_int double pointer : %p , %i\n", x, *x);
	//! note that (not only) the value of the pointer is changed but the pointer address also is changed

	return 0;
}

