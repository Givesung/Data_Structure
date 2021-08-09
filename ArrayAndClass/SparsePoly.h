#include <cstdio>

class SparsePoly
{
    struct Term{
        int   expon;
        float coeff;
    };

    constexpr MAX_TERMS = 80;
    int nTerms;
    Term term[MAX_TERMS];


