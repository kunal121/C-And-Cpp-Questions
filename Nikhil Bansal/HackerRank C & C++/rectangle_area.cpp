/**
*	This is solution to hacker rank problem : Rectangle Area
	LInk : https://www.hackerrank.com/challenges/rectangle-area
*/
class Rectangle{
public:
    int width,height; 
    void display(){
         cout << width << " " << height << endl;
     }   
};
class RectangleArea:public Rectangle{
public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        cout << width * height;
    }
};


