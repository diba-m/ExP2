#include <iostream>
using namespace std;

template <class T>
T min_template(T a, T b){
        if (a <= b){
                return a;
        }
        return b;
}

class A
{
	private:
		int a;
	public:
		A(int b = 0)
		{
			a = b;
		}
		bool operator < (const A& x)
		{
			if (a < x.a)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main(int argc, char* argv[]){
        A x = new A(4);
        A y = new A(8);
        A z;
        z = min_template(i,j);
        cout << "risultato di min_template<A>: "  << z << endl;
        int i = 5;
        int j = 6;
        int k;
        //istanziazione implicita del template
        k = min_template(i,j);  //il compilatore capisce che dentro 'T' della funzione 'min_template' deve mettere 'int'
        cout << "risultato di min_template<int>: "  << k << endl;

        double c = 4.3;
        double d = 7.6;
        double e = min_template(c,d); //il compilatore capisce che dentro 'T' della funzione 'min_template' deve mettere 'double'
        cout << "risultato di min_template<double>: " << e << endl;


}
