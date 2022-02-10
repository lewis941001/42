#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos;
    public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {
        std::cout << "Constructor" << std::endl;
    }
    ~Point()
    {
        std::cout << "Destructor" << std::endl;
    }
    void ShowPosition() const{
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point (const Point &cpy)
    {
        std::cout << "copy Constructor" << std::endl;
    }

    Point operator-()
    {
        std::cout << "operator-" << std::endl;
        // Point
        // Point p(-1 * xpos, -1 * ypos);
        // return p;

        Point *new_p = new Point(-1 * xpos, -1 * ypos);
        std::cout << "qerqrwqeq" << std::endl;
        return (*new_p);
    }
};


int main()
{
    std::cout << "YES COPY CONSTRUCTOR" << std::endl << std::endl;
    std::cout << "pos(1,2) create" << std::endl;
    Point pos(1, 2);

 std::cout << "------------------------" << '\n';

    std::cout << "minus_pos = -pos" << std::endl;
    std::cout << "Point create *Point return" << std::endl;
    Point minus_pos(-pos);
    (-pos).ShowPosition();
 std::cout << "------------------------" << '\n';
    std::cout << "-minus_pos" << std::endl;
    (-minus_pos).ShowPosition();
     std::cout << "------------------------" << '\n';
    std::cout << std::endl;
    return 0;
}