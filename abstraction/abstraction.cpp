class IShape  // class này đóng vai trò là interface vì tất cả các hàm của nó đều là hàm thuần ảo
{
public:
    virtual ~IShape();
    virtual void move_x(int x) = 0;
    virtual void move_y(int y) = 0;
    virtual void draw() = 0;
};
 
class Line : public IShape
{
public:
    virtual ~Line();
    virtual void move_x(int x); // class Line sẽ phải có code cụ thể của hàm move_x
    virtual void move_y(int y); // class Line sẽ phải có code cụ thể của hàm move_y
    virtual void draw(); // class Line sẽ phải có code cụ thể của hàm draw
private:
    point end_point_1, end_point_2;
//...
};
 
int main (void)
{
    IShape* shape = new Line();
    // Gọi một số hàm setup cho shape
    //...
    // Vẽ shape
    shape->move_x(10);
    shape->move_y(20);
    shape->draw();
    //...
}