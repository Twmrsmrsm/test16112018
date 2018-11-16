#include <iostream>


    class date {
    private:
        float x;
        char y;
        float *_x;
        char *_y;
    public:
        float getX() {
            x = 5;
            return x;
        }

        char getY() {
            y = 6;
            return y;
        }

        float setX(float x) {
            std::cout << x << '\n';
        }

        char setY(char y) {
            std::cout << y << '\n';
        }

        float *get_X() {
            _x = &x;
            return _x;
        }

        float *get_Y() {
            _y = &y;
            return _y;
        }

        float set_x(float _x) {
            std::cout << _x << '\n';
        }

        char set_y(char _y) {
            std::cout << _y << '\n';
        };
    }
int main() {
    date a;
    a.setX(a.getX());
    a.setY(a.getY());
    date b;
    b.set_x(b.get_X());
    b.set_y(b.get_Y());
    return 0;
}
