#include <stdio.h>

int _size,_ask,x[1000], y[1000];

int _up(int _i)
{
    int _j,_mult=1;
    for(_j=0;_j<_size;_j++)
    {
        if(_i!=_j)
            _mult*=(_ask - x[_j]);
    }
    return _mult;
}



int _down(int _i)
{
    int _j, _mult = 1;
    for(_j=0;_j<_size;_j++)
        {
            if(_i != _j)
                _mult *= (x[_i] - x[_j]);
        }
    return _mult;
}

int main()
{
    int i,_i;
    double _result;
    printf("Pelase Enter number of inputs \n");
    scanf("%d",&_size);

    // input
    for(i=0; i<_size; i++)
    {
        printf("x%d -> ",i);
        scanf("%d",&x[i]);
        printf("y%d -> ",i);
        scanf("%d",&y[i]);
    }

    // _ask
    scanf("%d",&_ask);

    // calculation

    _result =0.00000;

    for(_i=0; _i<_size; _i++)
    {
        _result +=(((double)(_up(_i))/(double)(_down(_i))) * (double)(y[_i]));
    }

    printf("%lf",_result);

    return 0;
}
