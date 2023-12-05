//программа написана на православном С так как мой компиолятор отказывается понимать богомерзкий С++

#include <stdio.h>

int hello(int x);

int main() {
    int result = hello(1);
    printf("%d", result);
    return 0;
}
//здесь мы получаем ошибку изза того что функция объявлена, но не определена
//чтобы избавиться от нее надо либо сразу определить функцию или же определить ее далее по коду

#include <stdio.h>

int hello(int x) {
    return x + 1;
}

int main() {
    int result = hello(1);
    printf("%d", result);
    return 0;
}
//так функция будет работать
