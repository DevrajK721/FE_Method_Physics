class Triangle {
public:
    Triangle(double b, double h); // Constructor
    ~Triangle(){}; // Destructor
    double base, height; 
    double area();
};
    
Triangle::Triangle(double b, double h) {
    base = b; 
    height = h;
}

double Triangle::area() {
    return 0.5 * base * height; 
}