#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ll m, n, k;
    cin >> m >> n >> k;
    
    // Если k слишком мало или слишком велико, весь кусок может достаться Юре
    if (k == 1) {
        cout << m * n << endl;
        return 0;
    }
    
    // Ищем максимально возможный прямоугольник, который можно отломить
    // Пробуем разные варианты разбиения по горизонтали и вертикали
    
    ll max_pieces = 0;
    
    // Перебираем возможное количество разломов по горизонтали (от 0 до m-1)
    for (ll h_breaks = 0; h_breaks <= min(m - 1, k); h_breaks++) {
        ll v_breaks = k - h_breaks;
        
        if (v_breaks < 0 || v_breaks > n - 1) {
            continue;
        }
        
        // Вычисляем размеры куска для Юры
        ll height = m / (h_breaks + 1);
        ll width = n / (v_breaks + 1);
        
        max_pieces = max(max_pieces, height * width);
    }
    
    // Перебираем возможное количество разломов по вертикали (от 0 до n-1)
    for (ll v_breaks = 0; v_breaks <= min(n - 1, k); v_breaks++) {
        ll h_breaks = k - v_breaks;
        
        if (h_breaks < 0 || h_breaks > m - 1) {
            continue;
        }
        
        // Вычисляем размеры куска для Юры
        ll height = m / (h_breaks + 1);
        ll width = n / (v_breaks + 1);
        
        max_pieces = max(max_pieces, height * width);
    }
    
    cout << max_pieces << endl;
    
    return 0;
}