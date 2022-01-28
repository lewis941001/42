#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
}   Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *p3 = new Point;

    p3->xpos = p1.xpos + p2.xpos;
    p3->ypos = p1.ypos + p2.ypos;
    //  여기 또한 넘겨주는 방식을 모르겠음
    return (*p3);
    //Point &add = *p3 add가 *p3의 다른 이름
}

int main()
{
    Point *point1 = new Point;
    point1->xpos = 10;
    point1->ypos = -10; 
    
    Point *point2 = new Point;
    point2->xpos = -10;
    point2->ypos = 10;

    //  넘겨주는 방식을 모르겠음   
    //  Point *add = PntAdder(*p1, *p2);
    Point &add = PntAdder(*point1, *point2);
    //뭔가 값을 가르키는 이름이 const Point &p1 = *point1; point의 값은 *point이니까 이 것의 별명을 p1으로 하겠다

    std::cout << add.xpos << " " << add.ypos << std::endl;

    delete point1;
    delete point2;
    //delete는 왜 이렇게 하는 거여
    delete &add;
}