#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

    /* Реализуйте оператор присваивания */
	String &operator=(const String &other)

	void append(const String &other);

	size_t size;
	char *str;
};