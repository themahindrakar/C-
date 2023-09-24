#include <iostream>
using namespace std;
class sample1;
class sample2;
class sample3;

class sample1
{
    int x;
    public:
    sample1(int a);
    friend int sum (sample1 s1, sample2 s2, sample3 s3);
};
sample1::sample1(int a)
{
        x=a;
}

class sample2
{
    int y;
    public:
    sample2(int b);
    friend int sum (sample1 s1, sample2 s2, sample3 s3);
};
sample2::sample2(int b)
{
        y=b;
}

class sample3
{
    int z;
    public:
    sample3(int c);
    friend int sum (sample1 s1, sample2 s2, sample3 s3);
};
sample3::sample3(int c)
{
    z=c;
}

int sum(sample1 s1, sample2 s2, sample3 s3)
{
    int sum;
    sum=s1.x+s2.y+s3.z;
    return sum;
}

int main()
{
    sample1 obj1(3); sample2 obj2(5); sample3 obj3(7);
    int sum1=sum(obj1, obj2, obj3);
    cout<<"Sum: "<<sum1;
    return 0;
}