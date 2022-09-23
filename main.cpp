/*
Author: Sam Lee
Course: CSCI-135
Instructor: Maryash, Gennadiy
Assignment: Lab 4

*/

#include <iostream>
#include "shapes.h"
int main()
{
  
  std::cout << "create_box(4, 5):\n" << create_box(4, 5) << "\n";
  std::cout << "create_box(8. 10):\n" << create_box(8, 10) << "\n--------------------\n";

  std::cout << "create_checkerboard(4, 5):\n" << create_checkerboard(4, 5) << "\n";
  std::cout << "create_checkerboard(9, 9):\n"<<  create_checkerboard(9, 9) << "\n--------------------\n";
  std::cout << "create_cross(7):\n" << create_cross(7) << std::endl;
  std::cout << "create_cross(8):\n" << create_cross(8) << std::endl << "--------------------\n";
  
  
  std::cout << "create_lower_triangle(6): \n" << create_lower_triangle(6) << std::endl ;
  std::cout << "create_lower_triangle(9): \n" << create_lower_triangle(9) << "\n--------------------\n";
  
  std::cout << "create_upper_triangle(5): \n" << create_upper_triangle(5) << std::endl;
  std::cout << "create_upper_triangle(10): \n" << create_upper_triangle(10) << "\n--------------------\n";

  std::cout << "create_trapezoid(12, 5): \n" << create_trapezoid(12, 5) << std::endl;
  std::cout << "create_trapezoid (5, 20):\n" << create_trapezoid(5, 20) << std::endl;

  std::cout << "create_checkerboard (5,10) \n";
  std::cout << create_checkerboard2(5,10);
  std::cout << std::endl;
  std::cout << "create_checkerboard (10, 5): \n" << create_checkerboard2(10, 5) << "\n";
  return 0;
}
