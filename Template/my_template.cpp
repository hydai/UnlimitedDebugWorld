template<class T>
Compare<T>::Compare()
{
    a = 0;b = 0;
    cout<<"No initial value a, b. By default a= "<<a<<" b="<<b<<endl;
}
template<class T>
Compare<T>::Compare(const T& in_a, const T& in_b) : a(in_a), b(in_b)
{
    cout<<"Initial value. a= "<<a<<" b="<<b<<endl;
}
template<class T>
Compare<T>::~Compare()
{
    cout<<"Bye Bye\n";
}

template<class T>
T& Compare<T>::Max()
{
    return (a>b)?a:b;
}
template<class T>
T& Compare<T>::Min()
{
    return (a<b)?a:b;
}

template<class T>
void Compare<T>::Insert(const T& in_tmp, const int location)
{
    if (location==0) {
        a = in_tmp;
    }
    else {
        b = in_tmp;
    }
    cout<<"Insert value = "<<in_tmp<<endl;
    cout<<"Now a= "<<a<<"b= "<<b<<endl;
}
