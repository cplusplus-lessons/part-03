#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(size_t n, char c)

    /* и деструктор */
	~String()


	size_t size;
	char *str;
};