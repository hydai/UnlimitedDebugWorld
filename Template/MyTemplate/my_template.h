#include <cstring>


using namespace std;
template<class T>   /*在宣告模板前！必定！要寫這行*/

class Compare {
private:
    T a, b;
public:
    Compare(const T&, const T&);
    Compare();
    ~Compare();
    T& Max();
    T& Min();
    void Insert(const T&, const int);
};

#include "my_template.cpp"
/****************************************************************************
 * 注意！如果要把宣告跟實作分開，這裡要 include "my_template.cpp" 才行
 * 因為 template 的形態確認在執行期才會處理，要全部寫在一塊
 * 但是這樣的的可讀性會減少，目前的解決方案是這樣處理的
 * 另外，因為主體宣告必須放在實作上面，所以 include "my_template.cpp" 要放在這裡
 ****************************************************************************/
