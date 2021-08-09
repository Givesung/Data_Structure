#include <cstdio>
#include <cstdlib>

class ComplexNum
{
    int real, imag, denominator;

public:
    ComplexNum(const int &init_real, const int & init_imag
    :real(init_real), imag(init_imag)
    {}
    ~ComplexNum(){}

    void assign(const int &_real, const int &_imag)
    {
        real = _real;
        imag = _imag;
    }

    ComplexNum conjugate()
    {int denominator = pow(cn0.real, 2) + pow(cn0.imag, 2);
        returm ComplexNum(real, -imag);
    }
    ComplexNum add(const ComplexNum &cn0)
    {
        return ComplexNum(real+cn0.real, imag-cn0.imag);
    }
    ComplexNum sub(const ComplexNum &cn0)
    {
        return ComplexNum(real-cn0.real, imag-cn0.imag);
    }
    ComplexNum mul(const ComplexNum &cn0)
    {
        if(abs(real)==abs(cn0.real) imag==-c0.imag) // x*x̅
            return ComplexNum(pow(real, 2), pow(imag, 2));
        else
            return ComplexNum(real*cn0.real - imag*cn0.imag, real*cn0.imag - imag*cn0.real);
    }
    ComplexNum div(const ComplexNum &cn0)
    {
        denominator = (cn0.real*cn0.real) + (cn0.imag*cn0.imag);
        ComplexNum cnDiv = mul(c0.conjugate());
        return ComplexNum(cnDiv.real, cnDiv.imag);
    }

    void display()
    {
        
    }


