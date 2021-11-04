#include <iostream>

using namespace std;
#pragma region Task1
template <class T>
class Pair1
{
private:
	T m_first;
	T m_second;
public:
	Pair1(const T& f, const T& s)
		: m_first(f),
		m_second(s)
	{

	}

	T& first()
	{
		return m_first;
	}

	T& second()
	{
		return m_second;
	}

	const T& first() const
	{
		return m_first;
	}
	const T& second() const
	{
		return m_second;
	}
};
#pragma endregion
#pragma region Task2
template <class T1, class T2>
class Pair
{
private:
	T1 m_first;
	T2 m_second;
public:
	Pair(const T1& f, const T2& s)
		: m_first(f),
		m_second(s)
	{

	}

	T1& first()
	{
		return m_first;
	}

	const T1& first() const
	{
		return m_first;
	}

	T2& second()
	{
		return m_second;
	}

	const T2& second() const
	{
		return m_second;
	}
};
#pragma endregion
#pragma region Task3
template <class T2>

class StringValuePair : public Pair <string, T2>
{
public:
	StringValuePair(const string& w, const T2& n)
		: Pair<string, T2>(w, n) {}

};
#pragma endregion

int main()
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	Pair<int, double> p3(6, 7.8);
	cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';

	const Pair<double, int> p4(3.4, 5);
	cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';

	StringValuePair<int> svp("Amazing", 7);
	cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}

