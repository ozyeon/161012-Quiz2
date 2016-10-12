#include <iostream>

template<class T>
class Vector2D
{
public:
	T x_, y_;
	Vector2D(const T& x_i, const T& y_i) : x_(x_i), y_(y_i)
	{ }
	void print()
	{
		std::cout << x_ << " , " << y_ << std::endl;
	}
};

int main()
{
	Vector2D<int> Vector_int(1, 3);
	Vector2D<float> Vector_float(1.0f, 3.0f);
	Vector2D<double> Vector_double(1.123, 3.123);

	Vector_int.print();
	Vector_float.print();
	Vector_double.print();

	return 0;
}