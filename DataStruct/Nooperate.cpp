#include"Nooperate.h"

//实现不用运算符的加减乘除

int Myadd(int a, int b) {
    int sum = 0;
    while (b != 0) {
        sum = a ^ b;
        b = (a & b) << 1;
        a = sum;
    }
    return sum;
};

//相反数， 取反加一
int negNum(int a) {
    return Myadd(~a, 1);
};

//减法
int Myreduce(int a, int b) {
    return Myadd(a, negNum(b));
};

int MyMul(unsigned int a, unsigned int b) {
    int res = 0;
    while (b != 0) {
        if ((b & 1) != 0) {
            res = Myadd(res, a);
        }
        a = a << 1;
        b = b >> 1;
    }
    return res;
};

bool IsNeg(int a){
    return a < 0;
}

int Mydiv(int a, int b) {
    int x = IsNeg(a) ? negNum(a) : a;
    int y = IsNeg(b) ? negNum(b) : b;
    int res = 0;
    for (int i = 31; i > -1; i = Myreduce(i, 1)) {
        if ((x >> i) >= y) {
            res |= (1 << i);
            x = Myreduce(x, y << i);
        }
    }
    return IsNeg(a) ^ IsNeg(b) ? negNum(res) : res;
}

void nptest() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << Myadd(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << Myreduce(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << MyMul(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << Mydiv(a, b) << std::endl;
};