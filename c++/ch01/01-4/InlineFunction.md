
# 매크로 함수(macro function)
C언어에서 #define 선행처리 지시문으로 함수의 정의를 전달함으로써, 함수처럼 동작하는 매크로를 함수 같은 매크로(function-like macro) 또는 매크로 함수라고 함.

## example
다음과 같은 제곱을 구하는 매크로 함수가 있다.
``` c
#include <iostream>
#define SQUARE(x) ((x)*(x))

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    return 0;
}
```
전처리 과정을 거치면 다음과 같이 변경된다.

``` c
#include <iostream>
int main(void)
{
    std::cout << ((5)*(5)) << std::endl;
    return 0;
}
```


## 장점
함수가 호출되면 stack에 함수의 매개변수, 호출 종료 뒤 돌아갈 주소값, 함수 내에서 선언된 지역 변수 등이 저장된다. 이후 함수가 종료되면 stack frame을 정리한다. 매크로 함수를 사용할 경우 이러한 과정이 필요없어지기 때문에 실행속도의 이점이 있다.


## 단점
정의하기가 어렵기 때문에 복잡한 함수를 매크로 형태로 정의하는데 한계가 존재한다.

<br><br>

# Inline Function
``` c++
#include <iostream>

inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}
```

inline function은 macro function과 굉장히 비슷하지만, 인자의 자료형을 지정한다는 점이 다르다. 때문에 자료형에 따라 데이터의 손실이 발생할 수 있다. 물론 overloading을 통해 해결 가능하지만 매크로 함수의 장점이 퇴색된다.


<br>

# Template
```c++
#include <iostream>

template <typename T>
inline T SQUARE(T x)
{
    return x*x;
}

int main(void)
{
    std::cout<<SQUARE(5.5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}
```
위의 코드와 같이 template을 사용하면 자료형에 의존적이지 않도록 할 수 있다.