#include<iostream>
#include<cmath>

using namespace std;
const double pi=3.142;

double calc_area_circle(double radius)
{
    
    return pi*pow(radius,2);
}

double calc_area_cylinder(double cylinder_radius,double cylinder_height)
{
   return pi*pow(cylinder_radius,2)*cylinder_height;
}

void volume_cylinder()
{
   double cylinder_radius{};
   double cylinder_height{};
   cout<<"Enter the radius of the cylinder :";
   cin>>cylinder_radius;
   cout<<"Enter the height of the cylinder :";
   cin>>cylinder_height;
   cout<<"The area of the cylinder is "<<calc_area_cylinder(cylinder_radius,cylinder_height)<<endl;

}
void area_circle()
{
   double radius{};
   cout<<"Enter the radius of the circle : ";
   cin>>radius;
   cout<<"Area of the circle is :"<<calc_area_circle(radius)<<endl; 
}

int main()
{
    area_circle();
    volume_cylinder();
}